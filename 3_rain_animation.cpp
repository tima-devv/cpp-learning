//Simulates rain animation ('\')

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    char rain[15][15]; 

    srand((unsigned) time(NULL));

    while (true) {

       for (int x = 14; x >= 0; x--) {

            if (x == 0) {
                
                for (int y = 0; y < 15; y++) {
                    int drop = (rand() % 10);
                    if (drop <= 3) {
                        rain[x][y] = '\\';
                    } else {
                        rain[x][y] = ' ';
                    }
                }
            } else {
                for (int y = 0; y < 15; y++) {
                    rain[x][y] = rain[x - 1][y];
                }
            }
        }

        for (int x = 0; x < 15; x++) {
            for (int y = 0; y < 15; y++) {
                cout << rain[x][y] << " ";
            }
            cout << endl;
        }
    }

    cout.flush();
    Sleep(500);
    system("cls");

    return 0;
}
