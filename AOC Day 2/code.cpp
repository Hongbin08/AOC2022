#include <iostream>
#include <cmath>
#include <fstream> 

using namespace std;

int main() {
  
  ifstream myFile("puzzleinput.txt");
  
  int totalScore = 0;
  
  string input;
  
  while (getline(myFile, input)){
   
    if (input [2] == 'X') 
      totalScore += 1;
    
    else if (input [2] == 'Y') 
      totalScore += 2;
   
    else 
      totalScore += 3;  
   
    if (input == "A X" || input == "B Y" || input == "C Z")
      totalScore += 3;
    
    else if (input == "C X" || input == "A Y" || input == "B Z")
      totalScore += 6;
   
    else 
      
      totalScore += 0;
  }
  
  cout << totalScore;
  
  return 0;
}
  
  
