#include <stdio.h>
#include <iostream>
#include "URLify.cpp"
using namespace std;
//declare function below
void URLify(char* arr, int length);

int main(){
   int length = 13;
   char arr[] = "EE355 USC ECE    ";
   URLify(arr, length);
   cout << arr << endl;
}
