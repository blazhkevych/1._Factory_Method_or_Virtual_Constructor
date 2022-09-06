#include "Q.h"

// Установить Название фигуры.
void Q::SetName() { m_shapeName = "Q"; }

// Установить геометрию фигуры.
void Q::SetGeometry()
{
	/*
		1 1 0 0
		1 1 0 0
		0 0 0 0
		0 0 0 0
	*/

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (
				i == 0 && j == 0 ||
				i == 0 && j == 1 ||
				i == 1 && j == 0 ||
				i == 1 && j == 1
				)
				m_shapeGeometry[i][j] = 1;
		}
	}
}