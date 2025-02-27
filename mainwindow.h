/**
   
StopWatch-tr Türkçe bir kronometre uygulamasıdır. Geliştirdikçe farklı diller de gelebilir.

Copyright (C) 2025 Emrullah Enis Çetinkaya and contributors

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

 **/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"
#include "QMessageBox"
#include "QTime"
#include "QDate"
#include "second_window.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void main_window_show2();
    ~MainWindow();


private slots:
    void on_start_pause_clicked();
    void on_reset_clicked();
    void on_about_triggered();
    void timer_window_open(bool checked);

private:
    Ui::MainWindow *ui;
    QTimer *timer,*timer2;
    void main_timer_func();
    void timer_func();
    second_window *timer_window;

};
#endif // MAINWINDOW_H
