#include "middlepart.h"

MiddlePart::MiddlePart(QWidget *parent) : QFrame(parent)
{
    this->setMouseTracking(true);
    this->setMinimumHeight(WINDOW_DEFAULT_MIDDLE_HEIGHT);

    this->m_musicPart = new MusicPart(this);
    this->m_midPart = new QStackedLayout;
    this->m_midPart->setContentsMargins(QMargins(0,0,0,0));
    this->m_midPart->addWidget(this->m_musicPart);


    this->m_middleBaseLayout = new QHBoxLayout(this);
    this->m_middleBaseLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_middleBaseLayout->addLayout(this->m_midPart);
}
