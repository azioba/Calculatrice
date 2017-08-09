#include "calculatrice.h"
#include "ui_calculatrice.h"


#include<iostream>
#include<math.h>

double firstNumber;
bool ecritSecondNombre = false;

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
	connect(ui.ButtonSin, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonCos, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonTan, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonRacineCarre, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonLogNep, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonLogDec, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
	connect(ui.ButtonFacto, SIGNAL(released()), this, SLOT(unary_operation_pressed()));

	connect(ui.ButtonPlus, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonMoins, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonMultip, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonDivis, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
	connect(ui.ButtonCarre, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

	ui.ButtonPlus->setCheckable(true);
	ui.ButtonMoins->setCheckable(true);
	ui.ButtonMultip->setCheckable(true);
	ui.ButtonDivis->setCheckable(true);
	ui.ButtonCarre->setCheckable(true);
}





Calculatrice::~Calculatrice()
{

}

void Calculatrice::keyPressEvent(QKeyEvent * event)
{
	ui.label->setText(event->text());
}








void Calculatrice::button_pressed()
{
	QPushButton *button = (QPushButton*)sender();

	double nbreMemoire;
	QString newLabel;

	if ((ui.ButtonPlus->isChecked() || ui.ButtonMoins->isChecked() || ui.ButtonMultip->isChecked() || ui.ButtonDivis->isChecked()|| ui.ButtonCarre->isChecked())
		&& (!ecritSecondNombre))
	{
		nbreMemoire = button->text().toDouble();
		ecritSecondNombre = true;
		newLabel = QString::number(nbreMemoire, 'g', 12);
	}
	else
	{
		if (ui.label->text().contains('.') && button->text() == "0") // pour pouvoir écrire un nombre decimal avec 0 (0.01 par exemple)
		{
			newLabel = ui.label->text() + button->text();
		}
		else
		{
			nbreMemoire = (ui.label->text() + button->text()).toDouble();
			newLabel = QString::number(nbreMemoire, 'g', 12);
		}	
	}
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

	if (button->text() == "cos")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = cos(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "sin")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = sin(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "tan")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = tan(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "ln")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = log(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "log")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = log10(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}

	if (button->text() == "e")
	{
		nbreMemoire = ui.label->text().toDouble();
		nbreMemoire = exp(nbreMemoire);
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
	}
}

void Calculatrice::on_ButtonReset_released()
{
	ui.ButtonPlus->setChecked(false);
	ui.ButtonMoins->setChecked(false);
	ui.ButtonDivis->setChecked(false);
	ui.ButtonMultip->setChecked(false);
	ui.ButtonCarre->setChecked(false);

	ecritSecondNombre = false;

	ui.label->setText("0");
}

void Calculatrice::on_ButtonEnter_released()
{
	double nbreMemoire, secondNumber;
	QString newLabel;

	secondNumber = ui.label->text().toDouble();

	if (ui.ButtonPlus->isChecked())
	{
		nbreMemoire = firstNumber + secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonPlus->setChecked(false);

	}
	else if (ui.ButtonMoins->isChecked())
	{
		nbreMemoire = firstNumber - secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonMoins->setChecked(false);
	}
	else if (ui.ButtonMultip->isChecked())
	{
		nbreMemoire = firstNumber * secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonMultip->setChecked(false);
	}
	else if (ui.ButtonDivis->isChecked())
	{
		nbreMemoire = firstNumber / secondNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonDivis->setChecked(false);
	}
	else if (ui.ButtonCarre->isChecked())
	{
		nbreMemoire = firstNumber * firstNumber;
		newLabel = QString::number(nbreMemoire, 'g', 12);
		ui.label->setText(newLabel);
		ui.ButtonDivis->setChecked(false);
	}
	ecritSecondNombre = false;
}

void Calculatrice::binary_operation_pressed()
{
	QPushButton *button = (QPushButton*)sender();

	firstNumber = ui.label->text().toDouble();

	button->setChecked(true);
}
