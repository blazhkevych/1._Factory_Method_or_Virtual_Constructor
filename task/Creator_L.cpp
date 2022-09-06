#include "Creator_L.h"
#include "L.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_L::FactoryMethod()
{
	Figure* figure = new L();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}