#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define BUFFER_SIZE 300
#define BOOHOO 96

bool method1(char str []){
    // Brute force approach to solve the isUnique problem
    // Time complexity: O(n^2)
    // Space complexity: O(1), not using extra data structure! 
    // Completed for you! 
    for (int i=0; i<strlen(str); i++)
        for (int j=i+1; j<strlen(str); j++)
            if (str[i] == str[j])
                return false;
    return true;
}


bool method2(char str[]){
    // You can use extra data structures
    // The computational complexity should be O(N)
    // TODO: write down your code here!
    //We assume that the characters in this question have ASCII codes in range [32, 126].
    
    // cstring cannot be larger than 95!
    int i = 0; int j =0;
    while(str[i] != '\0'){
      j++;
    }
    if (j > BOOHOO){return false;}
    bool charac[BOOHOO] = { 0 };
    for (int k = 0; i < j; k++){
        if (charac[int(str[k])] == true){
            return false;
        }
        charac[int(str[k])] = true;
    }
    return true;
}


int main(int argc, char* argv[]){
    
    // checking the number of arguments: 
    if (argc != 4){
        cout << "Oops! Arguments are not correct!\n";
        return 0;
    }

    // the input methods should be either 1 or 2
    // note: understand why we avoided using argv[3][0]=='1'
    //  ... because "2" would be the same as "23fsdf" which is wrong!
    if ( (strcmp(argv[3], "1")==0) || (strcmp(argv[3], "2")==0) ){

        // create a buffer to store the lines read from file
        char buffer [BUFFER_SIZE]; // no hard coding, we used define! 

        // opening the input file
        ifstream infile;
        infile.open(argv[1]);
        // Check if the file is available
        if (!infile.good()){
            cout << "Oops! File is not found!" << endl;
            return 0;
        }
        
        // opening the output file
        ofstream outfile;
        outfile.open(argv[2]);

        while ( infile.getline(buffer, 300, '\n')  ){
            // TODO:
            cout << "Which method to use: 1 or 2?" << endl;
            // condition based on what method is selected!
            if (strcmp(argv[3], "1")==0){
               method1(buffer);
            }
            else if(strcmp(argv[3], "2")==0){
               method2(buffer);
            }
            //outfile << "needs to be completed\n"; // delete this line later! 
        }
    }

    else 
       cout << "Oops! Method is not covered!\n";

    return 0;
}

