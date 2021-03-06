/** -*- mode: c++ ; c-basic-offset: 2 -*-
 *
 *  @file TreeView.h
 *
 *  Copyright 2017 Sebastien Fourey
 *
 *  This file is part of G'MIC-Qt, a generic plug-in for raster graphics
 *  editors, offering hundreds of filters thanks to the underlying G'MIC
 *  image processing framework.
 *
 *  gmic_qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gmic_qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gmic_qt.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef _GMIC_QT_TREEVIEW_H_
#define _GMIC_QT_TREEVIEW_H_

#include <QWidget>
#include <QTreeView>
#include "Common.h"
#include <QDebug>

class TreeView : public QTreeView {
  Q_OBJECT
public:
  TreeView(QWidget * parent = 0);
  ~TreeView();
  void keyPressEvent(QKeyEvent *event) override;
signals:
  void returnKeyPressed();

private:
};

#endif // _GMIC_QT_TREEVIEW_H_
