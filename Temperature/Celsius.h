#pragma once

class Fahrenheit;
//  Yinon Bloch
// This class represent Celsius degries

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class  Celsius
{
public:
	/*
	c-tor init Celsius
	*/
	Celsius(float value);
	/*
	d-tor delete Celsius
	*/
	~Celsius();
	
	/*
	cast from Fahrenhiet to Celsius
	*/
	operator Fahrenheit() const;

	float getCelsius() const;

	//friend ostream& operator<<(ostream& os, const Celsius& dt);

private:

	float m_value;
};


