#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QtWidgets/QMainWindow>
#include <QKeyEvent>
#include "ui_calculatrice.h"

class Calculatrice : public QMainWindow
{
	Q_OBJECT

public:
	Calculatrice(QWidget *parent = 0);
	~Calculatrice();

protected:
	void keyPressEvent(QKeyEvent *event);
	



private:
	Ui::CalculatriceClass ui;

private slots:
	void button_pressed();
	void on_ButtonPoint_released();
	void unary_operation_pressed();
	void on_ButtonReset_released();
	void on_ButtonEnter_released();
	void binary_operation_pressed();

};

#endif // CALCULATRICE_H
