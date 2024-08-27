#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    string names[NUM_EMPLOYEES];
    int salaries[NUM_EMPLOYEES][3];
    double totalSalary[NUM_EMPLOYEES] = {0};
    double averageSalary = 0;

    // Input employee names and salaries for 3 months
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        getline(cin, names[i]);
        cout << "Enter salary for 3 months for employee " << i + 1 << ":\n";
        for (int j = 0; j < 3; ++j) {
            cout << "Month " << j + 1 << ": ";
            cin >> salaries[i][j];
            totalSalary[i] += salaries[i][j];
        }
        cin.ignore(); // Clear newline character from input buffer
    }

    // Calculate average salary
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        averageSalary += totalSalary[i];
    }
    averageSalary /= NUM_EMPLOYEES;

    // Display total salary for each employee and average salary
    cout << "\nTotal salary of each employee:\n";
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Employee " << names[i] << ": " << totalSalary[i] << endl;
    }
    cout << "\nAverage salary of all employees: " << averageSalary << endl;

    return 0;
}
