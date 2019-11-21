#include "left.h"
#include <cstring>
#include <sstream> //

Left::Left()
{
	command = new char[strlen("Left 20")+1];
	strcpy(command, "Left 20");
}

Left::Left(int _value)
{
	std::stringstream sstream;
	sstream<<"Left "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Left::get_delay()
{ 
	return 3; 
}