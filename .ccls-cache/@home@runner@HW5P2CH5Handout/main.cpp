#include <iostream>
#include <fstream>

using namespace std;


int main() {
 // load input file 
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");
// declared variables 
  int dataTemp;
  // load all data in a while loop
  while (!inFile.eof())
    {
      inFile >> dataTemp;
      cout << dataTemp << endl;
      
    }
}