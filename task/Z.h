#pragma once
#include "Figure.h"

// Конкретный продукт реализует интерфейс Product (в нашем случае, Z)
class Z :
	public Figure
{
	void SetName() override;			// Установить Название фигуры.
	void SetGeometry() override;		// Установить геометрию фигуры.
};