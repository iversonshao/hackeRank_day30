#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Difference {
private:
    vector<int> elements;
public:
    int maximumDifference;
    //class constructor
    Difference(vector<int>& arr): elements(arr) {}
    
    //Compute the max absolute difference between any two numbers in the elements array
    void computeDifference(){
        sort(elements.begin(), elements.end());
        maximumDifference = elements.back() - elements.front();
    }
}; 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    Difference d(a);
    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}