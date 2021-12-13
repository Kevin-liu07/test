#pragma once

#include <QWidget>

namespace Ui {
	class CQuickHelpUI;
}


class CQuickHelpUI : public QWidget
{
	Q_OBJECT

public:
	CQuickHelpUI(QWidget *parent = 0);
	~CQuickHelpUI();
    void Setuitext(int);

private:
	Ui::CQuickHelpUI *ui;
};

