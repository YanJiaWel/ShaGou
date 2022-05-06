#include "musicpart.h"

MusicPart::MusicPart(QWidget *parent) : QFrame(parent)
{
    //this->m_subMusic = new QStackedLayout;
    this->m_leftPart = new MusicPartLeft(this);

    this->m_baseLayout = new QHBoxLayout(this);
    this->m_baseLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_baseLayout->addWidget(this->m_leftPart);
    this->m_baseLayout->addStretch();
}
