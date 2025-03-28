//Operations with pointers

#include <iostream>
using namespace std;

int main() {
    char wish;
    int n1, n2, result;

    // Pointers
    char *wish_pointer = &wish;
    int *n1_pointer = &n1;
    int *n2_pointer = &n2;
    int *result_pointer = &result;


    // Body
    cout << "Operation\nAddition (a)\nMultiplication (m)\n-->";
    cin >> *wish_pointer;

    // Check if the option is valid
    while (*wish_pointer != 'a' && *wish_pointer != 'A' && *wish_pointer != 'm' && *wish_pointer != 'M') {
        cout << "Invalid option. Please enter 'a' or 'm': ";
        cin >> *wish_pointer;
    }

    cout << endl;
    
    cout << "Number 1: ";
    cin >> *n1_pointer;

    cout << "Number 2: ";
    cin >> *n2_pointer;

    // Operation
    if (*wish_pointer == 'a' || *wish_pointer == 'A') {
        *result_pointer = *n1_pointer + *n2_pointer;
    } else {
        *result_pointer = *n1_pointer * *n2_pointer;
    }

    // Print result
    cout << "RESULT: " << *result_pointer << endl;

    return 0;
}
