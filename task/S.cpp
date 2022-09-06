#include "S.h"

// Установить Название фигуры.
void S::SetName() { m_shapeName = "S"; }

// Установить геометрию фигуры.
void S::SetGeometry()
{
	/*
		0 1 1 0
		1 1 0 0
		0 0 0 0
		0 0 0 0
	*/

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (
				i == 0 && j == 1 ||
				i == 0 && j == 2 ||
				i == 1 && j == 0 ||
				i == 1 && j == 1
				)
				m_shapeGeometry[i][j] = 1;
		}
	}
}