
#include <iostream>     // std::cout
#include <string.h>		// std::string
#include <fstream>      // std::ifstream
#include "MD5.h"
 
using std::cout; using std::endl; //Some namespaces
 
 /*
// First Example
int main(int argc, char *argv[])
{
	//If there are no arguments then do the MD5 of this string
	std::string Temp =  md5("The quick brown fox jumps over the lazy dog");
	cout << Temp.c_str() << endl;

	return 0;
}
*/


// Second Example

int main(int argc, char *argv[])
{
    //Start opening your file
    std::ifstream inBigArrayfile;
    inBigArrayfile.open ("Data.dat", std::ios::binary | std::ios::in);

    //Find length of file
    inBigArrayfile.seekg (0, std::ios::end);
    long Length = inBigArrayfile.tellg();
    inBigArrayfile.seekg (0, std::ios::beg);    

    //read in the data from your file
    char * InFileData = new char[Length];
    inBigArrayfile.read(InFileData,Length);

    //Calculate MD5 hash
    std::string Temp =  md5(InFileData,Length);
    cout << Temp.c_str() << endl;

    //Clean up
    delete [] InFileData;

    return 0;
}
