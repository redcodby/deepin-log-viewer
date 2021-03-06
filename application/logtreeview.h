/*
 * Copyright (C) 2019 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     LZ <zhou.lu@archermind.com>
 *
 * Maintainer: LZ <zhou.lu@archermind.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOGTREEVIEW_H
#define LOGTREEVIEW_H

#include <DTreeView>

class QKeyEvent;
class LogViewHeaderView;
class LogViewItemDelegate;
class LogTreeView : public Dtk::Widget::DTreeView
{
public:
    LogTreeView(QWidget *parent = nullptr);

protected:
    void initUI();
    void paintEvent(QPaintEvent *event) override;
    void drawRow(QPainter *painter, const QStyleOptionViewItem &options,
                 const QModelIndex &index) const override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    LogViewItemDelegate *m_itemDelegate;
    LogViewHeaderView *m_headerDelegate;
};

#endif  // LOGTREEVIEW_H
