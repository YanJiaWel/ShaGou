#include "musicpartleft.h"

QString icon[][2] =
{
    {":/resource/image/music_buttons_left/recommend.png",":/resource/image/music_buttons_left/recommend_focus.png"},
    {":/resource/image/music_buttons_left/music.png",":/resource/image/music_buttons_left/music_focus.png"},
    {":/resource/image/music_buttons_left/song_list.png",":/resource/image/music_buttons_left/song_list_focus.png"},
    {":/resource/image/music_buttons_left/rideo.png",":/resource/image/music_buttons_left/rideo_focus.png"},
    {":/resource/image/music_buttons_left/video.png",":/resource/image/music_buttons_left/videot_focus.png"},
    {":/resource/image/music_buttons_left/download.png",":/resource/image/music_buttons_left/download_focus.png"},
    {":/resource/image/music_buttons_left/history.png",":/resource/image/music_buttons_left/history_focus.png"},
    {":/resource/image/music_buttons_left/default_list.png",":/resource/image/music_buttons_left/default_list_focus.png"},
};

MusicPartLeft::MusicPartLeft(QWidget *parent) : QFrame(parent)
{
    this->setMouseTracking(true);
    this->setMinimumHeight(WINDOW_DEFAULT_MIDDLE_HEIGHT);
    this->setFixedWidth(WINDOW_MIDDLE_BUTTON_AREA_WIDTH);
    initUI();
}

void MusicPartLeft::initUI()
{

    this->m_recommendBtn = new QPushButton(this);
    setButtonParam(this->m_recommendBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_recommendBtn->setText("为你推荐");
    this->m_recommendBtn->setCheckable(true);
    this->m_recommendBtn->setChecked(true);
    this->m_recommendBtn->setIcon(QIcon(icon[0][1]));
    this->m_recommendBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_musicLibBtn = new QPushButton(this);
    setButtonParam(this->m_musicLibBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_musicLibBtn->setText("乐库");
    this->m_musicLibBtn->setCheckable(true);
    this->m_musicLibBtn->setIcon(QIcon(icon[1][0]));
    this->m_musicLibBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_songListBtn = new QPushButton(this);
    setButtonParam(this->m_songListBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_songListBtn->setText("歌单");
    this->m_songListBtn->setCheckable(true);
    this->m_songListBtn->setIcon(QIcon(icon[2][0]));
    this->m_songListBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_radioBtn = new QPushButton(this);
    setButtonParam(this->m_radioBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_radioBtn->setText("电台");
    this->m_radioBtn->setCheckable(true);
    this->m_radioBtn->setIcon(QIcon(icon[3][0]));
    this->m_radioBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_videoBtn = new QPushButton(this);
    setButtonParam(this->m_videoBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_videoBtn->setText("视频");
    this->m_videoBtn->setCheckable(true);
    this->m_videoBtn->setIcon(QIcon(icon[4][0]));
    this->m_videoBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_myMusicLab = new QLabel(this);
    this->m_myMusicLab->setText("我的音乐");
    this->m_myMusicLab->setStyleSheet("QLabel{color:rgb(138,138,138);font:17px;margin-left:10px;}");

    this->m_myRadioBtn = new QPushButton(this);
    setButtonParam(this->m_myRadioBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_myRadioBtn->setText("我的电台");
    this->m_myRadioBtn->setCheckable(true);
    this->m_myRadioBtn->setIcon(QIcon(icon[3][0]));
    this->m_myRadioBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_localBtn = new QPushButton(this);
    setButtonParam(this->m_localBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_localBtn->setText("本地与下载");
    this->m_localBtn->setCheckable(true);
    this->m_localBtn->setIcon(QIcon(icon[5][0]));
    this->m_localBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_historyBtn = new QPushButton(this);
    setButtonParam(this->m_historyBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_historyBtn->setText("最近播放");
    this->m_historyBtn->setCheckable(true);
    this->m_historyBtn->setIcon(QIcon(icon[6][0]));
    this->m_historyBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);

    this->m_defaultlistBtn = new QPushButton(this);
    setButtonParam(this->m_defaultlistBtn,MIDDLE_BUTTON_WIDTH,MIDDLE_BUTTON_HEIGHT,nullptr);
    this->m_defaultlistBtn->setText("默认列表");
    this->m_defaultlistBtn->setCheckable(true);
    this->m_defaultlistBtn->setIcon(QIcon(icon[7][0]));
    this->m_defaultlistBtn->setStyleSheet(MIDDLE_SHEET_LEFT_BTN);


    this->m_btnGroup = new QButtonGroup(this);
    this->m_btnGroup->setExclusive(true);
    this->m_btnGroup->addButton(this->m_recommendBtn,0);
    this->m_btnGroup->addButton(this->m_musicLibBtn,1);
    this->m_btnGroup->addButton(this->m_songListBtn,2);
    this->m_btnGroup->addButton(this->m_radioBtn,3);
    this->m_btnGroup->addButton(this->m_videoBtn,4);
    this->m_btnGroup->addButton(this->m_myRadioBtn,5);
    this->m_btnGroup->addButton(this->m_localBtn,6);
    this->m_btnGroup->addButton(this->m_historyBtn,7);
    this->m_btnGroup->addButton(this->m_defaultlistBtn,8);

    this->m_selfSongList = new MyToolBox("自建歌单",this);

    this->m_btnArea = new QScrollArea(this);
    this->m_btnLayout = new QVBoxLayout(this);
    this->m_btnLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_btnLayout->addWidget(this->m_recommendBtn);
    this->m_btnLayout->addWidget(this->m_musicLibBtn);
    this->m_btnLayout->addWidget(this->m_songListBtn);
    this->m_btnLayout->addWidget(this->m_radioBtn);
    this->m_btnLayout->addWidget(this->m_videoBtn);
    this->m_btnLayout->addSpacing(10);
    this->m_btnLayout->addWidget(this->m_myMusicLab);
    this->m_btnLayout->addWidget(this->m_myRadioBtn);
    this->m_btnLayout->addWidget(this->m_localBtn);
    this->m_btnLayout->addWidget(this->m_historyBtn);
    this->m_btnLayout->addWidget(this->m_defaultlistBtn);
    this->m_btnLayout->addSpacing(10);
    this->m_btnLayout->addWidget(this->m_selfSongList);
    this->m_btnLayout->addStretch();

    this->m_btnArea->setLayout(this->m_btnLayout);
    this->m_btnArea->setWidgetResizable(true);
    this->m_btnArea->setContentsMargins(QMargins(0,0,0,0));
    this->m_btnArea->setStyleSheet(R"(QScrollArea{
                                   border: 0px solid;
                                   background-color: #00000000;
                                   }
                                   QScrollBar:vertical {
                                   border: none;
                                   background: #f5f5f7;
                                   width: 10px;
                                   margin: 0px 0 0px 0;
                                   }
                                   QScrollBar::handle:vertical {
                                   background: Gainsboro;
                                   min-height: 20px;
                                   border-radius: 5px;
                                   border: none;
                                   }
                                   QScrollBar::add-line:vertical {
                                   border: 0px solid grey;
                                   background: #32CC99;
                                   height: 0px;
                                   subcontrol-position: bottom;
                                   subcontrol-origin: margin;
                                   }
                                   QScrollBar::sub-line:vertical {
                                   border: 0px solid grey;
                                   background: #32CC99;
                                   height: 0px;
                                   subcontrol-position: top;
                                   subcontrol-origin: margin;
                                   }
                                   QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {
                                   background: none;
                                   width: 0px;
                                   height: 0px;
                                   })");

    this->m_baseLayout = new QHBoxLayout(this);
    this->m_baseLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_baseLayout->addWidget(this->m_btnArea);
}
