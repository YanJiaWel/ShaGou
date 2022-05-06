#ifndef MYPOINTSLIDER_H
#define MYPOINTSLIDER_H

#include <QWidget>
#include <QSlider>

class MyPointSlider : public QSlider
{
    Q_OBJECT
public:
    explicit MyPointSlider(QWidget *parent = nullptr);

signals:

public slots:

protected:
    void wheelEvent(QWheelEvent* e);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
};

#endif // MYPOINTSLIDER_H
