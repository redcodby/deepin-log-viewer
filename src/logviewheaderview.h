#ifndef SYSTEM_SERVICE_TABLE_HEADER_VIEW_H
#define SYSTEM_SERVICE_TABLE_HEADER_VIEW_H

#include <DHeaderView>
#include <DStyle>

DWIDGET_USE_NAMESPACE

class LogViewHeaderView : public DHeaderView
{
public:
    LogViewHeaderView(Qt::Orientation orientation, QWidget *parent = nullptr);

    QSize sizeHint() const override;

    inline int getSpacing() const { return m_spacing; }
    inline void setSpacing(int spacing) { m_spacing = spacing; }

protected:
    void paintEvent(QPaintEvent *e) override;
    virtual void paintSection(QPainter *painter, const QRect &rect,
                              int logicalIndex) const override;

private:
    int m_spacing {1};
};

#endif  // SYSTEM_SERVICE_TABLE_HEADER_VIEW_H
