#include "Log.h"

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void Log(int number)
{
	std::cout << number << std::endl;
}

void Log(const char* message, int number)
{
	std::cout << message << number << std::endl;
}

void LogFloat(float number)
{
	std::cout << number << std::endl;
}
