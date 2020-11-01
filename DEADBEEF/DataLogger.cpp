#include "DataLogger.h"
// construct
DataLogger::DataLogger() :
	logFileName{logFileName+".txt"}
{
	// yipikayey other buckets!
}

// construct with new log file name
DataLogger::DataLogger(std::string newLogFileName):
	logFileName{newLogFileName + ".txt"}
{
	// yipikayey another buckets!
}

// Log data to local text file "logs" by default
void DataLogger::log(std::string input)
{
	std::fstream logFile;
	logFile.open(logFileName, std::fstream::app);
	if (logFile.is_open())
	{
		logFile << input;
		logFile.close();
	}
}
