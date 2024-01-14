#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void prime(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << "Not prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
    return;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        if(num == 1){
            cout << "Not prime" << endl;
            continue;
        }
        prime(num);
    }
    return 0;
}