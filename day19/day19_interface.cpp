#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class AdvancedArithmetic{
public:
    virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic{
public:
    int divisorSum(int n) override{
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    cin >> i;

    cout << "I implemented: AdvancedArithmetic\n";
    cout << Calculator().divisorSum(i) << endl;
    return 0;
}
