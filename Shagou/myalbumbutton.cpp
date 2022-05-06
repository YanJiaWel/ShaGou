#include "myalbumbutton.h"

const QString music_type_str[MUSIC_TYPE_MAX]=
{
    nullptr,//DEFAULT_NONE = 0,               //默认不显示
    "流行",//POP,                       //流行乐
    "DJ热碟",//DJ,                        //DJ
    "嘻哈",//HIP_HOP,                   //嘻哈
    "摇滚",//ROCK,                      //摇滚
    "欧美",//ENGLISH,                   //欧美
    "网络",//NETWORK,                   //网络
    "中国风",//CHINESE,                   //中国风
    "纯音乐",//PURE,                      //纯音乐
    "",//CUSTOM,                    //自定义  --在类中自定义字符串
} ;


void MyAlbumButton::enterEvent(QEvent *event)
{
    Q_UNUSED(event)

    this->centerBtn->show();
}

void MyAlbumButton::leaveEvent(QEvent *event)
{
    Q_UNUSED(event)

    this->centerBtn->hide();
}

void MyAlbumButton::initAlbumButton()
{
    QString bg_sheet = QString("QPushButton{border-radius:%1px;border-image:url(%2);}").arg(this->m_radius).arg(this->m_bg_image);
    QString center_sheet = QString("QPushButton{border-radius:%1px;background:rgba(0,0,0,50);}").arg(this->m_radius);
    QString type_sheet = QString("QLabel{border-radius:%1px;background:rgba(0,0,0,125);color:white;qproperty-alignment:AlignCenter}").arg(24/2);
    QString play_count_sheet = QString("QPushButton{background:transparent;border-image:none;}");

    this->setContentsMargins(QMargins(0,0,0,0));
    this->setStyleSheet(bg_sheet);


    this->musicTypeLab->setFixedHeight(24);
    this->musicTypeLab->setMinimumWidth(50);
    this->musicTypeLab->setMaximumWidth(this->width()-this->m_radius*2);
    this->musicTypeLab->move(this->m_radius,this->m_radius);
    this->musicTypeLab->setText(this->m_music_type_text);
    this->musicTypeLab->setStyleSheet(type_sheet);
    if(this->m_music_type == DEFAULT_NONE || this->m_music_type_text == nullptr || this->m_music_type_text.size() == 0)
    {
        this->musicTypeLab->hide();
    }
    else
    {
        this->musicTypeLab->show();
    }

    this->playCountBtn->setFixedHeight(24);
    this->playCountBtn->setMinimumWidth(50);
    this->playCountBtn->setMaximumWidth(this->width()/2-this->m_radius);
    this->playCountBtn->move(this->m_radius,this->height()-this->m_radius-24);
    this->playCountBtn->setIcon(QIcon(":/resource/image/Bottom/play_count.png"));
    this->playCountBtn->setIconSize(QSize(20,20));
    this->playCountBtn->setText(this->m_play_count);
    this->playCountBtn->setStyleSheet(play_count_sheet);
    if(this->m_play_count == nullptr || this->m_play_count.size() == 0)
    {
        this->playCountBtn->hide();
    }
    else
    {
        this->playCountBtn->show();
    }


    this->centerBtn->setFixedSize(this->width(),this->height() );
    this->centerBtn->setIcon(QIcon(this->m_center_icon));
    this->centerBtn->setIconSize(QSize(60,60));
    this->centerBtn->setStyleSheet(center_sheet);
    this->centerBtn->hide();        //隐藏，enterEvent事件刷新显示
}

MyAlbumButton::MyAlbumButton(qint16 w,qint16 h,QWidget *parent) :m_width(w),m_height(h),QPushButton(parent)
{
    this->setMouseTracking(true);
    this->setFixedSize(m_width,m_height);
    this->musicTypeLab = new QLabel(this);
    this->playCountBtn = new QPushButton(this);
    this->centerBtn = new QPushButton(this);
    connect(this,&MyAlbumButton::updateButton,this,&MyAlbumButton::updateButtonSlot);
    initAlbumButton();
}

void MyAlbumButton::updateButtonSlot()
{
    initAlbumButton();
}
