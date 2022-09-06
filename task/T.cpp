#include "T.h"

// Установить Название фигуры.
void T::SetName() { m_shapeName = "T"; }

// Установить геометрию фигуры.
void T::SetGeometry()
{
	/*
		1 1 1 0
		0 1 0 0
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
				i == 0 && j == 2 ||
				i == 1 && j == 1
				)
				m_shapeGeometry[i][j] = 1;
		}
	}
}