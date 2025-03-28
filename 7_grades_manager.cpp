// The program collects students' grades and sorts them from highest to lowest

#include <iostream>
#include <string>
using namespace std;

struct student_info
{
    string name;
    int grade;
};

int main(){

    int n = 6;
    student_info students[n];
    bool continue_sorting = true;

    // Enter student information
    for(int i = 0; i < n; i++){

        cout << "Student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Grade: ";
        cin >> students[i].grade;

        while(students[i].grade < 0 || students[i].grade > 100){
            cout << "Grade must be between 0 and 100: ";
            cin >> students[i].grade;
        }
        cout << endl;
    }

    // Sorting
    while(continue_sorting == true){

        continue_sorting = false;
        for(int o = 0; o < n - 1; o++){

            if(students[o].grade < students[o + 1].grade){
                continue_sorting = true;
                // Swap grades
                int temp = students[o].grade;
                students[o].grade = students[o + 1].grade;
                students[o + 1].grade = temp;

                // Swap names
                string temp2 = students[o].name;
                students[o].name = students[o + 1].name;
                students[o + 1].name = temp2;            
            }

        }
    }

    // Print students
    cout << "Grade List" << endl;
    for(int y = 0; y < n; y++){
        cout << students[y].name << ": " << students[y].grade << endl;
    }

    return 0;
}
