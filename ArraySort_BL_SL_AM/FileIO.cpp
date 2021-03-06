/*
Branden Lee, Stephen Lee, and Alex Morfin
CIS 22C
Fall 2017
Lab 4

Used Microsoft Visual Studio 2017

FileIO class
contains file writing methods.
*/

#include "FileIO.h"
/* Writes a string to a file with group information headers
@pre None
@post Creates or overwrites file to filePath with content str
@param str contents of file
@param filePath file to write to
@return true on success and false on failure
*/
bool FileIO::strToFile (std::string str, std::string filePath)
{
	bool flag = false;
	std::ofstream myFile;
	myFile.open (filePath);
	myFile << "Branden Lee, Stephen Lee, and Alex Morfin" << std::endl;
	myFile << "CIS 22C" << std::endl;
	myFile << "Fall 2017" << std::endl;
	myFile << "Lab 4" << std::endl;
	if (myFile)
	{
		myFile << str;
		myFile.close ();
	}
	return flag;
}