#ifndef STYLE_SHEET_H
#define STYLE_SHEET_H

//title bar
#define TITLE_SHEET_FRAME "QFrame{background:transparent;}"
#define TITLE_SHEET_BACK_BTN    "QPushButton{border-image:url(:/resource/image/TitleBar/back.png);} \
                                 QPushButton:hover{border-image:url(:/resource/image/TitleBar/back_focus.png);} \
                                 QPushButton:pressed{border-image:url(:/resource/image/TitleBar/back.png);}"
#define TITLE_SHEET_REFRESH_BTN "QPushButton{border-image:url(:/resource/image/TitleBar/refresh.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/refresh_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/refresh.png);} "

//这四个一样的风格，都使用TITLE_SHEET_MUSIC_BTN
//this->musicBtn
//this->liveBtn
//this->listenBtn
//this->otherBtn
#define TITLE_SHEET_MUSIC_BTN   "QPushButton{border:none;color:rgb(138,138,138);font-size:28px}"
#define TITLE_SHEET_MUSIC_BTN_FOCUS   "QPushButton{border:none;color:rgb(0,0,0);font-size:30px}"

#define TITLE_SHEET_SEARCH_EDIT "QLineEdit{border-radius:20px;background:rgb(230,230,230);}"
#define TITLE_SHEET_SEARCH_BTN  "QPushButton{background:transparent;border-image:url(:/resource/image/TitleBar/search.png);} \
                                 QPushButton:hover{border-image:url(:/resource/image/TitleBar/search_focus.png);} \
                                 QPushButton:pressed{border-image:url(:/resource/image/TitleBar/search.png);}"
#define TITLE_SHEET_MATCH_BTN   "QPushButton{background:rgb(230,230,230);border-radius:20px;border-top: 5px transparent;border-left: 5px transparent;border-right: 5px transparent;border-bottom: 5px transparent;border-image:url(:/resource/image/TitleBar/mic.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/mic_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/mic.png);}"

#define TITLE_SHEET_PHOTO_BTN  "QPushButton{border-image:url(:/resource/image/TitleBar/photo.png);}"
#define TITLE_SHEET_LOGIN_BTN  "QPushButton{border:transparent;color:rgb(138,138,138);font-size:15px;} \
                                QPushButton:hover{color:rgb(18,150,219);} \
                                QPushButton:pressed{color:rgb(38,138,138);}"

#define TITLE_SHEET_SKIN_BTN   "QPushButton{border-image:url(:/resource/image/TitleBar/skin.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/skin_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/skin.png);}"

#define TITLE_SHEET_MSG_BTN    "QPushButton{border-image:url(:/resource/image/TitleBar/msg.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/msg_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/msg.png);}"
#define TITLE_SHEET_MENU_BTN   "QPushButton{border-image:url(:/resource/image/TitleBar/menu.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/menu_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/menu.png);}"
#define TITLE_SHEET_SEPARATE   "QPushButton{border-image:url(:/resource/image/TitleBar/spear.png);}"
#define TITLE_SHEET_SIMPLE_BTN "QPushButton{border-image:url(:/resource/image/TitleBar/simple.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/simple_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/simple.png);}"
#define TITLE_SHEET_MIN_BTN    "QPushButton{border-image:url(:/resource/image/TitleBar/min.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/min_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/min.png);}"
#define TITLE_SHEET_MAX_BTN    "QPushButton{border-image:url(:/resource/image/TitleBar/max.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/max_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/max.png);}"
#define TITLE_SHEET_RESTORE_BTN "QPushButton{border-image:url(:/resource/image/TitleBar/restore.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/restore_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/restore.png);}"
#define TITLE_SHEET_CLOSE_BTN  "QPushButton{border-image:url(:/resource/image/TitleBar/close.png);} \
                                QPushButton:hover{border-image:url(:/resource/image/TitleBar/close_focus.png);} \
                                QPushButton:pressed{border-image:url(:/resource/image/TitleBar/close.png);}"
#define TITLE_SHEET_SWITCH_SLIDER     "QSlider{border-color:transparent;} \
                                       QSlider::groove:horizontal {\
                                                height: 12px;\
                                                background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 transparent, stop: 1.0 transparent);\
                                                }\
                                       QSlider::handle:horizontal {\
                                                border:0px;\
                                                background:blue;\
                                                width: 12px;\
                                                margin: 0px 0px 0px 0px;\
                                                border-radius:6px;\
                                                }"

/*-----------buttom---------------*/
#define BUTTOM_SHEET_PROGRESS    "QSlider::groove:horizontal {\
                                      border: 0px solid #bbb;\
                                    }\
                                    \
                                    QSlider::sub-page:horizontal {\
                                      background: rgb(255,255,0);\
                                      margin-top: 5px;\
                                      margin-bottom: 4px;\
                                    }\
                                    \
                                    QSlider::add-page:horizontal {\
                                      background: rgb(0,0,0);\
                                      border: 0px solid #777;\
                                      margin-top: 5px;\
                                      margin-bottom: 4px;\
                                    }\
                                    \
                                    QSlider::handle:horizontal {\
                                      background: rgba(255,255,0,0);\
                                      border: 1px solid rgba(255,255,255,0);\
                                      width: 10px;\
                                      border-radius: 5px;\
                                      margin-top: 0px;\
                                      margin-bottom: 0px;\
                                    }"
#define BUTTOM_SHEET_PROGRESS_FOCUS    "QSlider::groove:horizontal {\
                                      border: 0px solid #bbb;\
                                    }\
                                    \
                                    QSlider::sub-page:horizontal {\
                                      background: rgb(255,255,0);\
                                      margin-top: 5px;\
                                      margin-bottom: 4px;\
                                    }\
                                    \
                                    QSlider::add-page:horizontal {\
                                      background: rgb(0,0,0);\
                                      border: 0px solid #777;\
                                      margin-top: 5px;\
                                      margin-bottom: 4px;\
                                    }\
                                    \
                                    QSlider::handle:horizontal {\
                                      background: rgba(255,255,0,255);\
                                      border: 1px solid rgba(255,255,255,0);\
                                      width: 10px;\
                                      border-radius: 5px;\
                                      margin-top: 0px;\
                                      margin-bottom: 0px;\
                                    }"
#define BUTTOM_SHEET_MV             "QPushButton{border-image:url(:/resource/image/Bottom/mv.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/mv_focus.png);}"
#define BUTTOM_SHEET_LIKE           "QPushButton{border-image:url(:/resource/image/Bottom/like.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/like_focus.png);}"
#define BUTTOM_SHEET_DOWNLOAD       "QPushButton{border-image:url(:/resource/image/Bottom/download.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/download_focus.png);}"
#define BUTTOM_SHEET_COMMENT        "QPushButton{border-image:url(:/resource/image/Bottom/comment.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/comment_focus.png);}"
#define BUTTOM_SHEET_SHARE          "QPushButton{border-image:url(:/resource/image/Bottom/share.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/share_focus.png);}"
#define BUTTOM_SHEET_MORE           "QPushButton{border-image:url(:/resource/image/Bottom/more.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/more_focus.png);}"
#define BUTTOM_SHEET_PREVIOUS       "QPushButton{border-image:url(:/resource/image/Bottom/previous.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/previous_focus.png);}"
#define BUTTOM_SHEET_PLAY           "QPushButton{border-image:url(:/resource/image/Bottom/play.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/play_focus.png);}"
#define BUTTOM_SHEET_NEXT           "QPushButton{border-image:url(:/resource/image/Bottom/next.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/next_focus.png);}"
#define BUTTOM_SHEET_TIME           "QLabel{color:rgb(138,138,138);font-size:18px;}"
#define BUTTOM_SHEET_SPEED          "QPushButton{border-image:url(:/resource/image/Bottom/speed.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/speed_focus.png);}"
#define BUTTOM_SHEET_QUALITY        "QPushButton{border-image:url(:/resource/image/Bottom/quality.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/quality_focus.png);}"
#define BUTTOM_SHEET_EFFECT         "QPushButton{border-image:url(:/resource/image/Bottom/effect.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/effect_focus.png);}"
#define BUTTOM_SHEET_LOW_VOLUME     "QPushButton{border-image:url(:/resource/image/Bottom/low_volume.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/low_volume_focus.png);}"
#define BUTTOM_SHEET_HIGH_VOLUME    "QPushButton{border-image:url(:/resource/image/Bottom/high_volume.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/high_volume_focus.png);}"
#define BUTTOM_SHEET_MUTE           "QPushButton{border-image:url(:/resource/image/Bottom/mute.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/mute_focus.png);}"
#define BUTTOM_SHEET_ORDER          "QPushButton{border-image:url(:/resource/image/Bottom/order.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/order_focus.png);}"
#define BUTTOM_SHEET_LYRICS         "QPushButton{border-image:url(:/resource/image/Bottom/lyrics.png);} QPushButton:hover{border-image:url(:/resource/image/Bottom/lyrics_focus.png);}"
#define BUTTOM_SHEET_LIST           "QPushButton{color:rgb(138,138,138);text-align: left;} QPushButton:hover{color:rgb(18,150,219);text-align: left;}"




//中间部分

#define MIDDLE_SHEET_LEFT_BTN       "QPushButton{background:transparent;border:rgba(0,0,0,0);text-align:left 10px;border-radius:5px;margin-left:15px;font:20px;}\
                                     QPushButton::hover{background:rgba(0,0,0,35);}\
                                     QPushButton::checked{background:rgba(0,0,0,75);font:bold;}"

#define MY_TOOLBOX_SHEET_ADD        "QPushButton{border-image:url(:/resource/image/myWidget/add.png);} \
                                     QPushButton:hover{border-image:url(:/resource/image/myWidget/add_focus.png);}"
#define MY_TOOLBOX_SHEET_ARROW      "QPushButton{border-image:url(:/resource/image/myWidget/close.png);} \
                                     QPushButton:hover{border-image:url(:/resource/image/myWidget/close_focus.png);} \
                                     QPushButton::checked{border-image:url(:/resource/image/myWidget/open.png);}\
                                     QPushButton::checked:hover{border-image:url(:/resource/image/myWidget/open_focus.png);}"

#endif // STYLE_SHEET_H
