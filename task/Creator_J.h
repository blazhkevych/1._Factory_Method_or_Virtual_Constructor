﻿#pragma once
#include "Creator.h"
#include "Figure.h"

// конкретный создатель переопределяет фабричный метод, возвращающий объект ConcreteProduct.
class Creator_J :
	public Creator
{
public:
	// Создаем новую фигуру конкретного типа.
	Figure* FactoryMethod() override;
};