/******************************************************************************

Create a Dockerfile that builds into a docker container, which prints the contents of each field, from a given CSV file.

The CSV file contains a table of words, with an unspecified number of rows and columns.

Each field in the CSV may contain a String or Nothing (i.e. some value, or blank)

The Number of columns and Rows of the Table in the CSV file could change if we feed it a different input file.

*************************************************************************/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
  

int main()
{
  char c;
cout << "hello world";

  ifstream file;
  file.open("example.csv", ios::in);

if (file.eof()){
  cout << "You're at the end of the file";
}
else {
  while (file.get(c)){
    if (c != ',')
    cout << c;
    else 
    cout <<endl;
  }
}
 // container c1();
  //c1(file);
  file.close();
  return 0;
}
