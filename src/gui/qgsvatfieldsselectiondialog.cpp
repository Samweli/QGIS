/***************************************************************************
                         qgsvatfieldsselectiondialog.cpp
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

#include "qgsvatfieldsselectiondialog.h"
#include "qgsguiutils.h"
#include "qgsgui.h"

QgsVatFieldsSelectionDialog::QgsVatFieldsSelectionDialog( QgsMapLayer *layer,
                                                          QWidget *parent,
                                                          Qt::WindowFlags f )
    : QDialog( parent, f )
{
    setupUi( this );
    mValueComboBox->setLayer( layer );
    mRedFieldComboBox->setLayer( layer );
    mGreenFieldComboBox->setLayer( layer );
    mBlueFieldComboBox->setLayer( layer );
    mAlphaComboBox->setLayer( layer );
    mLabelComboBox->setLayer( layer );
}

QgsVatFieldsSelectionDialog::Fields QgsVatFieldsSelectionDialog::run( QgsMapLayer *layer,
                                       QWidget *parent,
                                       const QString &windowTitle ){

    QgsVatFieldsSelectionDialog dialog(layer, parent, nullptr);
    QgsVatFieldsSelectionDialog::Fields fields;

    if ( !windowTitle.isEmpty() )
      dialog.setWindowTitle( windowTitle );

    if ( dialog.exec() ){
      fields = dialog.selectedFields();
      return fields;
    }

    return fields;
}

QgsVatFieldsSelectionDialog::Fields QgsVatFieldsSelectionDialog::selectedFields(){
    Fields fields;
    fields.valueField = mValueComboBox->currentText();
    fields.redField = mRedFieldComboBox->currentText();
    fields.greenField = mGreenFieldComboBox->currentText();
    fields.blueField = mBlueFieldComboBox->currentText();
    fields.alphaField = mAlphaComboBox->currentText();
    fields.labelField = mLabelComboBox->currentText();

    return fields;
}

