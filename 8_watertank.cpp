//Fills water tank using color

#include <iostream>
#include <windows.h>
using namespace std;

// Function to set text color
int col(int a)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute(h, a);
}

int main(){

    int water_level; //Water level!
    bool leave = false;

    while(leave == false){

        // Request water level
        cout << "Enter water level in the tank (between 1 and 10): ";
        cin >> water_level;
        
        while((water_level > 10 || water_level < 0) && water_level != -1){
            cout << "Invalid level: ";
            cin >> water_level;
        }

        if(water_level == -1){
            leave = true;
        }
        else{
            // Draw tank
            Sleep(500);
            system("cls");
            
            for(int f = 10; f >= 0; f-- ){
                for(int c = 1; c <= 5; c++){

                    if(c == 1 || c == 5){
                        col(7); // Prints the tank in white
                        cout << "|";
                    }
                    else if(water_level == 0){ // If user indicates 0
                        cout << "     ";
                    }

                    // Insert drops in the tank
                    else{  
                        if(f < water_level){

                            col(1); // Prints drops in blue
                            cout << "*****";

                        }
                        else{
                            cout << "     ";
                        }
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}
