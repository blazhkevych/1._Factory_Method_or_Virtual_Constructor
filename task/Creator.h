#pragma once
#include "Figure.h"

// создатель объявляет фабричный метод, возвращающий объект типа Product.
class Creator abstract
{
public:
	virtual Figure* FactoryMethod() = 0;
};