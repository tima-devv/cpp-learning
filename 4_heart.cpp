//Prints a heart based on the size entered by the user.  
#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    int heartSize;
    int division;
    int spaces;

    cout << "Heart size: ";
    cin >> heartSize;

    while(heartSize != -1){

        division = heartSize / 3;
        spaces = heartSize - division;

        cout << endl;

        // Upper part of the heart
        for (int x = division; x < heartSize; x++) {

            for (int y = 0; y < spaces; y++) {
                cout << "  ";
            }
            for (int a = 0; a < x * 2; a++) {
                cout << "* ";
            }
            for (int s = 0; s < spaces * 2; s++) {
                cout << "  ";
            }
            for (int w = 0; w < x * 2; w++) {
                cout << "* ";
            }
            spaces--;
            cout << endl;
        }
            
        spaces = heartSize * 2;

        // Lower part of the heart
        for (int i = 0; i < heartSize * 2; i++){

            for (int x = 0; x < i; x++) {
                cout << "  ";
            }
            for (int k = 0; k < spaces * 2; k++) {
                cout << "* ";
            }
            spaces--;
            cout << endl;
        }

        cout << endl << "Size - New Heart (press -1 to exit)" << endl;
        cin >> heartSize;

    }

    return 0;
}

