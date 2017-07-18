#include "calculatrice.h"
#include "ui_calculatrice.h"


#include<iostream>

double firstNum;

Calculatrice::Calculatrice(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.Button0, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button1, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button2, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button3, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button4, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button5, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button6, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button7, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button8, SIGNAL(released()), this, SLOT(button_pressed()));
	connect(ui.Button9, SIGNAL(released()), this, SLOT(button_pressed()));

	connect(ui.ButtonPlusMinus, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonModulo, SIGNAL(released()), this, SLOT(unary_operation_pressed()));

	connect(ui.ButtonPlus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonMoins, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonMultip, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonDivis, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

	ui.ButtonPlus->setCheckable(true);
	ui.ButtonMoins->setCheckable(true);
	ui.ButtonMultip->setCheckable(true);
	ui.ButtonDivis->setCheckable(true);
}

bool plus;
bool minus;
bool time;
bool divide;
bool Sqrt;
double a, b, c;



Calculatrice::~Calculatrice()
{

}



void Calculatrice::button_pressed()
{
	QPushButton *button = (QPushButton*)sender();

	double nbreMemoire;
	QString newLabel;

	if (ui.ButtonPlus->isChecked() || ui.ButtonMoins->isChecked() || ui.ButtonMultip->isChecked() || ui.ButtonDivis->isChecked())
	{
		nbreMemoire = button->text().toDouble();
	}
	else
	{
		nbreMemoire = (ui.label->text() + button->text()).toDouble();
	}

	

	newLabel = QString::number(nbreMemoire,'g',12);

	ui.label->setText(newLabel);
}

void Calculatrice::on_ButtonPoint_released()
{
	ui.label->setText(ui.label->text() + ".");
}

void Calculatrice::unary_operation_pressed()
{
	QPushButton *button = (QPushButton*)sender();
	double nbreMemoire;
	QString newLabel;
	if (button->text() == "+/-")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = nbreMemoire * -1;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "%")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = nbreMemoire * 0.01;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}
}

void Calculatrice::on_ButtonReset_released()
{
}

void Calculatrice::on_ButtonEnter_released()
{
	double nbreMemoire, secondNumber;
	QString newLabel;

	secondNumber = ui.label->text().toDouble();

	if (ui.ButtonPlus->isChecked())
	{
		nbreMemoire = firstNum + secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonPlus->setChecked(false);

	}
	else if (ui.ButtonMoins->isChecked())
	{
		nbreMemoire = firstNum - secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonMoins->setChecked(false);
	}
	else if (ui.ButtonMultip->isChecked())
	{
		nbreMemoire = firstNum * secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonMultip->setChecked(false);
	}
	else if (ui.ButtonDivis->isChecked())
	{
		nbreMemoire = firstNum / secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonDivis->setChecked(false);
	}
}

void Calculatrice::binary_operation_pressed()
{
	QPushButton *button = (QPushButton*)sender();

	firstNum = ui.label->text().toDouble();

	button->setChecked(true);
}
