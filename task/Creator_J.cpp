#include "Creator_J.h"
#include "J.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_J::FactoryMethod()
{
	Figure* figure = new J();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}