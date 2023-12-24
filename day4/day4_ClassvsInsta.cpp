#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        int age;
        void amIOld(){
            if (age < 0) {
                cout << "Age is not valid, setting age to 0." << endl;
                age = 0;
            }
            if (age < 13) {
                cout << "You are young." << endl;
            }
            else if (age >= 13 && age < 18) {
                cout << "You are a teenager." << endl;
            }
            else {
                cout << "You are old." << endl;
            }
        }

        void yearPasses() {
            age++;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int age;
        cin >> age;

        Person p;
        p.age = age;
        
        p.amIOld();
        for (int j = 0; j < T; j++) {
            p.yearPasses();
        }
        p.amIOld();
        cout << endl;
    }
    return 0;
}