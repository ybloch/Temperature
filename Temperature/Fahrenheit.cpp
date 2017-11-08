#include "Fahrenheit.h"
#include "Celsius.h"

using namespace std;

Fahrenheit::Fahrenheit(float value) : m_value(value)
{
}

Fahrenheit::~Fahrenheit()
{
}

Fahrenheit::operator Celsius() const
{
	//c = (fahrenheit - 32.0) * 5.0 / 9.0;
	return (float)(this->getFahrenheit() - 32.0) * 5.0 / 9.0;
}

float Fahrenheit::getFahrenheit() const
{
	return this->m_value;
}


