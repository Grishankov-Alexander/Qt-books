#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include "ui_bookwindow.h"

#include <QMainWindow>
#include <QtSql>

class BookWindow : public QMainWindow
{
    Q_OBJECT

public:
    BookWindow();

private slots:
    void about();

private:
    void showError(const QSqlError &err);
    void createMenuBar();
    Ui::BookWindow ui;
    QSqlRelationalTableModel *model;
    int authorIdx, genreIdx;
};

#endif // BOOKWINDOW_H
