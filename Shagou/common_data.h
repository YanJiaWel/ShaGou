#ifndef COMMON_DATA_H
#define COMMON_DATA_H
#include <QPushButton>
#include <QFrame>
#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QSlider>
#include <QEvent>
#include <QMouseEvent>
#include <QScrollArea>
#include <QStackedLayout>
#include <QButtonGroup>

#if 1   //base window
#define WINDOW_MIN_WIDTH            (1270)//(400)
#define WINDOW_MIN_HEIGHT           (900)//(300)
#define WINDOW_DEFAULT_WIDTH        (1270)
#define WINDOW_DEFAULT_HEIGHT       (900)
#define WINDOW_DEFAULT_BORDER       (15)
#define WINDOW_DEFAULT_TITLE_HEIGHT (105)
#define WINDOW_DEFAULT_BOTTOM_HEIGHT (117)

#define WINDOW_DEFAULT_MIDDLE_HEIGHT (678)
#define WINDOW_MIDDLE_BUTTON_AREA_WIDTH (220)
#define WINDOW_MIDDLE_WIN_AREA_WIDTH (1270-220)
#define WINDOW_MIDDLE_WIN_AREA_HEIGHT (WINDOW_DEFAULT_MIDDLE_HEIGHT)

#endif

#if 1
#define TITLE_BUTTON_WIDTH          (30)
#define TITLE_BUTTON_HEIGHT         (30)
#endif

#define BOTTOM_BUTTON_WIDTH          (25)
#define BOTTOM_BUTTON_HEIGHT         (25)

#define MIDDLE_BUTTON_WIDTH          (190)
#define MIDDLE_BUTTON_HEIGHT         (40)

typedef enum : char
{
    MAIN_WINDOW_MUSIC = 0,
    MAIN_WINDOW_LIVE,
    MAIN_WINDOW_LISTEN,
    MAIN_WINDOW_OTHER
}MAIN_WINDOW_TYPE;

typedef enum : char
{
    DEFAULT_NONE = 0,               //默认不显示左上角
    POP,                       //流行乐
    DJ,                        //DJ
    HIP_HOP,                   //嘻哈
    ROCK,                      //摇滚
    ENGLISH,                   //欧美
    NETWORK,                   //网络
    CHINESE,                   //中国风
    PURE,                      //纯音乐
    CUSTOM,                    //自定义
    MUSIC_TYPE_MAX
}MUSIC_TYPE;


//var
extern QColor myBackgroundColor;
//func
extern void setButtonParam(QPushButton* pushbutton, int w, int h,const QString& str);
#endif // COMMON_DATA_H
