//Make a timer, it should start at 10, the program should count down until it reaches 0:00

#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    for(int min = 10; min >= 0; min -= 1){
        for(int sec = 90; sec >= 0; sec -= 10){

            cout << min << ":" << sec;
            Sleep(1000);
            system("cls");

        }
    }

    return 0;
}
