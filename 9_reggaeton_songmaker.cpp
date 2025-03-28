// Creates reggaeton song lyrics!

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int random;
    string lyric = "";

    string partes[5][3] = {

        {"Mami ", "Gata ", "Chica "}, 
        {"yo quiero ", "vamo a ", "vengo a "}, 
        {"encenderte ", "transportarte ", "activarte "},
        {"lapido ", "lento ", "fuelte "}, 
        {"hasta que salga el sol ", "toda la noche ", "hasta manana "}
        
        };

    srand((unsigned) time(NULL));

        for(int y = 0; y <= 4; y++){

            for(int x = 0; x <= 4; x++){
                random = (rand() % 3);

                lyric = lyric + partes[x][random];

            }
            cout << lyric << endl << endl;
            lyric = "";
        }



    return 0;

}
