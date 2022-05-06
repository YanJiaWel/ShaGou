#include "mycrolllabel.h"

MyCRollLabel::MyCRollLabel(QWidget *parent) : QLabel(parent)
{
    this->startTimer(300);
}
void MyCRollLabel::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    if(fontMetrics().width(text()) > width())
    {
        if(0 == m_nCharWidth)
            return ;

        QPainter painter(this);
        m_strDrawText = m_strText.mid(m_nCurrentIndex);
        while((m_strDrawText.size() * m_nCharWidth) <= width()){
            m_strDrawText += m_strText + " ";
        }
        painter.drawText(rect(),alignment(),m_strDrawText);
    }
    else
    {
        QPainter painter(this);
        painter.drawText(rect(),alignment(),text());
    }
}

void MyCRollLabel::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event)

    m_strText = text();
    if(fontMetrics().width(m_strText) > width())
    {
        if(!m_strText.isEmpty()){
            int nSumWidth = fontMetrics().width(m_strText);
            m_nCharWidth = nSumWidth/m_strText.size();
        }

        m_nCurrentIndex++;
        if(m_nCurrentIndex > m_strText.size()){
            m_nCurrentIndex = 0;
        }

        update();
    }
}
