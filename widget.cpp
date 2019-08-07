#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    label_img = new MyLabel(this);
    //关联开始坐标的信号
    connect(label_img,SIGNAL(StartPointSignal(QPoint)),
            this,SLOT(StartPointSlot(QPoint)));

    //关联结束坐标的信号
    connect(label_img,SIGNAL(StopPointSignal(QPoint)),
            this,SLOT(StopPointSlot(QPoint)));

     label_img->setStyleSheet("border:1px solid rgb(0, 0, 0)");
    label_img->setMaximumSize(600,350);
    label_img->setMinimumSize(600,350);
    //自定义label添加到布局
    ui->label_layout->addWidget(label_img);
    //连接相关槽函数
    connect(ui->path_btn,SIGNAL(clicked(bool)),
            this,SLOT(open_path_slot()));

}
void Widget::StartPointSlot(QPoint p){
    StartPoint = p;
    //获取开始坐标槽函数
    //qDebug()<<p;
    if(capture!=NULL){
        //计算比例 得出原图的坐标
        double label_size_w = label_img->size().width();
        double label_size_h = label_img->size().height();
        double img_w = capture->get(3);
        double img_h = capture->get(4);
        double point_x = p.x();
        double point_y = p.y();
        int ROI_x = (point_x/label_size_w)*img_w;
        int ROI_y = (point_y/label_size_h)*img_h;

        ui->lineEdit_start_x->setText(QString::number(ROI_x));
        ui->lineEdit_start_y->setText(QString::number(ROI_y));
    }
    else{
        ui->lineEdit_start_x->setText(QString::number(0));
        ui->lineEdit_start_y->setText(QString::number(0));
    }

}
void Widget::StopPointSlot(QPoint p){
    //获取结束坐标槽函数
    //qDebug()<<p;
    if(capture!=NULL){
        //计算比例 得出原图ROI的宽高
        double label_size_w = label_img->size().width();
        double label_size_h = label_img->size().height();
        double img_w = capture->get(3);
        double img_h = capture->get(4);
        double point_End_x = p.x();
        double point_End_y = p.y();
        double point_Start_x = StartPoint.x();
        double point_Start_y = StartPoint.y();
        int ROI_w = ((point_End_x-point_Start_x)/label_size_w)*img_w;
        int ROI_h = ((point_End_y-point_Start_y)/label_size_h)*img_h;


        ui->lineEdit_size_w->setText(QString::number(ROI_w));
        ui->lineEdit_size_h->setText(QString::number(ROI_h));
    }
    else{
        ui->lineEdit_size_w->setText(QString::number(0));
         ui->lineEdit_size_h->setText(QString::number(0));
    }

}

void Widget::open_path_slot(){
    //打开视频按钮的槽函数
    QString file_name = QFileDialog::getOpenFileName(this,tr("选择视频文件"),".",
                                                    tr("视频格式(*.avi *.mp4 *.flv *.mkv)"));
    QFile file(file_name);
    if(!file.open(QIODevice::ReadOnly))
    {

        return;
    }
    else{
        ui->lineEdit_path->setText(file_name);
        capture = new VideoCapture();
        capture->open(file_name.toStdString());
        Mat frame;
        bool ret = capture->read(frame);
        if(!ret){
            QMessageBox::critical(NULL, "错误!", "读取视频失败!", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            return;
        }

        show_img(frame,label_img);
        //获取总时长 帧数/帧率
        double total_time =capture->get(7)/capture->get(5);
        ui->time_label->setText(QString::number(total_time)+"s");
        //设置地址
        ui->label_path->setText(file_name);
        //获取帧率
        ui->rate_label->setText(QString::number(capture->get(5)));
        //获取宽度
        ui->width_label->setText(QString::number(capture->get(3)));
        //获取高度
        ui->height_label->setText(QString::number(capture->get(4)));
    }
}
void Widget::show_img(Mat image,QLabel *label){

//    在label上显示opencv图片
    cv::cvtColor(image,image,CV_BGR2RGB);
    QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows,
                        image.cols*image.channels(),
                        QImage::Format_RGB888).scaled(label->width(), label->height());

    label->clear();
    label->setPixmap(QPixmap::fromImage(img));
              //ui->processPushButton->setEnabled(true);

}
Widget::~Widget()
{
    delete ui;
}
