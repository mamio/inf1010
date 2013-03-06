#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mSuivi = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnFindPath_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Ouvrir le .h"),
                                                     "",
                                                    tr("Fichiers d'en-tete (*.h)"));
    ui->txtFilePath->setText(file);
    mHeaders.clear();
    ifstream stream(file.toStdString().c_str());

    while(true)
    {
        string ligne;
        getline(stream, ligne);

        if(stream.fail())
            break;

        switch(ligne[ligne.length()-1])
        {
            case ';':
            if(ligne.find('(') != string::npos &&
                    ligne.find(')') != string::npos)
                    mHeaders.push_back(ligne);
                break;
            default:
                break;
        }
    }

    update();
}

void MainWindow::on_btnNext_clicked()
{
    if(mSuivi < mHeaders.size())
    {
        save();
        ++mSuivi;
        update();
    }
}

void MainWindow::on_btnSkip_clicked()
{
    if(mSuivi < mHeaders.size())
    {
        ++mSuivi;
        update();
    }
}

void MainWindow::reset()
{
    ui->txtDesc->setText("");
    ui->txtDetails->setText("");
    ui->txtName->setText("");
    ui->txtParams->setText("");
    ui->txtReturn->setText("");
}

void MainWindow::update(int* taMere, int& caca, int chit)
{

}

void MainWindow::update()
{
    reset();

    QString suivi = QString::number(mSuivi+1) + " de " + QString::number(mHeaders.size());
    ui->lblSuivi->setText(suivi);
    ui->lblHeader->setText(mHeaders[mSuivi].c_str());

    QString header = QString(mHeaders[mSuivi].c_str());
    int posParams = header.indexOf('('),
            posName = 0;
    for(int i = posParams -1; i >= 0; --i)
    {
        if(header[i] == ' ')
        {
            posName = i;
            ui->txtName->setText(header.mid(i, posParams - posName));
            break;
        }

    }

    QString tReturn;
    for(int i = 0; i < posName; ++i)
    {
        if(header[i] != ' ')
        {
            tReturn = header.mid(i, posName - i);
            break;
        }
    }

    if(tReturn == "" || tReturn == "void")
        ui->txtReturn->setText("AUCUNE");
    else
        ui->txtReturn->setText(tReturn);

    if(header.indexOf(')') > posParams + 1)
    {
        QString params = "";
        for(int i = posParams + 1; i < header.size(); ++i)
        {
            if(header[i] == ',' || header[i] == ')')
            {
                QString temp = (header.mid(posParams + 1, i - posParams - 1));
                posParams = i;

                bool type = false;
                for(int i = 0; i < temp.size(); ++i)
                {
                    if(temp[i] != ' ')
                        type = true;
                    else
                    {
                        if(!type)
                            type = true;
                        else
                        {
                            params += temp.mid(i + 1);
                            break;
                        }
                    }
                }


                if(temp.indexOf('&') != -1 && temp.indexOf('*'))
                    params += " (IN/OUT)";
                else
                    params += " (IN)";
                params += ": DESCRIPTION \n";
            }

            if(header[i] == ')')
                break;
        }
        ui->txtParams->setText(params);
    }
    else
        ui->txtParams->setText("");

}

void MainWindow::save()
{
    ifstream streamr;
    streamr.open(ui->txtFilePath->text().toStdString().c_str());

    string begF, endF;
    int pos = -1;
    while(true)
    {
        string line = "";
        getline(streamr, line);

        if(streamr.fail())
            break;

        if(mHeaders[mSuivi] == line)
            pos = streamr.tellg();

        if(pos != -1)
            endF += line + "\n";
        else
            begF += line + "\n";
    }

    if(pos != -1)
    {
        ofstream stream;
        stream.open(ui->txtFilePath->text().toStdString().c_str(), ios::trunc);

        string space =
                "                                                                         ";
        string begin = "\/*", end = "*\/";
        string header = begin +
                "---------------------------------------------------------------------"
                + end + "\n" + begin + " DESCRIPTION:      " +
                ui->txtName->text().toStdString() + "()" +
                space.substr(0, 80 - 32 - ui->txtName->text().size()) + end + "\n";
        header += formatText("",ui->txtDesc->toPlainText().toStdString(), false);
        header += formatText("PARAMETRES:", ui->txtParams->toPlainText().toStdString(), true);
        header += formatText("VALEUR DE RETOUR:", ui->txtReturn->text().toStdString(), false);
        header += formatText("REMARQUE:", ui->txtDetails->toPlainText().toStdString(), false);
        header += begin +
                "---------------------------------------------------------------------"
                + end + "\n";

        stream << begF << header << endF;
    }

}

string MainWindow::formatText(string head, string text, bool keepFormat)
{
    string begin = "\/*", end = "*\/", result;

    if(!keepFormat)
    {
        while(text.find("\n") != -1)
            text.erase(text.begin() + text.find("\n"));
    }

    do
    {
        result += begin + " " + head;

        for(int i = 3 + head.size(); i < 22; ++i)
            result += ' ';

        string temp = text;
        if(text.size() > 73 - 22 - 3)
        {
            temp = text.substr(0, 73 - 22 - 3);
            while(temp[temp.size()-1] != ' ')
                temp.resize(temp.size()-1);
        }
        if(temp.find("\n") != -1)
        {
            temp.resize(temp.find("\n"));
            result += temp;
            text = text.substr(temp.size()+1);
        }
        else
        {
            result += temp;
            text = text.substr(temp.size());
        }

        for(int i = 3 + 22 + temp.size(); i < 73; ++i)
            result += ' ';

        head = "";
        result += " " + end + "\n";
    }while(text.size() > 0);

    return result;
}
