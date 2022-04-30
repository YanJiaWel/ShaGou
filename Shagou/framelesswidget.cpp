#include "framelesswidget.h"
#include <QDebug>

FramelessWidget::FramelessWidget(QWidget *parent) : QWidget(parent)
{
    this->setMouseTracking(true);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setMinimumSize(WINDOW_MIN_WIDTH,WINDOW_MIN_HEIGHT);
    qDebug() << "----------FramelessWidget-------------";
    qDebug() << "m_border = " << this->m_border;

}

void FramelessWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(!this->m_left_button_state && this->m_cursor != Default)
        {
            this->m_left_button_state = true;
            this->m_original_rect     = this->geometry();
            this->m_cursor_start_pos  = QCursor::pos();
            this->m_cursor_end_pos    = QCursor::pos();

            qDebug() << "----------mousePressEvent-------------";
            qDebug() << "event->pos = " << event->pos();
            qDebug() << "w = " << this->width() << " h = " << this->height() ;
            qDebug() << "m_cursor = " << m_cursor;
            qDebug() << "m_original_rect = " << m_original_rect;
            qDebug() << "m_cursor_start_pos = " << m_cursor_start_pos;
        }
    }

}
void FramelessWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(this->m_left_button_state)
        {
            this->m_left_button_state = false;
            this->m_cursor            = Default;
            this->m_original_rect     = {0,0,0,0};
            this->m_cursor_start_pos  = {0,0};
            this->m_cursor_end_pos    = {0,0};

            qDebug() << "----------mouseReleaseEvent-------------";
        }
    }
}
void FramelessWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    if(this->isFullScreen())
    {
        this->showNormal();
    }
    else
    {
        this->showFullScreen();
    }
    qDebug() << "----------mouseDoubleClickEvent-------------";
    qDebug() << "is full screen = " << this->isFullScreen();
}
void FramelessWidget::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    if(this->m_left_button_state)
    {
        QPoint offset_pos      = QCursor::pos();
        this->m_cursor_end_pos = QCursor::pos();

        offset_pos -= this->m_cursor_start_pos;
        QRect pre_geometry = {0,0,0,0};  //先计算改变后的位置
        switch(this->m_cursor)
        {
        case Title:
            this->move(offset_pos.x()+this->m_original_rect.x(),offset_pos.y()+this->m_original_rect.y());
            break;
        case Left:
            pre_geometry.setLeft(this->m_original_rect.x()+offset_pos.x());
            pre_geometry.setTop(this->m_original_rect.y());
            pre_geometry.setWidth(this->m_original_rect.width()-offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height());
            if(pre_geometry.width() >= WINDOW_MIN_WIDTH)
                this->setGeometry(pre_geometry);
            break;
        case Right:
            pre_geometry.setLeft(this->m_original_rect.x());
            pre_geometry.setTop(this->m_original_rect.y());
            pre_geometry.setWidth(this->m_original_rect.width()+offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height());
            if(pre_geometry.width() >= WINDOW_MIN_WIDTH)
                this->setGeometry(pre_geometry);
            break;
        case Top:
            pre_geometry.setLeft(this->m_original_rect.x());
            pre_geometry.setTop(this->m_original_rect.y()+offset_pos.y());
            pre_geometry.setWidth(this->m_original_rect.width());
            pre_geometry.setHeight(this->m_original_rect.height()-offset_pos.y());
            if(pre_geometry.height() >= WINDOW_MIN_HEIGHT)
                this->setGeometry(pre_geometry);
            break;
        case Bottom:
            pre_geometry.setLeft(this->m_original_rect.x());
            pre_geometry.setTop(this->m_original_rect.y());
            pre_geometry.setWidth(this->m_original_rect.width());
            pre_geometry.setHeight(this->m_original_rect.height()+offset_pos.y());
            if(pre_geometry.height() >= WINDOW_MIN_HEIGHT)
                this->setGeometry(pre_geometry);
            break;
        case LeftTop:
            pre_geometry.setLeft(this->m_original_rect.x()+offset_pos.x());
            pre_geometry.setTop(this->m_original_rect.y()+offset_pos.y());
            pre_geometry.setWidth(this->m_original_rect.width()-offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height()-offset_pos.y());

            if(this->m_original_rect.width()-offset_pos.x()  < WINDOW_MIN_WIDTH)
            {
                pre_geometry.setLeft(this->m_original_rect.x()+this->m_original_rect.width()-WINDOW_MIN_WIDTH);
                pre_geometry.setWidth(WINDOW_MIN_WIDTH);
            }
            if(this->m_original_rect.height()-offset_pos.y() < WINDOW_MIN_HEIGHT)
            {
                pre_geometry.setTop(this->m_original_rect.y()+this->m_original_rect.height()-WINDOW_MIN_HEIGHT);
                pre_geometry.setHeight(WINDOW_MIN_HEIGHT);
            }
            this->setGeometry(pre_geometry);
            break;
        case RightBottom:
            pre_geometry.setLeft(this->m_original_rect.x());
            pre_geometry.setTop(this->m_original_rect.y());
            pre_geometry.setWidth(this->m_original_rect.width()+offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height()+offset_pos.y());

            if(this->m_original_rect.width()+offset_pos.x()  < WINDOW_MIN_WIDTH)
            {
                pre_geometry.setWidth(WINDOW_MIN_WIDTH);
            }
            if(this->m_original_rect.height()+offset_pos.y() < WINDOW_MIN_HEIGHT)
            {
                pre_geometry.setHeight(WINDOW_MIN_HEIGHT);
            }
            this->setGeometry(pre_geometry);
            break;
        case LeftBottom:
            pre_geometry.setLeft(this->m_original_rect.x()+offset_pos.x());
            pre_geometry.setTop(this->m_original_rect.y());
            pre_geometry.setWidth(this->m_original_rect.width()-offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height()+offset_pos.y());

            if(this->m_original_rect.width()-offset_pos.x()  < WINDOW_MIN_WIDTH)
            {
                pre_geometry.setLeft(this->m_original_rect.x()+this->m_original_rect.width()-WINDOW_MIN_WIDTH);
                pre_geometry.setWidth(WINDOW_MIN_WIDTH);
            }
            if(this->m_original_rect.height()+offset_pos.y() < WINDOW_MIN_HEIGHT)
            {
                pre_geometry.setHeight(WINDOW_MIN_HEIGHT);
            }
            this->setGeometry(pre_geometry);
            break;
        case RightTop:
            pre_geometry.setLeft(this->m_original_rect.x());
            pre_geometry.setTop(this->m_original_rect.y()+offset_pos.y());
            pre_geometry.setWidth(this->m_original_rect.width()+offset_pos.x());
            pre_geometry.setHeight(this->m_original_rect.height()-offset_pos.y());

            if(this->m_original_rect.width()+offset_pos.x()  < WINDOW_MIN_WIDTH)
            {
                pre_geometry.setWidth(WINDOW_MIN_WIDTH);
            }
            if(this->m_original_rect.height()-offset_pos.y() < WINDOW_MIN_HEIGHT)
            {
                pre_geometry.setTop(this->m_original_rect.y()+this->m_original_rect.height()-WINDOW_MIN_HEIGHT);
                pre_geometry.setHeight(WINDOW_MIN_HEIGHT);
            }
            this->setGeometry(pre_geometry);
            break;
        case Default:
        default:
            offset_pos = {0,0};
            break;

        }

        if(this->m_cursor != Default)
        {
            emit winPositionChange(this->pos().x(),this->pos().y());
        }
        qDebug() << "----------mouseMoveEvent1-------------";
        qDebug() << "m_cursor = " << m_cursor;
        qDebug() << "m_cursor_start_pos = " << m_cursor_start_pos;
        qDebug() << "m_cursor_end_pos   = " << m_cursor_end_pos;
        qDebug() << "offset_pos         = " << offset_pos;

    }
    else
    {
        if( QRect( this->m_border, this->m_title_h , this->width()-this->m_double_border , this->height()-this->m_title_h-this->m_border ).contains( event->pos() ))
        {
            this->m_cursor = Default;
        }
        else if( QRect( this->m_border,this->m_border,this->width()-this->m_double_border,this->m_title_h ).contains( event->pos() ))
        {
            this->m_cursor = Title;
        }
        else if( QRect( 0,this->m_border,this->m_border,this->height()-this->m_double_border ).contains( event->pos() ) )
        {
            this->m_cursor = Left;
        }
        else if( QRect( this->m_border,0,this->width()-this->m_double_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = Top;
        }
        else if( QRect( this->width()-this->m_border,this->m_border,this->m_border,this->height()-this->m_double_border ).contains( event->pos() ) )
        {
            this->m_cursor = Right;
        }
        else if( QRect( this->m_border,this->height()-this->m_border,this->width()-this->m_double_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = Bottom;
        }
        else if( QRect( 0,0,this->m_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = LeftTop;
        }
        else if( QRect( this->width()-this->m_border,0,this->m_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = RightTop;
        }
        else if( QRect( 0,this->height()-this->m_border,this->m_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = LeftBottom;
        }
        else if( QRect( this->width()-this->m_border,this->height()-this->m_border,this->m_border,this->m_border ).contains( event->pos() ) )
        {
            this->m_cursor = RightBottom;
        }
        else
        {
            qDebug() << "----------!!!!!!!!!!!!!!!!!-------------";
        }

        switch(this->m_cursor)
        {
        case Default:
        case Title:
            this->setCursor(Qt::ArrowCursor);
            break;
        case Left:
        case Right:
            this->setCursor(Qt::SizeHorCursor);
            break;
        case Top:
        case Bottom:
            this->setCursor(Qt::SizeVerCursor);
            break;
        case LeftTop:
        case RightBottom:
            this->setCursor(Qt::SizeFDiagCursor);
            break;
        case LeftBottom:
        case RightTop:
            this->setCursor(Qt::SizeBDiagCursor);
            break;
        }
        qDebug() << "----------mouseMoveEvent2-------------";
        qDebug() << "event->pos = " << event->pos();
        qDebug() << "w = " << this->width() << " h = " << this->height() ;
        qDebug() << "m_cursor = " << m_cursor;

    }

}
void FramelessWidget::enterEvent(QEvent *event)
{
    Q_UNUSED(event)
    qDebug() << "----------enterEvent-------------";

}
