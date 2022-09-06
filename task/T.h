#pragma once
#include "Figure.h"

// Конкретный продукт реализует интерфейс Product (в нашем случае, T)
class T :
	public Figure
{
	void SetName() override;			// Установить Название фигуры.
	void SetGeometry() override;		// Установить геометрию фигуры.
};