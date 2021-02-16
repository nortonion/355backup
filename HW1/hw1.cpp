#include <iostream>
#include <fstream> //file input output
#include <string> //for stoi
#include <algorithm> //for sorting
using namespace std;
// https://stackoverflow.com/questions/10026150/what-c-norme-im-currently-using
// I need to use C++11 for stoi to work so we have to use -std=c++0x flag for g++
// https://en.cppreference.com/w/cpp/string/basic_string/stol
// http://www.cplusplus.com/reference/algorithm/sort/


int main() {
   /* Assume that the user enters in 200 valid heights (i.e. no negative
   or 0 heights, no all the same heights, no infinity or NaN heights, etc.
   */
   string heights;
   ifstream tcase("testcase.txt"); //read in 200 heights file
   string h[200]; int tall[200]; int n = 0;
   while(tcase >> heights){ //reads file
      //cout << heights;
      h[n] = heights; n++;
   }
   tcase.close();
   for(int i = 0; i < 200; i++){
      tall[i] = stoi(h[i]);
      //cout << tall[i] << endl;
   }
   sort(tall,tall+200);
   /* //debugging purposes
   for(int j = 0; j < 200; j++){
      cout << tall[j] << endl;
   }*/
   int realh[200];//create new array to make ascending&descending order
   for(int k=1; k<200;k++){
      realh[k-1] = tall[k];
   }
   realh[199] = tall[0];//brings the first element as the last element of array
   for(int j = 0; j < 200; j++){
      cout << realh[j] << endl;
   }
   
   /* Sample code from module 0.1 for reference
   cout << "Enter an integer between 1-7 (1=Sun. to 7=Sat.)" << endl;

   // Receive the number between 1-7 and if the corresponding day is
   //  a "weekday" or "weekend" output that single word.  Output nothing
   //  if the user outputs a number outside the range 1-7.
   
   */
  









   return 0;
}
