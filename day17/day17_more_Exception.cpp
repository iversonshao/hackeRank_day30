#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculator{
    int power(int n, int p){
        if(n < 0 || p < 0){
            throw runtime_error("n and p should be non-negative");
        }
        return pow(n, p);
    }

    friend int calPower(int n, int p);
};

int calPower(int n, int p){
    Calculator C;
    return C.power(n, p);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n, p;
        cin >> n >> p;

        try {
            int ans = calPower(n, p);
            cout << ans << endl;
        }
        catch (exception &e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}