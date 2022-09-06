#include "Creator_S.h"
#include "S.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_S::FactoryMethod()
{
	Figure* figure = new S();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}