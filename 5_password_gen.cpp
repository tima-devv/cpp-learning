// Password generator 

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    char password[8] = {'_','_','_','_','_','_','_','_'};

    char character_map[4][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'a', 'b', 'c', 'd', 'e'},
        {'1', '2', '3', '4', '5'},
        {'@', '&', '*', '#', '$'}
    };

    srand((unsigned) time(NULL));
    
    for(int x = 0; x < 4; x++){
        int z = 0;
        while(z < 2){

            int pos = rand() % 8; 
            int rand_y = rand() % 4;
            if(password[pos] == '_'){
                password[pos] = character_map[x][rand_y];
                z++;
            }
        }
    }
    cout << endl;

    for(int x = 0; x < 8; x++){
        cout << password[x];
    }

    return 0;
}
