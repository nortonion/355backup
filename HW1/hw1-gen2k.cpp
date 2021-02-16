#include <fstream>
#include <iostream>
#include <stdlib.h> 
using namespace std;

int main() {
   /* Assume that the user enters in 200 valid heights (i.e. no negative
   or 0 heights, no all the same heights, no infinity or NaN heights, etc.
   */
   // We put the 200 heights into a file named testcase.txt
   ofstream tcase("testcase.txt");
   for (int i = 0; i < 200; i++){
      tcase << (rand() % 100 + 1);//no height of 0 so +1 so range is 1-101 inclusive
      //used rand function 
      // https://www.cplusplus.com/reference/cstdlib/rand/
      tcase << " ";//space out the numbers
   }
   tcase.close();
   /* Sample code from module 0.1 for reference
   cout << "Enter an integer between 1-7 (1=Sun. to 7=Sat.)" << endl;

   // Receive the number between 1-7 and if the corresponding day is
   //  a "weekday" or "weekend" output that single word.  Output nothing
   //  if the user outputs a number outside the range 1-7.
   
   */
  









   return 0;
}
