#pragma once
#include "../base/CNodeEditorScene.h"
#include "CQuickHelpUI.h"
#include <QWidget>
class CEditorScene;
namespace Ui {
	class CLinklistEditorUI;
}
struct Linklist
{
	int data;
	struct Linklist *next;
};
class CLinklistEditorUI : public QWidget
{
	Q_OBJECT
public:
	CLinklistEditorUI(QWidget *parent = 0);
	~CLinklistEditorUI();
	void setScene(CNodeEditorScene* scene);
	void setCQuickHelpUI(CQuickHelpUI* scene);
signals:
	void SearchBtn_SendText();
private slots:
	void on_add_btn_clicked();
	void on_insert_btn_clicked();
	void on_delete_btn_clicked();
	void on_search_btn_clicked();
	void on_creat_btn_clicked();
	void on_clean_btn_clicked();
	void on_headinsert_btn_clicked();
	void on_tailinsert_btn_clicked();
	void on_locationinsert_btn_clicked();
	void on_headdelete_btn_clicked();
	void on_taildelete_btn_clicked();
	void on_locationdelete_btn_clicked();
protected:
	void onSceneAttached(CEditorScene* scene);
	void onSceneDetached(CEditorScene* scene);
private:
	Ui::CLinklistEditorUI *ui;
	Linklist *listshow;
	CNodeEditorScene *m_scene;
	CNode *m_nodeFactory;
	CEdge *m_edgeFactory;
	CQuickHelpUI *m_quickHelp;
	QStringList list; //节点列表
};