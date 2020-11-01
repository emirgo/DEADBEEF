#pragma once
#include <string>
#include <fstream>

class DataLogger
{
public:
	DataLogger();
	DataLogger(std::string newLogFileName);

	void log(std::string input);
private:
	std::string logFileName = "logs";
};

