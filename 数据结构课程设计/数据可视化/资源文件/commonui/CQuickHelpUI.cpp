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
	//searchButton = 

	//connect(, &QPushButton::clicked, this, &CQuickHelpUI::Creat_btn_code_text);
	

    /*QFile file(":/Help/dfs");
	if (file.open(QFile::ReadOnly | QFile::Text))
	{
		QTextStream stream(&file);
		ui->Viewer->setHtml(stream.readAll());
	}*/
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
void CQuickHelpUI::Search_btn_code()
{
	ui->Viewer->setText("if empty, return NOT_FOUND \nindex = 0, temp = head \nwhile (temp.item != v) \n\tindex++, temp = temp.next \n\tif temp == null \n\t\t return NOT_FOUND \n return index");
}

void CQuickHelpUI::headinsertButton_code()
{
	ui->Viewer->setText("Vertex vtx = new Vertex(v)\nvtx.next = head\nhead = vtx");
}
void CQuickHelpUI::tailinsertButton_code()
{
	ui->Viewer->setText("Vertex vtx = new Vertex(v)\ntail.next = vtx\ntail = vtx");
}
void CQuickHelpUI::insertButton_code()
{
	ui->Viewer->setText("Vertex pre = head\nfor (k = 0; k < i - 1; k++)\n\tpre = pre.next\nVertex aft = pre.next\nVertex vtx = new Vertex(v)\nvtx.next = aft\npre.next = vtx");
}
void CQuickHelpUI::headdeleteButton_code()
{
	ui->Viewer->setText("if empty, do nothing\ntemp = head\nhead = head.next\ndelete temp");
}
void CQuickHelpUI::taildeleteButton_code()
{
	ui->Viewer->setText("if empty, do nothing\nVertex pre = head\ntemp = head.next\nwhile (temp.next != null)\n\tpre = pre.next\npre.next = null\ndelete temp, tail = pre");
}
void CQuickHelpUI::deleteButton_code()
{
	ui->Viewer->setText("if empty, do nothing\nVertex pre = head\nfor (k = 0; k < i - 1; k++)\n\tpre = pre.next\nVertex del = pre.next, aft = del.next\npre.next = aft // bypass del\ndelete del");
}
