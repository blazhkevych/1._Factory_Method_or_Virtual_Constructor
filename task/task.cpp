/*
	Factory Method
	Требуется спроектировать и реализовать DLL, в которой будет класс
Figure, описывающий фигуру для игры «Тетрис».
	Программистам самой игры необходим класс фигуры, в котором будет
информация:
	* Геометрия фигуры - двумерный массив размерами 4*4, который
описывает, какие клетки фигура будет занимать.
	Например: фигура
	Должна быть описана в массиве так:
1 1 1 0
1 0 0 0
0 0 0 0
0 0 0 0
	* Цвет фигуры - три значения типа byte для красного, зеленого и синего
цвета (RGB).
	* Имя фигуры - строковая переменная, в которой записано имя.
	Спроектируйте и реализуйте данную функциональность с помощью
паттерна «Factory Method (Virtual Constructor)» так, чтобы программисты игры
могли использовать набор статических виртуальных конструкторов для
создания экземпляров класса Figure.

T, Q, I, Z, S, J, L.
*/

#include <iostream>
#include "Figure.h"
#include "Creator.h"
#include "Creator_I.h"
#include "Creator_J.h"
#include "Creator_L.h"
#include "Creator_Q.h"
#include "Creator_S.h"
#include "Creator_T.h"
#include "Creator_Z.h"
#include "Client.h"

void ClientFunc(Creator* pCreator)
{
	Client* client = nullptr;
	client = new Client(pCreator);
	Figure* pFigure = client->Create();
	pFigure->ShowFigure();
	delete pFigure;
	delete client;
}

int main()
{
	srand(time(0));

	Creator* pCreator = new Creator_Z();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_T();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_S();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_Q();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_L();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_J();
	ClientFunc(pCreator);
	delete pCreator;

	cout << endl << endl;

	pCreator = new Creator_I();
	ClientFunc(pCreator);
	delete pCreator;

	system("pause");
}