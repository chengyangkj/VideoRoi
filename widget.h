#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <opencv2/opencv.hpp>
#include <QMessageBox>
#include "mylabel.h"
#include <QPoint>
using namespace cv;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void open_path_slot();
    void StartPointSlot(QPoint p);
    void StopPointSlot(QPoint p);
    void PointTextChangeSlot(QString);
private:
    Ui::Widget *ui;
    void show_img(Mat image,QLabel *label);
    MyLabel *label_img;
    VideoCapture *capture=NULL;
    QPoint StartPoint;
};

#endif // WIDGET_H
