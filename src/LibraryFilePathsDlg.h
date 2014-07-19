/*
 * Copyright (C) 2010-2014 by Stephen Allewell
 * steve.allewell@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


#ifndef LibraryFilePathsDlg_H
#define LibraryFilePathsDlg_H


#include <KDialog>

#include "ui_LibraryFilePaths.h"


class LibraryFilePathsDlg : public KDialog
{
    Q_OBJECT

public:
    LibraryFilePathsDlg(QWidget *, const QString &, QStringList);
    ~LibraryFilePathsDlg();

protected slots:
    void slotButtonClicked(int);

private:
    Ui::LibraryFilePaths    ui;
};


#endif // LibraryFilePathsDlg_H
