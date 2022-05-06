#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include "framelesswidget.h"
#include "titlebar.h"
#include "common_data.h"
#include "playerbuttom.h"
#include "middlepart.h"

class MainWindow : public FramelessWidget
{
    Q_OBJECT

private:
    QVBoxLayout*        m_main_layout;
    TitleBar*           m_title_bar;
    PlayerButtom*       m_player_bottom;
    MiddlePart*         m_middlePart;
    qint16              m_actual_w   = WINDOW_DEFAULT_WIDTH;               //窗口默认最小宽度
    qint16              m_actual_h   = WINDOW_DEFAULT_HEIGHT;              //窗口默认最小高度

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();    
private:
    void initSetting();             //读取基本的文件并进行设置
    void initUi();

public slots:
    void slotsShowMiniWindow();
    void slotsShowMaxWindow();
    void slotsShowCloseWindow();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
};

#endif // MAINWINDOW_H
