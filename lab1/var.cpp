#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
   /*Assume that the user is smart enough not to try to break the code.
   In this lab we assume that the user enters the information in  the correct format:
   Count will be a non-negative integer (oops! here is a corner case, what about zero?) value
   Numbers for variance calculation will be all integers, and they fit in the acceptable range of int values   
   (int has a range, check it out online if you are interested!)*/
   //http://www.cplusplus.com/reference/iomanip/setprecision/ allows for precision like shown in BB
   
   int n; int sum=0; int s=0;
   cout << "Hello! Please enter the number of integers: ";
   cin >> n;
   int arr[n];
   //cout << n << endl;
   if(n == 0){//if user says 0 numbers as mentioned in lab1 on BB.
      cout << "Variance is undefined" << endl;
      return -1;//finishes program without running any further code
   }
   for(int i = 0; i<n; i++){
      int u;
      cout << "Please enter integer #" << i+1 << ": ";
      cin >> u;
      //cout << endl;
      arr[i] = u;
      sum+=u;
      //cout << arr[i] << endl;
   }
   int avg = sum/n;
   for(int j = 0; j<n; j++){
      arr[j]-=avg;
      arr[j] = arr[j] * arr[j];
      s+=arr[j];
   }
   //I didn't include setprecision b/c I looked at BB and it wasnt necessary.
   cout << "The variance of these " << n << " numbers is: " << (float) s/n << endl;
   
   return 0;
}
