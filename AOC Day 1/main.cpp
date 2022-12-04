#include <iostream>
#include <cmath>
#include <fstream> 
using namespace std;

//upload .txt file into code, unsure of how to do so
int main() {
  ifstream myFile("puzzleinput.txt");
  string data;
  int calories;
  int total;
  int highest = 0;
  while (getline(myFile, data)){
    if (data != ""){
      calories = stoi(data);
      total += calories;
      
      }
    else {
      cout << total << "," << highest << endl;
      if (total > highest){
        highest = total;
      }
      //cout << highest << endl;
      total = 0;
    }
      
  }
  
  return 0;
  }
