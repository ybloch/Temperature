#pragma once
class Celsius;

//  Yinon Bloch
// This class represent Fahrenheit degries

#include <iostream>
#include <string>
#include <sstream>



using namespace std;


class  Fahrenheit
{
public:
	/*
	c-tor init Fahrenheit
	*/
	Fahrenheit(float value);
	/*
	d-tor delete Fahrenheit
	*/
	~Fahrenheit();

	/*
	cast from Celsius to Fahrenheit
	*/
	operator Celsius() const;

	float getFahrenheit() const;
	//	friend ostream& operator<<(ostream& os, const Fahrenheit& dt);

private:

	float m_value;
};


