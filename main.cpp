#include <iostream>
#include <fstream>

using namespace std;


int main() {
 // load input file 
  ifstream inFile; // declare stream variable
  inFile.open("NumberData1.txt");
// declared variables 
  int dataTemp;
  int sumData = 0;
  int counter = 0;
  // load all data in a while loop
  while (inFile >> dataTemp)
    {
     // cout << dataTemp << endl;

      //check to see if the data is valid 
      if (dataTemp >= 0)
      {
        // update cumulative value of all data and number of data points loaded 
        sumData = sumData + dataTemp;
        counter++;
      }
      else // the value is negitive and we should exit
      {
        cout << "Negitive value encounted of " << dataTemp << "." << endl;
        cout << "Will not use rest of the data..." << endl;
        break;
      }
    }
  cout<< "The sum of the valid data is: "<< sumData<< endl;
  cout << "The number of valid data points is: "<< counter<< endl;
  cout << "The average of the valid data is: "<< (static_cast<double>(sumData)/counter)<< endl;
}