#ifndef MUSICPART_H
#define MUSICPART_H

#include <QWidget>
#include <QScrollBar>
#include "common_data.h"
#include "style_sheet.h"
#include "musicpart/musicpartleft.h"

class MusicPart : public QFrame
{
    Q_OBJECT
public:

    MusicPartLeft* m_leftPart;

    QHBoxLayout* m_baseLayout;

    QStackedLayout* m_subMusic;

    explicit MusicPart(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MUSICPART_H
