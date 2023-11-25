#include <iostream>
#include <string>

using namespace std;


int main()
{
        int NumberOfGrades;

        cout << "Enter your amount of grates: ";
        cin >> NumberOfGrades;

        string *Grades = new string[NumberOfGrades];
        float sum = 0;

    for(int i = 0; i < NumberOfGrades; i++) {
        cout << "Enter your grades: ";
        cin >> Grades[i];
    }
    
    for(int i = 0; i < NumberOfGrades; i++) {
        if(Grades[i] == "A") {
            sum += 4;
        }
        else if (Grades[i] == "B") {
            sum += 3;
        }
        else if (Grades[i] == "C") {
            sum += 2;
        }
        else if (Grades[i] == "D") {
            sum += 1;
        }
        else if (Grades[i] == "F") {
            sum += 0;
        }
        else {
            cout << "Invalid Grade: " << Grades[i] << endl;
        }
        


    }

    float GPA = sum / NumberOfGrades;
    cout << "Your GPA is " << GPA << endl;
}