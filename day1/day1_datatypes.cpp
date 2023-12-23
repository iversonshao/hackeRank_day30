#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    double d;
    string s;
    cin >> i >> d;
    cin.ignore();
    getline(cin, s);
    cout << i + 4 << endl;
    cout << fixed << setprecision(1) << d + 4.0 << endl;
    cout << "HackerRank " + s << endl;
    return 0;
}