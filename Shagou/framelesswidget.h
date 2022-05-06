#ifndef FRAMELESSWIDGET_H
#define FRAMELESSWIDGET_H
/*
无边框窗口，可移动，四个角进行拉伸，双击最大化/还原
*/
#include <QWidget>
#include <QEvent>
#include <QMouseEvent>
#include <QCursor>
#include <QRect>

#include "common_data.h"
class FramelessWidget : public QWidget
{
    Q_OBJECT

    enum CursorPos : char  //记录光标位置。
    {
        Default = 0,       //非窗口边框区域
        Title,             //标题栏区域   m_title_h:105
        Left,              //根据m_border计算状态
        Top,
        Right,
        Bottom,
        LeftTop,
        RightTop,
        LeftBottom,
        RightBottom
    };
private:
    //
    const int           m_border  = WINDOW_DEFAULT_BORDER;                 //边框所占像素
    const int           m_double_border     = WINDOW_DEFAULT_BORDER*2;     //双倍边框所占像素
    CursorPos           m_cursor  = Default;            //
    bool                m_left_button_state = false;    //true:鼠标左键按下状态
    QRect               m_original_rect     = {0,0,0,0};    //原始左上角坐标
    QPoint              m_cursor_start_pos  = {0,0};    //鼠标起始坐标
    QPoint              m_cursor_end_pos    = {0,0};    //鼠标结束坐标
    //属性参数
    //qint16              m_min_w   = WINDOW_DEFAULT_WIDTH;               //窗口默认最小宽度
    //qint16              m_min_h   = WINDOW_DEFAULT_HEIGHT;              //窗口默认最小高度
    qint16              m_title_h = WINDOW_DEFAULT_TITLE_HEIGHT;        //标题栏区域默认高
signals:
    void winPositionChange(const int&,const int&);                    //位置改变后，发送起点坐标。

public:
    explicit FramelessWidget(QWidget *parent = nullptr);
    ~FramelessWidget() {}
    //void setWindowMinSize(const QSize& size) { m_min_w = size.width(); m_min_h = size.width(); }
    void setWindowTitleHeight(const qint16 h) { m_title_h = h; }

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void enterEvent(QEvent *event);

public slots:
};

#endif // FRAMELESSWIDGET_H
