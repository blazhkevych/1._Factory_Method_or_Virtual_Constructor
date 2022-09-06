#include "Creator_I.h"
#include "I.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_I::FactoryMethod()
{
	Figure* figure = new I();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}