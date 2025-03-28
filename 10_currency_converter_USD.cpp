//cURRENCY CONVERTER TO usd

#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

// Function that does calculations
void calculator() {

    int option = 0;
    int dimension = 6;
    float amount = 0;
    float result = 0;
    bool correct1 = false;
    bool correct2 = false;

    cout << "Currency Converter to USD" << endl;

    // Currency names
    string name[dimension] = {"Mexican Peso (MXN)", "Brazilian Real (BRL)", "Argentine Peso (ARS)", "Sol (PEN)", "Colombian Peso (COP)", "Bolivar (VES)"};

    // Conversion factor in the same order: E.g 1 MXN = 0.058 USD
    float factor[dimension] = {0.052, 0.179, 0.001, 0.27, 0.00024, 0.026};

    // Program body
    cout << "Options: " << endl;
    for (int i = 0; i < dimension; i++){
        cout << i + 1 << ". " << name[i] << endl;
    }
    cout << endl;

    // Ask for option
    cout << "Option: ";
    cin >> option;
    cout << endl;

    // Verify that the entered option exists
    while (correct1 == false) {

        if (option < 1 || option > dimension) {
            cout << "Invalid option. Try again: ";
            cin >> option;
        } 
        else {
            correct1 = true;
        }
    }

    // Ask for amount
    cout << "Amount: ";
    cin >> amount;

    // Verify that the amount is valid
    while (correct2 == false) {

        if (amount < 0) {
            cout << "Invalid amount. Try again: ";
            cin >> amount;
        } 
        else {
            result = amount * factor[option - 1];
            cout << "Exchange: " << result << " USD" << endl;
            correct2 = true;
        }
    }
}

int main() {

    char desire;
    bool end = false;

    while (end == false) {

        // Call function to do calculation
        calculator();

        // Ask if user wants to calculate again
        cout << "\nCalculate again?" << "\na. Yes" << "\nb. No\n-->";
        cin >> desire;

        // Verify whether the calculation should be repeated
        while (desire != 'a' && desire != 'A' && desire != 'b' && desire != 'B') {
            cout << "Invalid option. Try again: ";
            cin >> desire;
        }

        if (desire == 'b' || desire == 'B') {
            cout << "\nThank you!" << endl;
            end = true;
        }
        system("cls");
    }

    return 0;
}
