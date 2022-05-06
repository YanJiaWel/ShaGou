#include "playerbuttom.h"

void PlayerButtom::initPlayerBottom()
{
//    QSlider    * progressSlider;            //进度条

    /*--------------------专辑图片区域--------------------------*/
    this->songImageBtn = new MyAlbumButton(70,70,this);
    this->iconHLayout  = new QHBoxLayout;
    this->songImageBtn->setCenterIcon(":/resource/image/Bottom/1_center_focus.png");

    this->iconHLayout->setContentsMargins(QMargins(0,0,0,0));
    this->iconHLayout->addWidget(this->songImageBtn);
    /*--------------------专辑图片区域end--------------------------*/

    /*--------------------歌曲详情区域--------------------------*/
    this->songNameLabel = new MyCRollLabel(this);
    this->mvBtn = new QPushButton(this);
    this->nameHLayout = new QHBoxLayout;
    this->likeBtn = new QPushButton(this);
    this->downloadBtn = new QPushButton(this);
    this->commentBtn = new QPushButton(this);
    this->shareBtn = new QPushButton(this);
    this->moreBtn = new QPushButton(this);
    this->likeHLayout = new QHBoxLayout;
    this->detalisVLayout = new QVBoxLayout;

    this->songNameLabel->setMaximumWidth(260);
    this->songNameLabel->setFixedHeight(30);
    this->songNameLabel->setText(this->m_songName);
    this->songNameLabel->setCursor(Qt::PointingHandCursor);

    setButtonParam(this->mvBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"观看MV");
    this->mvBtn->setStyleSheet(BUTTOM_SHEET_MV);
    setButtonParam(this->likeBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"我喜欢");
    this->likeBtn->setStyleSheet(BUTTOM_SHEET_LIKE);

    setButtonParam(this->downloadBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"下载");
    this->downloadBtn->setStyleSheet(BUTTOM_SHEET_DOWNLOAD);

    setButtonParam(this->commentBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"打开歌曲评论");
    this->commentBtn->setStyleSheet(BUTTOM_SHEET_COMMENT);

    setButtonParam(this->shareBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"分享");
    this->shareBtn->setStyleSheet(BUTTOM_SHEET_SHARE);

    setButtonParam(this->moreBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"更多");
    this->moreBtn->setStyleSheet(BUTTOM_SHEET_MORE);

    this->nameHLayout->addWidget(this->songNameLabel);
    this->nameHLayout->addSpacing(3);
    this->nameHLayout->addWidget(this->mvBtn);
    this->nameHLayout->addStretch();
    this->likeHLayout->addWidget(this->likeBtn);
    this->likeHLayout->addSpacing(6);
    this->likeHLayout->addWidget(this->downloadBtn);
    this->likeHLayout->addSpacing(6);
    this->likeHLayout->addWidget(this->commentBtn);
    this->likeHLayout->addSpacing(6);
    this->likeHLayout->addWidget(this->shareBtn);
    this->likeHLayout->addSpacing(6);
    this->likeHLayout->addWidget(this->moreBtn);
    this->likeHLayout->addStretch();

    this->detalisVLayout->addLayout(this->nameHLayout);
    this->detalisVLayout->addLayout(this->likeHLayout);

    /*--------------------歌曲详情区域end--------------------------*/

    /*--------------------播放区域--------------------------*/
    this->previousBtn = new QPushButton(this);
    this->playBtn = new QPushButton(this);
    this->nextBtn = new QPushButton(this);
    this->playPanelHLayout = new QHBoxLayout;

    setButtonParam(this->previousBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"上一首");
    this->previousBtn->setStyleSheet(BUTTOM_SHEET_PREVIOUS);
    setButtonParam(this->playBtn,40,40,"播放");
    this->playBtn->setStyleSheet(BUTTOM_SHEET_PLAY);
    setButtonParam(this->nextBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"下一首");
    this->nextBtn->setStyleSheet(BUTTOM_SHEET_NEXT);

    this->playPanelHLayout->addWidget(this->previousBtn);
    this->playPanelHLayout->addSpacing(40);
    this->playPanelHLayout->addWidget(this->playBtn);
    this->playPanelHLayout->addSpacing(40);
    this->playPanelHLayout->addWidget(this->nextBtn);
    /*--------------------播放区域end--------------------------*/

    /*--------------------时间区域--------------------------*/
    this->timeBtn = new QLabel(this);
    //    QHBoxLayout* timeHLayout;             //时间区域

    this->speedBtn = new QPushButton(this);
    this->qualityBtn = new QPushButton(this);
    this->effectBtn = new QPushButton(this);
    this->paramHLayout = new QHBoxLayout;

    this->timeBtn->setMaximumWidth(260);
    this->timeBtn->setFixedHeight(30);
    this->timeBtn->setText(this->m_songCurTime + "/" + this->m_songAllTime);
    this->timeBtn->setCursor(Qt::PointingHandCursor);
    this->timeBtn->setStyleSheet(BUTTOM_SHEET_TIME);
    //this->timeBtn->hide();

    setButtonParam(this->speedBtn,30,30,nullptr);
    this->speedBtn->setStyleSheet(BUTTOM_SHEET_SPEED);
    setButtonParam(this->qualityBtn,30,30,"音质选择");
    this->qualityBtn->setStyleSheet(BUTTOM_SHEET_QUALITY);
    setButtonParam(this->effectBtn,30,30,"音效");
    this->effectBtn->setStyleSheet(BUTTOM_SHEET_EFFECT);
    this->speedBtn->hide();
    this->qualityBtn->hide();
    this->effectBtn->hide();

    this->paramHLayout->addWidget(this->timeBtn);
    this->paramHLayout->addWidget(this->speedBtn);
    this->paramHLayout->addWidget(this->qualityBtn);
    this->paramHLayout->addWidget(this->effectBtn);
    /*--------------------时间区域end--------------------------*/

    /*--------------------播放模式--------------------------*/
    this->volumeBtn = new QPushButton(this);
    this->playModeBtn = new QPushButton(this);
    this->lyricsBtn = new QPushButton(this);
    this->listBtn = new QPushButton(this);
    this->modeHLayout = new QHBoxLayout;

    setButtonParam(this->volumeBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"调节音量");
    this->volumeBtn->setStyleSheet(BUTTOM_SHEET_LOW_VOLUME);
    setButtonParam(this->playModeBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"顺序播放");
    this->playModeBtn->setStyleSheet(BUTTOM_SHEET_ORDER);
    setButtonParam(this->lyricsBtn,BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT,"打开桌面歌词");
    this->lyricsBtn->setStyleSheet(BUTTOM_SHEET_LYRICS);

    this->listBtn->setFixedHeight(BOTTOM_BUTTON_HEIGHT);
    this->listBtn->setMaximumWidth(100);
    this->listBtn->setFlat(true);
    this->listBtn->setFocusPolicy(Qt::NoFocus);
    this->listBtn->setCursor(Qt::PointingHandCursor);
    this->listBtn->setToolTip("播放队列");
    this->listBtn->setText(QString::number(this->m_playListCnt));
    this->listBtn->setIcon(QIcon(":/resource/image/Bottom/list.png"));
    this->listBtn->setIconSize(QSize(BOTTOM_BUTTON_WIDTH,BOTTOM_BUTTON_HEIGHT));
    this->listBtn->setStyleSheet(BUTTOM_SHEET_LIST);

    this->modeHLayout->addWidget(this->volumeBtn);
    this->modeHLayout->addSpacing(15);
    this->modeHLayout->addWidget(this->playModeBtn);
    this->modeHLayout->addSpacing(15);
    this->modeHLayout->addWidget(this->lyricsBtn);
    this->modeHLayout->addSpacing(15);
    this->modeHLayout->addWidget(this->listBtn);
    this->modeHLayout->addSpacing(15);
    /*--------------------播放模式end--------------------------*/

    /*控制区域*/
    this->panelHLayout = new QHBoxLayout;
    this->panelHLayout->setContentsMargins(QMargins(5,0,5,0));
    this->panelHLayout->addLayout(this->iconHLayout);
    this->panelHLayout->addSpacing(5);
    this->panelHLayout->addLayout(this->detalisVLayout);
    this->panelHLayout->addStretch();
    this->panelHLayout->addLayout(this->playPanelHLayout);
    this->panelHLayout->addStretch();
    this->panelHLayout->addLayout(this->paramHLayout);
    this->panelHLayout->addSpacing(20);
    this->panelHLayout->addLayout(this->modeHLayout);
    this->panelHLayout->addSpacing(10);
    /*控制区域end*/

    /*进度条区域*/
    this->progressSlider = new MyProgress(this);
    this->progressHLayout = new QHBoxLayout;
    this->progressHLayout->setContentsMargins(QMargins(0,0,0,0));
    this->progressHLayout->addWidget(this->progressSlider);
    /*进度条区域end*/

    this->BottomVLayout = new QVBoxLayout(this);
    this->BottomVLayout->setContentsMargins(QMargins(0,0,0,0));
    this->BottomVLayout->addStretch();
    this->BottomVLayout->addLayout(this->progressHLayout);
    this->BottomVLayout->addLayout(this->panelHLayout);
}

PlayerButtom::PlayerButtom(QWidget *parent) : QFrame(parent)
{
    this->setMouseTracking(true);
    this->setFixedHeight(WINDOW_DEFAULT_BOTTOM_HEIGHT);
    initPlayerBottom();
}

void setButtonParam(QPushButton* pushbutton, int w, int h,const QString& str)
{
    pushbutton->setFixedSize(w,h);
    pushbutton->setFlat(true);
    pushbutton->setFocusPolicy(Qt::NoFocus);
    pushbutton->setCursor(Qt::PointingHandCursor);
    pushbutton->setToolTip(str);
}
