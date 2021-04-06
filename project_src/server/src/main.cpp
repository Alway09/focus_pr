#include "udecoder/dummy.h"
#include <iostream>

int main()
{
	std::cout << "85496736897 + 94583068 = "
		<< udecoder::sum("85496736897", "94583068")
		<< std::endl;
	return 0;
}
