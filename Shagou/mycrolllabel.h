#ifndef MYCROLLLABEL_H
#define MYCROLLLABEL_H

#include <QWidget>
#include <QLabel>
#include <QPainter>
#include <QPaintEvent>
#include <QTimerEvent>

class MyCRollLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyCRollLabel(QWidget *parent = nullptr);

public:
    void setInterVal(int nInterVal){startTimer(nInterVal);}
protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
private:
    int m_nCharWidth = 0;
    int m_nCurrentIndex = 0;
    QString m_strText;
    QString m_strDrawText;
};

#endif // MYCROLLLABEL_H
