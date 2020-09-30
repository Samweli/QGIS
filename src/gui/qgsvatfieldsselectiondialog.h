/***************************************************************************
                         qgsvatfieldsselectiondialog.h
                         -------------------------
    begin                : September 2020
    copyright            : (C) 2020 by Samweli Mwakisambwe
    email                : samweli at kartoza dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/


#ifndef QGSVATFIELDSSELECTIONDIALOG_H
#define QGSVATFIELDSSELECTIONDIALOG_H

#include "ui_qgsvatfieldsselectiondialog.h"
#include "qgis_gui.h"

#define SIP_NO_FILE

class QgsMapCanvas;

/**
 * \ingroup gui
 * \class QgsVatFieldsSelectionDialog
 * \note not available in Python bindings
 */
class GUI_EXPORT QgsVatFieldsSelectionDialog : public QDialog, private Ui::QgsVatFieldsSelectionDialog
{
    Q_OBJECT
  public:

    /**
     * Constructor for QgsVatFieldsSelectionDialog.
     */
    QgsVatFieldsSelectionDialog( QgsMapLayer *layer = nullptr,
                                 QWidget *parent = nullptr,
                                 Qt::WindowFlags f = nullptr);

    struct Fields {
        QString valueField;
        QString redField;
        QString greenField;
        QString blueField;
        QString alphaField;
        QString labelField;
    };

    /**
     * Runs the dialog (if required) prompting for required columns from the specified attribute table
     * from the \a layer.
     *
     * \since QGIS 3.16
     */
    static QgsVatFieldsSelectionDialog::Fields run( QgsMapLayer *layer = nullptr,
                     QWidget *parent = nullptr,
                     const QString &windowTitle = QString() );

    Fields selectedFields();

};

#endif // QGSVATFIELDSSELECTIONDIALOG_H
