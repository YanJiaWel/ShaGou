#include "mypointslider.h"

MyPointSlider::MyPointSlider(QWidget *parent) : QSlider(parent)
{

}

void MyPointSlider::wheelEvent(QWheelEvent *e)
{
    QWidget::wheelEvent(e);
}

void MyPointSlider::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);
}

void MyPointSlider::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);
}

void MyPointSlider::mouseDoubleClickEvent(QMouseEvent *event)
{
    QWidget::mouseDoubleClickEvent(event);
}
