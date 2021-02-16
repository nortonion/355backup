#include <iostream>
#include <ctype.h> //http://www.cplusplus.com/reference/cctype/toupper/
#include <string> //http://www.cplusplus.com/reference/string/string/length/
#include <fstream>
using namespace std;

int main(){
   //Last Update: 2/11 @ 13:00 pm: The maximum length of the password is 15
   //Assume that the user is perfect except may type a password of more than 15 characters.
   string pwd;
   cout << "Please enter in a password. Your password cannot be more than 15 characters." << endl;
   cin >> pwd;
   if (pwd.length() > 15){
      cout << "boohoo you didn't follow instructions. Exiting..." << endl;
      return -1;
   }
   ofstream output("HW3-Q1-output.txt");
   for(int i = 0; i<pwd.length(); i++){
      char c = pwd[i];
      if(c == 'z'){
         c = 'A';
      }
      else if (c == 'Z'){
         c = 'a';
      }
      else{//https://jbwyatt.com/ascii.html Used ASCII table to get ranges of lowercase and uppercase letters
         c++;
         if(c >= 65 && c<=90){//uppercase to lowercase
            c= tolower(c);
         }
         else{
            c = toupper(c);
         }
      }
      output << c;
   }
   //cout << pwd[1] << endl;
   //char test = pwd[1];
   //cout << test << endl;
   output.close();
}
