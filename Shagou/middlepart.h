#ifndef MIDDLEPART_H
#define MIDDLEPART_H

#include <QWidget>
#include "common_data.h"
#include "musicpart.h"

class MiddlePart : public QFrame
{
    Q_OBJECT
public:

private:
    MusicPart* m_musicPart;

    QHBoxLayout* m_middleBaseLayout;
    QStackedLayout* m_midPart;

public:
    explicit MiddlePart(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MIDDLEPART_H
