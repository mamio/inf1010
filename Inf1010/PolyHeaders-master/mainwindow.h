#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <vector>
#include <fstream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_btnFindPath_clicked();
    void on_btnNext_clicked();
    void on_btnSkip_clicked();

private:
    void reset();
    void update();
    void update(int* taMere, int& caca, int chit);
    void save();
    std::string formatText(std::string head, std::string text, bool keepFormat);

private:
    Ui::MainWindow *ui;
    std::string mPath;
    std::vector<std::string> mHeaders;
    unsigned int mSuivi;
};

#endif // MAINWINDOW_H
