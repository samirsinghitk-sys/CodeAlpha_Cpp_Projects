#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password;
    cout << "\n--- Register ---" << endl;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username.empty() || password.empty()) {
        cout << "Username and password cannot be empty!" << endl;
        return;
    }

    ifstream checkFile("users.txt");
    string existingUser, existingPass;
    while (checkFile >> existingUser >> existingPass) {
        if (existingUser == username) {
            cout << "Username already exists! Try another one." << endl;
            return;
        }
    }
    checkFile.close();

    ofstream outFile("users.txt", ios::app);
    if (!outFile) {
        cout << "Error opening users.txt for writing!" << endl;
        return;
    }

    outFile << username << " " << password << endl;
    outFile.close();
    cout << "Registration successful!" << endl;
}

void loginUser() {
    string username, password;
    cout << "\n--- Login ---" << endl;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream inFile("users.txt");
    if (!inFile) {
        cout << "No users found. Please register first!" << endl;
        return;
    }

    string storedUser, storedPass;
    bool found = false;
    while (inFile >> storedUser >> storedPass) {
        if (storedUser == username && storedPass == password) {
            found = true;
            break;
        }
    }
    inFile.close();

    if (found) {
        cout << "Login successful! Welcome, " << username << "." << endl;
    } else {
        cout << "Invalid username or password!" << endl;
    }
}

int main() {
    int choice;

    cout << "===== LOGIN SYSTEM =====" << endl;

    while (true) {
        cout << "\n1. Register\n2. Login\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input! Please enter a number." << endl;
            return 0;
        }

        if (choice == 1) {
            registerUser();
        } else if (choice == 2) {
            loginUser();
        } else if (choice == 3) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice! Please select 1, 2, or 3." << endl;
        }
    }

    return 0;
}
