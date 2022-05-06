#ifndef PLAYERBUTTOM_H
#define PLAYERBUTTOM_H

#include <QWidget>
#include <QFrame>
#include "common_data.h"
#include "myalbumbutton.h"
#include "mycrolllabel.h"
#include "myprogress.h"

class PlayerButtom : public QFrame
{
    Q_OBJECT
public:
    MyProgress   * progressSlider;            //进度条
    MyAlbumButton* songImageBtn;            //歌曲图片
    MyCRollLabel* songNameLabel;             //歌曲名字
    QPushButton* mvBtn;                     //mv
    QPushButton* likeBtn;
    QPushButton* downloadBtn;
    QPushButton* commentBtn;
    QPushButton* shareBtn;
    QPushButton* moreBtn;
    QPushButton* previousBtn;
    QPushButton* playBtn;
    QPushButton* nextBtn;
    QLabel     * timeBtn;
    QPushButton* speedBtn;                  //倍速
    QPushButton* qualityBtn;                //音质
    QPushButton* effectBtn;                 //音效
    QPushButton* volumeBtn;                 //音量
    QPushButton* playModeBtn;               //播放模式
    QPushButton* lyricsBtn;                 //歌词
    QPushButton* listBtn;                   //播放列表

private:
    QString m_songName = "快来一首你喜欢的歌曲叭~~";
    QString m_songCurTime = "00:00";
    QString m_songAllTime = "00:00";   //当前时间+总时间
    qint16  m_playListCnt = 111;         //当前播放队列歌曲数量

    QHBoxLayout* iconHLayout;       //缩略图
    QVBoxLayout* detalisVLayout;      //详情面板-歌曲名、我喜欢、打开评论等
    QHBoxLayout* nameHLayout;         //歌曲名
    QHBoxLayout* likeHLayout;         //我喜欢、打开评论等
    QHBoxLayout* playPanelHLayout;      //播放控制区域
    //QHBoxLayout* timeHLayout;             //时间区域
    QHBoxLayout* paramHLayout;              //参数设置区域：倍速、音效、品质...
    QHBoxLayout* modeHLayout;                 //播放模式区域：循环、音量、歌词、列表...
    QHBoxLayout* panelHLayout;                //控制盘区域
    QHBoxLayout* progressHLayout;             //进度条区域
    QVBoxLayout* BottomVLayout;     //底部总区域
    void initPlayerBottom();

public:
    explicit PlayerButtom(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // PLAYERBUTTOM_H
