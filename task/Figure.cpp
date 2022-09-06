#include "Figure.h"
#include <iostream>
using namespace std;

// Установить Название фигуры.
void Figure::SetName() { m_shapeName = "abstract"; }

// Установить цвет фигуры.
void Figure::SetColor()
{
	int min = 1;
	int max = 3;

	int switch_on = rand() % (max - min + 1) + min;
	switch (switch_on)
	{
	case 1:
		m_shapeColor = "Red";
		break;
	case 2:
		m_shapeColor = "Green";
		break;
	case 3:
		m_shapeColor = "Blue";
		break;
	}
}

// Установить геометрию фигуры.
void Figure::SetGeometry()
{
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			m_shapeGeometry[i][j] = 0;
		}
	}
}

// Выводит фигуру на экран.
void Figure::ShowFigure()
{
	cout << "Shape name: " << m_shapeName << endl;
	cout << "Shape color: " << m_shapeColor << endl;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << m_shapeGeometry[i][j];
		}
		cout << endl;
	}
	cout << endl;
}