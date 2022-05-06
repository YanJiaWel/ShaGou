#ifndef MYALBUMBUTTON_H
#define MYALBUMBUTTON_H
/*
专辑按钮：左上角带音乐类型(可选)、左下角带播放量(可选)、鼠标悬停时，显示蒙版(蒙版图片可选)
*/
#include <QWidget>
#include <QPaintEvent>
#include "common_data.h"
extern const QString music_type_str[MUSIC_TYPE_MAX];
class MyAlbumButton : public QPushButton
{
    Q_OBJECT
public:
    QLabel*      musicTypeLab;      //左上角
    QPushButton* playCountBtn;      //左下角
    QPushButton* centerBtn;         //中心字符串或者图片

    void setMusicType(MUSIC_TYPE type){this->m_music_type = type;this->m_music_type_text = music_type_str[type]; emit updateButton();}
    void setMusicType(const QString& str){this->m_music_type = CUSTOM;this->m_music_type_text = str;emit updateButton();}
    void setPlayCount(const QString& str){this->m_play_count = str;emit updateButton();}   //需要设置显示播放量的前提是设置这个字符串
    void setCenterStr(const QString& str){this->m_center_text = str;emit updateButton();}
    void setCenterIcon(const QString& str){this->m_center_icon = str;emit updateButton();}
    void set_BackGroundImage(const QString& str){this->m_bg_image = str;emit updateButton();}//this->update();
protected:
    //void paintEvent(QPaintEvent *event);
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
private:
    MUSIC_TYPE m_music_type = DEFAULT_NONE;
    QString    m_music_type_text = nullptr;
    QString    m_play_count = nullptr;
    QString    m_center_text= nullptr;              //中心显示的字符串
    QString    m_center_icon= nullptr;              //中心显示的图片
    QString    m_bg_image   = ":/resource/image/Bottom/music.png"; //背景图片
    qint8      m_radius     = 5;
    qint16     m_width      = 70;
    qint16     m_height     = 70;

    void initAlbumButton();

public:
    explicit MyAlbumButton(qint16 w,qint16 h,QWidget *parent = nullptr);

signals:
    void updateButton();
public slots:
    void updateButtonSlot();
};

#endif // MYALBUMBUTTON_H
