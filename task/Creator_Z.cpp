#include "Creator_Z.h"
#include "Z.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_Z::FactoryMethod()
{
	Figure* figure = new Z();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}