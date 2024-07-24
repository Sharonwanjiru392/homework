#include <iostream>
#include <string>
using namespace std;

// Function to calculate grade based on average score
char calculateGrade(double average) {
    if (average < 40) return 'E';
    else if (average < 50) return 'D';
    else if (average < 60) return 'C';
    else if (average < 70) return 'B';
    else return 'A';
}

int main() {
    int exam1, exam2, total;
    double average;
    string name;
    char grade;

    // Read student's name
    cout << "Enter Student Name: ";
    if (!getline(cin, name)) {
        cerr << "Error reading name." << endl;
        return 1;
    }

    // Read exam scores
    cout << "Enter Exam1 Score: ";
    while (!(cin >> exam1) || exam1 < 0 || exam1 > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Enter Exam2 Score: ";
    while (!(cin >> exam2) || exam2 < 0 || exam2 > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    // Calculate total and average scores
    total = exam1 + exam2;
    average = total / 2.0;

    // Calculate grade
    grade = calculateGrade(average);

    // Display results
    cout << "Total Score = " << total << endl;
    cout << "Average Score = " << average << endl;
    cout << name << ", your grade is: " << grade << endl;

    return 0;
}