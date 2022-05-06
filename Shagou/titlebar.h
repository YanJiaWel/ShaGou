#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>
#include "common_data.h"
#include "style_sheet.h"
#include "mypointslider.h"
//公共设置
class TitleBar : public QFrame
{
    Q_OBJECT

public:
    QPushButton* backBtn;
    QPushButton* refreshBtn;

    QPushButton* musicBtn;          //音乐
    QPushButton* liveBtn;           //直播
    QPushButton* listenBtn;         //听书
    QPushButton* otherBtn;          //探索

    QPushButton* searchBtn;         //搜索
    QLineEdit*   searchEdit;        //输入框
    QPushButton* matchBtn;          //听歌识曲

    QPushButton* photoBtn;          //头像
    QPushButton* loginBtn;          //登录

    QPushButton* skinBtn;           //皮肤
    QPushButton* msgBtn;            //消息
    QPushButton* menuBtn;           //主菜单
    QPushButton* separateBtn;       //分隔
    QPushButton* simpleBtn;         //精简模式
    QPushButton* minBtn;            //最小化
    QPushButton* maxBtn;            //最大化/还原
    QPushButton* closeBtn;          //关闭

    MyPointSlider*     switchSlider;      //切换界面的滑块动画效果  - 自定义禁止了鼠标基本事件的slider控件
private:
    QHBoxLayout* leftTitle;         //左边
    QHBoxLayout* winTitle;          //各个模块界面
    QHBoxLayout* searchTitle;       //搜索区域
    QHBoxLayout* searchBox;         //搜索框和搜索图标合并区域
    QHBoxLayout* userTitle;         //用户区域
    QHBoxLayout* rightTitle;        //右边
    QHBoxLayout* titleBox;          //title的所有图标区域
    QHBoxLayout* sliderBox;         //滑动动画区域
    QVBoxLayout* myTitle;           //titleBox + 滑动图标

    void initTitleBar();
    void initSignalSlot();



public:
    explicit TitleBar(QWidget *parent = nullptr);

signals:
    void sendPreActiveMainWindow(MAIN_WINDOW_TYPE);
public slots:
    void setActiveMainWindow(MAIN_WINDOW_TYPE);

};

#endif // TITLEBAR_H
