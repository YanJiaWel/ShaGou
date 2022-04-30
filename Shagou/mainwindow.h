#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "framelesswidget.h"

class MainWindow : public FramelessWidget
{
    Q_OBJECT

private:
    qint16              m_actual_w   = WINDOW_DEFAULT_WIDTH;               //窗口默认最小宽度
    qint16              m_actual_h   = WINDOW_DEFAULT_HEIGHT;              //窗口默认最小高度

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void initSetting(void);             //读取基本的文件并进行设置
};

#endif // MAINWINDOW_H
