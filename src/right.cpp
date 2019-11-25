#include "right.h"
#include <cstring>
#include <sstream> //

Right::Right()
{
	command = new char[strlen("Right 20")+1];
	strcpy(command, "Right 20");
}

Right::Right(int _value)
{
	std::stringstream sstream;
	sstream<<"Right "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Right::get_delay()
{ 
	return 3; 
}