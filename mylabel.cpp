#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel (parent)
{
    this->StartPoint = QPoint(0,0);
        this->EndPoint = QPoint(0,0);
        this->lineColor = QColor(Qt::red);
        this->lineSize = 1;
}

//绘制事件
void MyLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);//必须有，才能让背景图片显示出来
    QPainter painter(this);
    QPen pen;
    pen.setColor(lineColor);
    pen.setWidth(lineSize);
    painter.setPen(pen);
    painter.drawRect(QRect(StartPoint.x(), StartPoint.y()
                           , EndPoint.x()-StartPoint.x(), EndPoint.y()-StartPoint.y()));
}
//鼠标按下
void MyLabel::mousePressEvent(QMouseEvent *e)
{
    StartPoint = e->pos();
    EndPoint = e->pos();
    //设置按下flag为true
    isPressed = true;
    //发送开始位置坐标信号
    emit StartPointSignal(StartPoint);
//    qDebug()<<"开始"<<StartPoint;
}

//鼠标移动
void MyLabel::mouseMoveEvent(QMouseEvent *e)
{
    if(isPressed)
    {
      //获得结束点的坐标
      EndPoint=e->pos();
      //发送结束位置坐标信号
      emit StopPointSignal(EndPoint);
      update();  //更新label显示
//        qDebug()<<"按下移动"<<EndPoint;
    }

}

//鼠标抬起
void MyLabel::mouseReleaseEvent(QMouseEvent *e)
{
    isPressed=false;
    update();
}

void MyLabel::setLineColor(const QColor lineColor)
{
    this->lineColor = lineColor;
}

void MyLabel::setLineSize(const int lineSize)
{
    this->lineSize = lineSize;
}

QPoint MyLabel::getStartPoint()
{
    return StartPoint;
}

QPoint MyLabel::getEndPoint()
{
    return EndPoint;
}

void MyLabel::clear()
{
    StartPoint = QPoint(0,0);
    EndPoint = QPoint(0,0);
    update();
}
