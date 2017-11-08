#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;


Celsius::Celsius(float value) : m_value(value)
{
}

Celsius::~Celsius()
{
}


Celsius::operator Fahrenheit() const
{
	
	//f = c * 9/5 + 32;
	return (float)(this->getCelsius() * (9 / 5)) + 32;
}

float Celsius::getCelsius() const
{
	return this->m_value;
}




