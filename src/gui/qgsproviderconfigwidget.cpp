/***************************************************************************
    qgsproviderconfigwidget.cpp
    ---------------------------
    begin                : December 2020
    copyright            : (C) 2020 Samweli Mwakisambwe
    email                : samweli at kartoza dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsproviderconfigwidget.h"
#include "qgspanelwidget.h"

QgsProviderConfigWidget::QgsProviderConfigWidget(QgsMapCanvas *canvas, QWidget *parent )
  : QgsPanelWidget( parent )
  , mMapCanvas( canvas )
{

}
