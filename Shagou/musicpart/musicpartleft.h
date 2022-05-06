#ifndef MUSICPARTLEFT_H
#define MUSICPARTLEFT_H

#include <QWidget>
#include "common_data.h"
#include "style_sheet.h"
#include "myWidget/mytoolbox.h"

class MusicPartLeft : public QFrame
{
    Q_OBJECT
public:
    QPushButton* m_recommendBtn;    //推荐
    QPushButton* m_musicLibBtn;     //乐库
    QPushButton* m_songListBtn;     //歌单
    QPushButton* m_radioBtn;        //电台
    QPushButton* m_videoBtn;        //视频
    QLabel     * m_myMusicLab;      //我的音乐
    QPushButton* m_myRadioBtn;      //我的电台
    QPushButton* m_localBtn;        //本地与下载
    QPushButton* m_historyBtn;       //最近播放
    QPushButton* m_defaultlistBtn;  //默认列表

    MyToolBox*   m_selfSongList;    //自建歌单

    QButtonGroup* m_btnGroup;
    QVBoxLayout* m_btnLayout;
    QScrollArea* m_btnArea;
    QHBoxLayout* m_baseLayout;

    explicit MusicPartLeft(QWidget *parent = nullptr);
private:
    void initUI();

signals:

public slots:
};

#endif // MUSICPARTLEFT_H
