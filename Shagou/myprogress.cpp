#include "myprogress.h"

MyProgress::MyProgress(QWidget *parent) : QSlider(parent)
{
    this->setMouseTracking(true);
    this->setMinimumWidth(WINDOW_MIN_HEIGHT);
    this->setFixedHeight(12);
    this->setOrientation(Qt::Horizontal);
    this->setToolTip("进度条");
    this->setCursor(Qt::PointingHandCursor);
    this->setStyleSheet(BUTTOM_SHEET_PROGRESS);
}

void MyProgress::enterEvent(QEvent *event)
{
    Q_UNUSED(event)
    this->setStyleSheet(BUTTOM_SHEET_PROGRESS_FOCUS);
    //计算位置，获取对应时间的歌词，并显示出来
    this->setToolTip("我是歌词~");//动态刷新需要配合moveEvent事件
}

void MyProgress::leaveEvent(QEvent *event)
{
    Q_UNUSED(event)
    this->setStyleSheet(BUTTOM_SHEET_PROGRESS);
    this->setToolTip("进度条");
}

void MyProgress::wheelEvent(QWheelEvent *e)
{
    QWidget::wheelEvent(e);
}

void MyProgress::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        int dur = this->maximum() - this->minimum();
        int pos = this->minimum() + dur * ((double)event->x() / this->width());
        if(pos != this->sliderPosition())
        {
            this->setValue(pos);
        }
    }
}

void MyProgress::mouseReleaseEvent(QMouseEvent *event)
{
    QWidget::mouseReleaseEvent(event);
}

void MyProgress::mouseDoubleClickEvent(QMouseEvent *event)
{
    QWidget::mouseDoubleClickEvent(event);
}

void MyProgress::slotSetTime(int allTime, int curTime)
{
    this->setMinimum(0);
    this->setMaximum(allTime);
}
