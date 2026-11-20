#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    float totalCredits = 0;
    float totalPoints = 0;

    cout << "===== CGPA CALCULATOR =====" << endl;

    cout << "Enter number of subjects: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of subjects!" << endl;
        return 0;
    }

    string name;
    float credits, gradePoint;

    for (int i = 1; i <= n; i++) {
        cout << "\nSubject " << i << endl;

        cout << "Enter subject name: ";
        cin >> name;

        cout << "Enter credit hours: ";
        cin >> credits;

        cout << "Enter grade point: ";
        cin >> gradePoint;

        if (credits <= 0 || gradePoint < 0) {
            cout << "Invalid credits or grade point!" << endl;
            return 0;
        }

        totalCredits += credits;
        totalPoints += credits * gradePoint;
    }

    float sgpa = totalPoints / totalCredits;

    cout << "\n===== RESULT =====" << endl;
    cout << fixed << setprecision(2);

    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalPoints << endl;
    cout << "Your SGPA is: " << sgpa << endl;

    return 0;
}
