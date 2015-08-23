/*
 * Copyright (C) 2010-2014 by Stephen Allewell
 * steve.allewell@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


#ifndef LibraryPatternPropertiesDlg_H
#define LibraryPatternPropertiesDlg_H


#include <QDialog>

#include "ui_LibraryPatternProperties.h"


class LibraryPatternPropertiesDlg : public QDialog
{
    Q_OBJECT

public:
    LibraryPatternPropertiesDlg(QWidget *, qint32, Qt::KeyboardModifiers, qint16, const QString &, int, int, const QIcon &);
    ~LibraryPatternPropertiesDlg();

    qint32 key() const;
    Qt::KeyboardModifiers modifiers() const;
    qint16 baseline() const;

private slots:
    void on_DialogButtonBox_accepted();
    void on_DialogButtonBox_rejected();
    void on_DialogButtonBox_helpRequested();

private:
    Ui::LibraryPatternProperties    ui;
};


#endif // LibraryPatternPropertiesDlg_H
