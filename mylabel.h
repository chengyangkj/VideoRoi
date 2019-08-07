#ifndef MYLABEL_H
#define MYLABEL_H

#include <QObject>
#include <QLabel>
#include <QPainter>
#include <QPoint>
#include <QColor>
#include <QPen>
#include <QMouseEvent>
#include <qdebug.h>
class MyLabel : public QLabel
{
     Q_OBJECT



public:
    MyLabel(QWidget *parent);
    //重写绘制事件
    virtual void paintEvent(QPaintEvent *event) override;
    //鼠标按下
    void mousePressEvent(QMouseEvent *e);
    //鼠标移动
    void mouseMoveEvent(QMouseEvent *e);
    //鼠标抬起
    void mouseReleaseEvent(QMouseEvent *e);
    //得到画框的起点和终点
    QPoint getStartPoint();
    QPoint getEndPoint();
    void setLineColor(const QColor lineColor);
    void setLineSize(const int lineSize);
     void clear();
private:
    QPoint StartPoint;          //画线起点
    QPoint EndPoint;            //画线终点
    QColor lineColor;               //线条颜色
    int lineSize;                  //5种线型
    bool isPressed;
signals:
    void StartPointSignal(QPoint p);  //开始坐标的信号
    void StopPointSignal(QPoint p);  //结束坐标的信号

};

#endif // MYLABEL_H
