#include "Celsius.h"
#include "Fahrenheit.h"


const size_t ACTION_EXIT = 0;
const size_t ACTION_ADD_CELSIUS = 1;
const size_t ACTION_ADD_FAHRENHIET = 2;
const size_t PRINT = 3;

ostream& operator<<(ostream& os, const Celsius& c)
{
	os << "Celsuis value: " << c.getCelsius();
	Fahrenheit f = (Fahrenheit)c;
	os << "\nFahrenheit value: " << f.getFahrenheit() << endl;
	// Water boiling point 100 °C
	// Water freezing point 0 °C
	// Absolute zero -273.15 °C
	os << "Water boiling point 100 C" << endl;
	os << "Water freezing point 0 C" << endl;
	os << "Absolute zero -273.15 C" << endl;
	
	return os;
}

ostream& operator<<(ostream& os, const Fahrenheit& f)
{
	os << "Fahrenheit value: " << f.getFahrenheit() << endl;
	Celsius c = (Celsius)f;
	os << "Celsuis value: " << c.getCelsius() << endl;
	// Water boiling point 212°F
	// Water freezing point 32 °F
	// Absolute zero -459.67 °F
	os << "Water boiling point 212 F" << endl;
	os << "Water freezing point 32 F" << endl;
	os << "Absolute zero -459.67 F" << endl;
	

	return os;
}


void printMenu()
{
	cout << "enter action:\n"
		<< "1 - ACTION ADD CELSIUS\n"
		<< "2 - ACTION ADD FAHRENHIET\n"
		<< "3 - PRINT\n"
		<< "0 - exit\n";
}



void main(void)
{
	int userAction = ACTION_ADD_CELSIUS;
	float c_degree = 0;
	float f_degree = 0;

	try
	{
		while (ACTION_EXIT != userAction)
		{
			printMenu();
			cin >> userAction;

			switch (userAction)
			{
				case ACTION_ADD_CELSIUS:
					{
						cout << "enter celsius degree:\n";
						cin >> c_degree;
						Celsius c(c_degree);
						cout << c << endl;

						break;
					}
				case ACTION_ADD_FAHRENHIET:
					{
						cout << "enter fahrenheit degree:\n";
						cin >> f_degree;
						Fahrenheit f(f_degree);
						cout << f << endl;
						break;
					}

				case ACTION_EXIT:
					{
						cout << "bay bay...";
						break;
					}
				default:
					break;
			}
		}

	}
	catch (const std::exception& exp)
	{
		cout << exp.what() << endl;
		system("pause");
	}
}