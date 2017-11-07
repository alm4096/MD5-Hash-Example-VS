
#include <iostream>     // std::cout
#include <string.h>		// std::string
#include "MD5.h"
 
using std::cout; using std::endl; //Some namespaces
 
int main(int argc, char *argv[])
{
	//If there are no arguments then do the MD5 of this string
	std::string Temp =  md5("The quick brown fox jumps over the lazy dog");
	cout << Temp.c_str() << endl;

	return 0;
}