#ifndef MYTOOLBOX_H
#define MYTOOLBOX_H

#include <QWidget>
#include "common_data.h"
#include "style_sheet.h"

class MyToolBox : public QFrame
{
    Q_OBJECT
public:
    QLabel* m_nameLab;
    QPushButton* m_addBtn;
    QPushButton* m_arrowBtn;

    QHBoxLayout* m_titleLayout;
    QVBoxLayout* m_baseLayout;

    explicit MyToolBox(const QString& str,QWidget *parent = nullptr);

private:
    QString m_name;

    void initUI();
signals:

public slots:
};

#endif // MYTOOLBOX_H
