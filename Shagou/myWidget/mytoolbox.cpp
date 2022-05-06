#include "mytoolbox.h"

MyToolBox::MyToolBox(const QString &str, QWidget *parent) : QFrame(parent)
{
    this->m_name = str;
    initUI();
}

void MyToolBox::initUI()
{
    this->m_nameLab = new QLabel(this);
    this->m_nameLab->setFixedHeight(30);
    this->m_nameLab->setText(this->m_name);
    this->m_nameLab->setStyleSheet("QLabel{color:rgb(138,138,138);font:17px;margin-left:10px;}");

    this->m_addBtn = new QPushButton(this);
    setButtonParam(this->m_addBtn,25,25,nullptr);
    this->m_addBtn->setStyleSheet(MY_TOOLBOX_SHEET_ADD);

    this->m_arrowBtn = new QPushButton(this);
    setButtonParam(this->m_arrowBtn,20,20,nullptr);
    this->m_arrowBtn->setCheckable(true);
    this->m_arrowBtn->setStyleSheet(MY_TOOLBOX_SHEET_ARROW);


    this->m_titleLayout = new QHBoxLayout(this);
    this->m_titleLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_titleLayout->addWidget(this->m_nameLab);
    this->m_titleLayout->addStretch();
    this->m_titleLayout->addWidget(this->m_addBtn);
    this->m_titleLayout->addWidget(this->m_arrowBtn);

    this->m_baseLayout = new QVBoxLayout(this);
    this->m_baseLayout->setContentsMargins(QMargins(0,0,0,0));
    this->m_baseLayout->addLayout(this->m_titleLayout);
}
