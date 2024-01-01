#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
    Person(const string& firstName, const string& lastName, int idNumber) : 
        firstName(firstName), lastName(lastName), idNumber(idNumber) {}

    void printPerson() const {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << idNumber << endl;
    }
protected:
    string firstName;
    string lastName;
    int idNumber;
};

class Student : public Person{
public:
    Student(const string& firstName, const string& lastName, int idNumber, const vector<int>& scores)
        : Person(firstName, lastName, idNumber), testScores(scores) {}
    
    char calculate() const {
        int sum = 0;
        for (int score : testScores) {
            sum += score;
        }
        int average = sum / testScores.size();

        if (average >= 90 && average <= 100) {
            return 'O';
        } else if (average >= 80 && average < 90) {
            return 'E';
        } else if (average >= 70 && average < 80) {
            return 'A';
        } else if (average >= 55 && average < 70) {
            return 'P';
        } else if (average >= 40 && average < 55) {
            return 'D';
        } else {
            return 'T';
        }
    }

private:
    vector<int> testScores;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string firstName, lastName;
    int idNumber, numScores;
    cin >> firstName >> lastName >> idNumber;
    
    cin >> numScores;

    vector<int> scores(numScores);
    for (int i = 0; i < numScores; ++i) {
        cin >> scores[i];
    }

    Student student(firstName, lastName, idNumber, scores);
    student.printPerson();
    cout << "Grade: " << student.calculate() << endl;
    return 0;
}