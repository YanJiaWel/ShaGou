#include "mainwindow.h"

QColor myBackgroundColor(8,251,234);

/*
设置类：
本地保存
QColor  s_mainBgColor  主界面背景色
QImage  s_mainBgImage  主界面背景图片
qint8   s_volumeValue  音量值
PLAY_MODE_E s_playMode 播放模式
bool    s_isLyrics     是否显示歌词

全局变量，重启后恢复默认
double  s_speed        倍速


*/
/*
歌曲信息：
bool    s_isLike      是否属于我喜欢里
bool    s_isHaveMv    是否有MV
bool    s_isVIP       是否需要VIP
qint32  s_commentCount 评论数


*/



MainWindow::MainWindow(QWidget *parent)
    : FramelessWidget(parent)
{
    initSetting();
    initUi();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initSetting()
{
    QString sheetStr = QString("background-color:rgb(%1,%2,%3)").arg(myBackgroundColor.red()).arg(myBackgroundColor.green()).arg(myBackgroundColor.blue());
    this->setStyleSheet(sheetStr);
}

void MainWindow::initUi()
{
    this->m_title_bar   = new TitleBar(this);
    connect(this->m_title_bar->minBtn,&QPushButton::clicked,this,&MainWindow::slotsShowMiniWindow);
    connect(this->m_title_bar->maxBtn,&QPushButton::clicked,this,&MainWindow::slotsShowMaxWindow);
    connect(this->m_title_bar->closeBtn,&QPushButton::clicked,this,&MainWindow::slotsShowCloseWindow);

    this->m_player_bottom = new PlayerButtom(this);

    this->m_middlePart = new MiddlePart(this);

    this->m_main_layout = new QVBoxLayout(this);
    this->m_main_layout->setContentsMargins(QMargins(0,10,0,10));
    this->m_main_layout->addWidget(this->m_title_bar);
    this->m_main_layout->addSpacing(1);
    this->m_main_layout->addWidget(this->m_middlePart);
    this->m_main_layout->addSpacing(1);
    this->m_main_layout->addWidget(this->m_player_bottom);
}

void MainWindow::slotsShowMiniWindow()
{
    this->showMinimized();
}

void MainWindow::slotsShowMaxWindow()
{
    if(this->isFullScreen())
    {
        this->showNormal();
        this->m_title_bar->maxBtn->setStyleSheet(TITLE_SHEET_MAX_BTN);
    }
    else
    {
        this->showFullScreen();
        this->m_title_bar->maxBtn->setStyleSheet(TITLE_SHEET_RESTORE_BTN);
    }
}

void MainWindow::slotsShowCloseWindow()
{
    this->close();
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    slotsShowMaxWindow();
}
