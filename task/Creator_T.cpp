#include "Creator_T.h"
#include "T.h"

// Создаем новую фигуру конкретного типа.
Figure* Creator_T::FactoryMethod()
{
	Figure* figure = new T();
	figure->SetColor();
	figure->SetGeometry();
	figure->SetName();
	return figure;
}