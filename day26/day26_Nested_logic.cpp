#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//if the book is returned on or before the expected return date, no fine will be charged
//fine = 0
//if the book is returned after the expected return day but still within the same calendar month and year as the expected return date, 
//fine = 15 Hackos * (the number of days late)
//if the book is returned after the expected return month but still within the same calendar year as the expected return date,
//fine = 500 Hackos * (the number of months late)
//if the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1, m1, y1;
    int d2, m2, y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    int fine = 0;
    //if the book is returned on or before the expected return date, no fine will be charged
    //fine = 0
    if (y1 < y2) {
        fine = 0;
    } else if (y1 == y2) {
        if (m1 < m2) {
            fine = 0;
        } else if (m1 == m2) {
            if (d1 <= d2) {
                fine = 0;
            } else {
                fine = 15 * (d1 - d2);
            }
        } else {
            fine = 500 * (m1 - m2);
        }
    } else {
        fine = 10000;
    }
    cout << fine << endl;
    return 0;
}