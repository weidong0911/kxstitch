/*
 * Copyright (C) 2010-2015 by Stephen Allewell
 * steve.allewell@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


#ifndef LibraryManagerDlg_H
#define LibraryManagerDlg_H


#include <QMenu>
#include <QTreeWidgetItem>
#include <QWidget>

#include <KDialog>

#include "ui_LibraryManager.h"


class LibraryListWidgetItem;
class LibraryTreeWidgetItem;


class LibraryManagerDlg : public KDialog
{
    Q_OBJECT

public:
    explicit LibraryManagerDlg(QWidget *parent);
    ~LibraryManagerDlg();

    LibraryTreeWidgetItem *currentLibrary();

protected:
    virtual bool event(QEvent *);

public slots:
    void setCellSize(double, double);

protected slots:
    void slotButtonClicked(int);

private slots:
    void on_LibraryTree_customContextMenuRequested(const QPoint &);
    void on_LibraryIcons_customContextMenuRequested(const QPoint &);
    void on_LibraryTree_currentItemChanged(QTreeWidgetItem *, QTreeWidgetItem *);
    void on_IconSizeSlider_valueChanged(int);

    void newCategory();
    void addLibraryToExportList();
    void libraryProperties();
    void pasteFromClipboard();

    void patternProperties();
    void addPatternToExportList();
    void copyToClipboard();
    void deletePattern();

private:
    void refreshLibraries();
    void recurseLibraryDirectory(LibraryTreeWidgetItem *, const QString &);

    QMenu                   m_contextMenu;
    LibraryTreeWidgetItem   *m_contextTreeItem;
    LibraryListWidgetItem   *m_contextListItem;

    Ui::LibraryManager  ui;
};


#endif // LibraryManagerDlg_H
