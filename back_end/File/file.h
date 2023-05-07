#ifndef FILE_H
#define FILE_H
#include <string>
using namespace std;

struct file
{
    string name;
    string fileType;
    unsigned long length;


};


#endif


//converts mp4 files into a text file, parses that file into vector of strings, and prints those strings

//can pull a collection of files