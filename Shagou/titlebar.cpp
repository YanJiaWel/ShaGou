#include "titlebar.h"

void TitleBar::initTitleBar()
{
    this->setMouseTracking(true);
    this->setMinimumSize(WINDOW_MIN_WIDTH,WINDOW_DEFAULT_TITLE_HEIGHT);
    this->setFixedHeight(WINDOW_DEFAULT_TITLE_HEIGHT);
    this->setStyleSheet(TITLE_SHEET_FRAME);

    /*-----------------左边标题栏----------------*/
    this->backBtn = new QPushButton(this);
    this->refreshBtn = new QPushButton(this);
    this->leftTitle = new QHBoxLayout;

    this->backBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->backBtn->setToolTip("返回");
    this->backBtn->setFlat(true);
    this->backBtn->setFocusPolicy(Qt::NoFocus);
    this->backBtn->setCursor(Qt::PointingHandCursor);
    this->backBtn->setStyleSheet(TITLE_SHEET_BACK_BTN);

    this->refreshBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->refreshBtn->setFlat(true);
    this->refreshBtn->setFocusPolicy(Qt::NoFocus);
    this->refreshBtn->setToolTip("刷新");
    this->refreshBtn->setCursor(Qt::PointingHandCursor);
    this->refreshBtn->setStyleSheet(TITLE_SHEET_REFRESH_BTN);

    this->leftTitle->addWidget(this->backBtn);
    this->leftTitle->addWidget(this->refreshBtn);
    /*-----------------左边标题栏end----------------*/
    /*-----------------四个窗口类型----------------*/
    this->winTitle = new QHBoxLayout;
    this->musicBtn = new QPushButton(this);
    this->liveBtn  = new QPushButton(this);
    this->listenBtn= new QPushButton(this);
    this->otherBtn = new QPushButton(this);

    this->musicBtn->setFixedSize(70,35);
    this->musicBtn->setFlat(true);
    //this->musicBtn->setCheckable(true);
    this->musicBtn->setText("音乐");
    this->musicBtn->setFocusPolicy(Qt::NoFocus);
    this->musicBtn->setToolTip("音乐");
    this->musicBtn->setCursor(Qt::PointingHandCursor);

    this->liveBtn->setFixedSize(70,35);
    this->liveBtn->setFlat(true);
    //this->liveBtn->setCheckable(true);
    this->liveBtn->setText("直播");
    this->liveBtn->setFocusPolicy(Qt::NoFocus);
    this->liveBtn->setToolTip("直播");
    this->liveBtn->setCursor(Qt::PointingHandCursor);

    this->listenBtn->setFixedSize(70,35);
    this->listenBtn->setFlat(true);
    //this->listenBtn->setCheckable(true);
    this->listenBtn->setText("听书");
    this->listenBtn->setFocusPolicy(Qt::NoFocus);
    this->listenBtn->setToolTip("听书");
    this->listenBtn->setCursor(Qt::PointingHandCursor);

    this->otherBtn->setFixedSize(70,35);
    this->otherBtn->setFlat(true);
    //this->otherBtn->setCheckable(true);
    this->otherBtn->setText("探索");
    this->otherBtn->setFocusPolicy(Qt::NoFocus);
    this->otherBtn->setToolTip("探索");
    this->otherBtn->setCursor(Qt::PointingHandCursor);

    this->musicBtn->setChecked(true);
    this->winTitle->addWidget(this->musicBtn);
    this->winTitle->addWidget(this->liveBtn);
    this->winTitle->addWidget(this->listenBtn);
    this->winTitle->addWidget(this->otherBtn);
    /*-----------------四个窗口类型end----------------*/

    /*-----------------搜索栏------------------------*/
    this->searchEdit  = new QLineEdit();
    this->searchBtn   = new QPushButton(this->searchEdit);
    this->matchBtn    = new QPushButton(this);
    this->searchTitle = new QHBoxLayout;
    this->searchBox   = new QHBoxLayout(this->searchEdit);

    this->searchEdit->setPlaceholderText("Carly Rae Jepsen---Emotion");
    this->searchEdit->setMinimumSize(185,40);
    this->searchEdit->setMaximumSize(385,40);
    this->searchEdit->setStyleSheet(TITLE_SHEET_SEARCH_EDIT);
    QMargins margins = this->searchEdit->textMargins();
    this->searchEdit->setTextMargins(QMargins(margins.left()+TITLE_BUTTON_WIDTH,margins.top(),margins.right(),margins.bottom()));

    this->searchBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->searchBtn->setFlat(true);
    this->searchBtn->setFocusPolicy(Qt::NoFocus);
    this->searchBtn->setCursor(Qt::PointingHandCursor);
    this->searchBtn->setToolTip("搜索");
    this->searchBtn->setStyleSheet(TITLE_SHEET_SEARCH_BTN);
    //合并edit和搜索btn
    this->searchBox->addWidget(this->searchBtn);
    this->searchBox->addStretch();
    this->searchBox->setContentsMargins(QMargins(margins.left(),0,0,0));

    this->matchBtn->setFixedSize(TITLE_BUTTON_WIDTH+10,TITLE_BUTTON_HEIGHT+10);
    this->matchBtn->setFlat(true);
    this->matchBtn->setFocusPolicy(Qt::NoFocus);
    this->matchBtn->setCursor(Qt::PointingHandCursor);
    this->matchBtn->setToolTip("听歌识曲");
    this->matchBtn->setStyleSheet(TITLE_SHEET_MATCH_BTN);

    this->searchTitle->addWidget(this->searchEdit);
    this->searchTitle->addWidget(this->matchBtn);
    /*-----------------搜索栏------------------------*/

    /*-----------------用户--------------------------*/
    this->userTitle = new QHBoxLayout;
    this->photoBtn  = new QPushButton(this);
    this->loginBtn  = new QPushButton(this);

    this->photoBtn->setFixedSize(TITLE_BUTTON_WIDTH+10,TITLE_BUTTON_HEIGHT+10);
    this->photoBtn->setFlat(true);
    this->photoBtn->setFocusPolicy(Qt::NoFocus);
    this->photoBtn->setCursor(Qt::PointingHandCursor);
    this->photoBtn->setStyleSheet(TITLE_SHEET_PHOTO_BTN);

    this->loginBtn->setFixedSize(60,16);
    this->loginBtn->setText("点击登录");
    this->loginBtn->setFlat(true);
    this->loginBtn->setFocusPolicy(Qt::NoFocus);
    this->loginBtn->setCursor(Qt::PointingHandCursor);
    this->loginBtn->setStyleSheet(TITLE_SHEET_LOGIN_BTN);

    this->userTitle->addWidget(this->photoBtn);
    this->userTitle->addWidget(this->loginBtn);
    /*-----------------用户--------------------------*/

    /*-----------------右边--------------------------*/
    this->rightTitle = new QHBoxLayout;
    this->skinBtn    = new QPushButton(this);
    this->msgBtn     = new QPushButton(this);
    this->menuBtn    = new QPushButton(this);
    this->separateBtn= new QPushButton(this);
    this->simpleBtn  = new QPushButton(this);
    this->minBtn     = new QPushButton(this);
    this->maxBtn     = new QPushButton(this);
    this->closeBtn   = new QPushButton(this);

    this->skinBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->skinBtn->setToolTip("个性皮肤");
    this->skinBtn->setFlat(true);
    this->skinBtn->setFocusPolicy(Qt::NoFocus);
    this->skinBtn->setCursor(Qt::PointingHandCursor);
    this->skinBtn->setStyleSheet(TITLE_SHEET_SKIN_BTN);

    this->msgBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->msgBtn->setToolTip("消息中心");
    this->msgBtn->setFlat(true);
    this->msgBtn->setFocusPolicy(Qt::NoFocus);
    this->msgBtn->setCursor(Qt::PointingHandCursor);
    this->msgBtn->setStyleSheet(TITLE_SHEET_MSG_BTN);

    this->menuBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->menuBtn->setToolTip("主菜单");
    this->menuBtn->setFlat(true);
    this->menuBtn->setFocusPolicy(Qt::NoFocus);
    this->menuBtn->setCursor(Qt::PointingHandCursor);
    this->menuBtn->setStyleSheet(TITLE_SHEET_MENU_BTN);

    this->separateBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->separateBtn->setFlat(true);
    this->separateBtn->setFocusPolicy(Qt::NoFocus);
    this->separateBtn->setStyleSheet(TITLE_SHEET_SEPARATE);

    this->simpleBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->simpleBtn->setToolTip("精简模式");
    this->simpleBtn->setFlat(true);
    this->simpleBtn->setFocusPolicy(Qt::NoFocus);
    this->simpleBtn->setCursor(Qt::PointingHandCursor);
    this->simpleBtn->setStyleSheet(TITLE_SHEET_SIMPLE_BTN);

    this->minBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->minBtn->setToolTip("最小化");
    this->minBtn->setFlat(true);
    this->minBtn->setFocusPolicy(Qt::NoFocus);
    this->minBtn->setCursor(Qt::PointingHandCursor);
    this->minBtn->setStyleSheet(TITLE_SHEET_MIN_BTN);

    this->maxBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->maxBtn->setToolTip("最大化");
    this->maxBtn->setFlat(true);
    this->maxBtn->setFocusPolicy(Qt::NoFocus);
    this->maxBtn->setCursor(Qt::PointingHandCursor);
    this->maxBtn->setStyleSheet(TITLE_SHEET_MAX_BTN);

    this->closeBtn->setFixedSize(TITLE_BUTTON_WIDTH,TITLE_BUTTON_HEIGHT);
    this->closeBtn->setToolTip("关闭");
    this->closeBtn->setFlat(true);
    this->closeBtn->setFocusPolicy(Qt::NoFocus);
    this->closeBtn->setCursor(Qt::PointingHandCursor);
    this->closeBtn->setStyleSheet(TITLE_SHEET_CLOSE_BTN);

    this->rightTitle->addWidget(this->skinBtn);
    this->rightTitle->addWidget(this->msgBtn);
    this->rightTitle->addWidget(this->menuBtn);
    this->rightTitle->addWidget(this->separateBtn);
    this->rightTitle->addWidget(this->simpleBtn);
    this->rightTitle->addWidget(this->minBtn);
    this->rightTitle->addWidget(this->maxBtn);
    this->rightTitle->addWidget(this->closeBtn);
    /*-----------------右边--------------------------*/



    this->titleBox = new QHBoxLayout;
    this->titleBox->addLayout(this->leftTitle);
    this->titleBox->addSpacing(60);
    this->titleBox->addLayout(this->winTitle);
    this->titleBox->addLayout(this->searchTitle);
    this->titleBox->addStretch();
    this->titleBox->addLayout(this->userTitle);
    this->titleBox->addSpacing(60);
    this->titleBox->addLayout(this->rightTitle);

    this->switchSlider = new MyPointSlider(this);
    this->sliderBox    = new QHBoxLayout;
    this->switchSlider->setFixedSize(240,16);
    this->switchSlider->setOrientation(Qt::Horizontal);
    this->switchSlider->setMinimum(0);
    this->switchSlider->setMaximum(100);
    this->switchSlider->setStyleSheet(TITLE_SHEET_SWITCH_SLIDER);

    this->sliderBox->addWidget(this->switchSlider);
    this->sliderBox->setContentsMargins(QMargins(165,0,0,0));
    this->sliderBox->addStretch();

    this->myTitle = new QVBoxLayout(this);
    this->myTitle->addLayout(this->titleBox);
    this->myTitle->addLayout(this->sliderBox);
    this->myTitle->addStretch();

    setActiveMainWindow(MAIN_WINDOW_MUSIC); //setStyleSheet
}

void TitleBar::initSignalSlot()
{
    connect(this->musicBtn,&QPushButton::clicked,this,[&](){emit sendPreActiveMainWindow(MAIN_WINDOW_MUSIC);});
    connect(this->liveBtn,&QPushButton::clicked,this,[&](){emit sendPreActiveMainWindow(MAIN_WINDOW_LIVE);});
    connect(this->listenBtn,&QPushButton::clicked,this,[&](){emit sendPreActiveMainWindow(MAIN_WINDOW_LISTEN);});
    connect(this->otherBtn,&QPushButton::clicked,this,[&](){emit sendPreActiveMainWindow(MAIN_WINDOW_OTHER);});
    connect(this,&TitleBar::sendPreActiveMainWindow,this,&TitleBar::setActiveMainWindow);
}

TitleBar::TitleBar(QWidget *parent) : QFrame(parent)
{
    initTitleBar();
    initSignalSlot();
}


//slots
void TitleBar::setActiveMainWindow(MAIN_WINDOW_TYPE win)
{
    this->musicBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN);
    this->liveBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN);
    this->listenBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN);
    this->otherBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN);
    switch(win)
    {
    case MAIN_WINDOW_MUSIC:
        this->musicBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN_FOCUS);
        this->switchSlider->setValue(0);
        break;
    case MAIN_WINDOW_LIVE:
        this->liveBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN_FOCUS);
        this->switchSlider->setValue(33);
        break;
    case MAIN_WINDOW_LISTEN:
        this->listenBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN_FOCUS);
        this->switchSlider->setValue(67);
        break;
    case MAIN_WINDOW_OTHER:
        this->otherBtn->setStyleSheet(TITLE_SHEET_MUSIC_BTN_FOCUS);
        this->switchSlider->setValue(100);
        break;
    }
}
