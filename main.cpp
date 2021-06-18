
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
