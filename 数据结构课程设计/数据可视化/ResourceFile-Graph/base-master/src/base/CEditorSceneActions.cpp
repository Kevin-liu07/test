/*
This file is a part of
QVGE - Qt Visual Graph Editor

(c) 2016-2020 Ars L. Masiuk (ars.masiuk@gmail.com)

It can be used freely, maintaining the information above.
*/

#include <QIcon>
#include <QKeySequence>

#include "CEditorSceneActions.h"
#include "CEditorScene.h"
#include "CNode.h"
#include "CEdge.h"


CEditorSceneActions::CEditorSceneActions(CEditorScene *scene)
{
	cutAction = new QAction(QIcon(":/Icons/Cut"), QString::fromLocal8Bit("剪切"), scene);
	cutAction->setStatusTip(tr("Cut selected item(s) to clipboard"));
	cutAction->setToolTip(tr("Cut selection"));
	cutAction->setShortcut(QKeySequence::Cut);
	connect(cutAction, &QAction::triggered, scene, &CEditorScene::cut);

	copyAction = new QAction(QIcon(":/Icons/Copy"), QString::fromLocal8Bit("复制"), scene);
	copyAction->setStatusTip(tr("Copy selected item(s) to clipboard"));
	copyAction->setToolTip(tr("Copy selection"));
	copyAction->setShortcut(QKeySequence::Copy);
	connect(copyAction, &QAction::triggered, scene, &CEditorScene::copy);

	pasteAction = new QAction(QIcon(":/Icons/Paste"), QString::fromLocal8Bit("粘贴"), scene);
	pasteAction->setStatusTip(tr("Paste item(s) from clipboard"));
	pasteAction->setToolTip(tr("Paste from clipboard"));
	pasteAction->setShortcut(QKeySequence::Paste);
	connect(pasteAction, &QAction::triggered, scene, &CEditorScene::paste);

	delAction = new QAction(QIcon(":/Icons/Delete"), QString::fromLocal8Bit("删除"), scene);
	delAction->setStatusTip(QObject::tr("Delete selected item(s)"));
	delAction->setToolTip(QObject::tr("Delete selection"));
	delAction->setShortcut(QKeySequence::Delete);
	QObject::connect(delAction, &QAction::triggered, scene, &CEditorScene::del);
}
