#ifndef MYPROGRESS_H
#define MYPROGRESS_H

#include <QWidget>
#include <QSlider>
#include "common_data.h"
#include "style_sheet.h"

class MyProgress : public QSlider
{
    Q_OBJECT
public:
    explicit MyProgress(QWidget *parent = nullptr);

protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void wheelEvent(QWheelEvent* e);
    void mousePressEvent(QMouseEvent *event);//实现点哪里定位哪里
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);
signals:

public slots:
    void slotSetTime(int allTime,int curTime);

};

#endif // MYPROGRESS_H
