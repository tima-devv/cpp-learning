// Write a number
// The program should print a V of the size of the number

#include<iostream>
using namespace std;


int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    // r refers to rows and c refers to columns

    for(int r = num; r >= 1; r--){ 

        // Handle asterisks on the left
        for(int c1 = num; c1 >= 1; c1--){

            if(c1 == r){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }

        // Handle asterisks on the right
        for(int c2 = 1; c2 <= num; c2++){

            if((c2 == r - 1)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    
        cout << endl;
    }

    return 0;
}
