#pragma once
#include "Figure.h"

// Конкретный продукт реализует интерфейс Product (в нашем случае, I)
class I :
	public Figure
{
	void SetName() override;			// Установить Название фигуры.
	void SetGeometry() override;		// Установить геометрию фигуры.
};