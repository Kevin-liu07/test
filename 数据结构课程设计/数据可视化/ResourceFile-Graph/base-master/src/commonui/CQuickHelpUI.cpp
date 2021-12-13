#include "CQuickHelpUI.h"
#include "ui_CQuickHelpUI.h"

#include <QFile>
#include <QTextStream>


CQuickHelpUI::CQuickHelpUI(QWidget *parent): 
	QWidget(parent),
	ui(new Ui::CQuickHelpUI)
{
	ui->setupUi(this);

	//QStringList sl;
	//sl << QApplication::applicationDirPath() + "/../lang/en";
	//ui->Viewer->setSearchPaths(sl);
	//ui->Viewer->setSource(QUrl("help.htm"));

    QFile file(":/Help/dfs");
	if (file.open(QFile::ReadOnly | QFile::Text))
	{
		QTextStream stream(&file);
		ui->Viewer->setHtml(stream.readAll());
	}
}


CQuickHelpUI::~CQuickHelpUI()
{

}
void CQuickHelpUI::Setuitext(int i)
{
    if(i==1){
        QFile file(":/Help/dfs");
        if (file.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream stream(&file);
            ui->Viewer->setHtml(stream.readAll());
        }
    }
    else {
        QFile file(":/Help/bfs");
        if (file.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream stream(&file);
            ui->Viewer->setHtml(stream.readAll());
        }
    }
}
