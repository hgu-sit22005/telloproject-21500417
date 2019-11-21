#include "forward.h"
#include <cstring>
#include <sstream> //

Forward::Forward()
{
	command = new char[strlen("Forward 20")+1];
	strcpy(command, "Forward 20");
}

Forward::Forward(int _value)
{
	std::stringstream sstream;
	sstream<<"Forward "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Forward::get_delay()
{ 
	return 5; 
}