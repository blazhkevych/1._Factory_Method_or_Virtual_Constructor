#include "Creator_Q.h"
#include "Q.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_Q::FactoryMethod()
{
	Figure* figure = new Q();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}