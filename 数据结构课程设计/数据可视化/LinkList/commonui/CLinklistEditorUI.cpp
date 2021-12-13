#include "CLinklistEditorUI.h"
#include "ui_CLinklistEditorUI.h"
#include "../base/CNodeEditorScene.h"
#include <QFile>
#include <QTextStream>
CLinklistEditorUI::CLinklistEditorUI(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CLinklistEditorUI),
	m_scene(NULL)
{
	ui->setupUi(this);
	listshow = nullptr;
}
void CLinklistEditorUI::onSceneDetached(CEditorScene* scene)
{
	scene->disconnect(this);
}
void CLinklistEditorUI::setScene(CNodeEditorScene* scene)
{
	if (m_scene)
		onSceneDetached(m_scene);
	m_scene = scene;
	setEnabled(m_scene);
	if (m_scene)
		onSceneAttached(m_scene);
}
void CLinklistEditorUI::onSceneAttached(CEditorScene* scene)
{
}
void CLinklistEditorUI::setCQuickHelpUI(CQuickHelpUI* quickHelp)
{
	m_quickHelp = quickHelp;
	setEnabled(m_quickHelp);
}
CLinklistEditorUI::~CLinklistEditorUI()
{
}
void CLinklistEditorUI::on_add_btn_clicked()
{
}
void CLinklistEditorUI::on_insert_btn_clicked()
{
}
void CLinklistEditorUI::on_creat_btn_clicked()
{
	for (int i = 1; i <= list.size(); ++i) //// Create after screen clearing
	{
		m_scene->deletenode(i);
	}
	QString data = ui->dataEdit->text();
	list = data.split(",");
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		bool flag;
		int x = tmp.toUInt(&flag);
		if (!flag)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_clean_btn_clicked() //�����ť�ۺ���
{
	ui->dataEdit->clear();
	for (int i = 1; i <= list.size(); ++i)
	{
		m_scene->deletenode(i);
	}
	list.clear();
}
void CLinklistEditorUI::on_headinsert_btn_clicked()
{
	m_quickHelp->headinsertButton_code();
	for (int i = 1; i <= list.size(); ++i)
	{
		m_scene->deletenode(i);
	}
	QString data = ui->insert_Edit1->text();
	list.insert(0, data);
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_tailinsert_btn_clicked() //β�����밴ť�ۺ���
{
	m_quickHelp->tailinsertButton_code();
	for (int i = 1; i <= list.size(); ++i) //�����󴴽�
	{
		m_scene->deletenode(i);
	}
	QString data = ui->insert_Edit1->text();
	qDebug("%s has been entered in the input box", qPrintable(data));
	int list_size = list.size();
	list.insert(list_size, data); //β������
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		qDebug("%s", qPrintable(tmp));
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_locationinsert_btn_clicked() //����λ�ò��밴ť�ۺ���
{
	m_quickHelp->insertButton_code();
	for (int i = 1; i <= list.size(); ++i) //�����󴴽�
	{
		m_scene->deletenode(i);
	}
	QString data = ui->insert_Edit2->text();
	qDebug("%s has been entered in the input box", qPrintable(data));
	int num = ui->insert_spinBox->value();
	int list_size = list.size();
	if (num<0 || num > list_size + 1)//�������뷶Χ����
	{
		return;
	}
	list.insert(num, data); //ĳ��λ�ò���
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		qDebug("%s", qPrintable(tmp));
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_headdelete_btn_clicked() //ͷ���Ƴ���ť�ۺ���
{
	m_quickHelp->headdeleteButton_code();
	for (int i = 1; i <= list.size(); ++i) //�����󴴽�
	{
		m_scene->deletenode(i);
	}
	if (!list.isEmpty())
	{
		list.removeFirst();//ɾ����һ��Ԫ��
	}
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		qDebug("%s", qPrintable(tmp));
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_taildelete_btn_clicked() //β���Ƴ���ť�ۺ���
{
	m_quickHelp->taildeleteButton_code();
	for (int i = 1; i <= list.size(); ++i) //�����󴴽�
	{
		m_scene->deletenode(i);
	}
	if (!list.isEmpty())
	{
		list.removeLast();//ɾ�����һ��Ԫ��
	}
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		qDebug("%s", qPrintable(tmp));
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_locationdelete_btn_clicked() //����λ���Ƴ���ť�ۺ���
{
	m_quickHelp->deleteButton_code();
	for (int i = 1; i <= list.size(); ++i) //�����󴴽�
	{
		m_scene->deletenode(i);
	}
	int num = ui->delete_spinBox->value();
	qDebug("ɾ��λ��%d", num);
	int list_size = list.size();
	if (num<0 || num > list_size + 1)//����ɾ����Χ����
	{
		return;
	}
	if (!list.isEmpty())
	{
		list.removeAt(num);//ɾ��ָ��Ԫ��
	}
	for (int i = 0; i < list.size(); ++i)
	{
		QString tmp = list.at(i);
		qDebug("%s", qPrintable(tmp));
		bool ok2;
		int x = tmp.toUInt(&ok2);
		if (!ok2)
			return;
		m_scene->insertnode(i, x);
	}
}
void CLinklistEditorUI::on_search_btn_clicked() //�ۺ���
{
	m_quickHelp->Search_btn_code();
}