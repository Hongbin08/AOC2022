#include <iostream>
#include <cmath>
#include <fstream> 
using namespace std;

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
