#include "Z.h"

// Установить Название фигуры.
void Z::SetName() { m_shapeName = "Z"; }

// Установить геометрию фигуры.
void Z::SetGeometry()
{
	/*
		1 1 0 0
		0 1 1 0
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
				i == 1 && j == 1 ||
				i == 1 && j == 2
				)
				m_shapeGeometry[i][j] = 1;
		}
	}
}