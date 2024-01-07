#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

stack<char> s;
queue<char> q;

//using queue and stack to check if a string is palindrome or not
void pushCharacter(char ch){
    s.push(ch);
}

char popCharacter(){
    char topc = s.top();
    s.pop();
    return topc;
}

void enqueueCharacter(char ch){
    
    q.push(ch);
}

char dequeueCharacter(){
    char frontc = q.front();
    q.pop();
    return frontc;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        enqueueCharacter(s[i]);
        pushCharacter(s[i]);
    }
    bool isPalindrome = true;
    for (int i = 0; i < (s.length() / 2); i++){
        if (popCharacter() != dequeueCharacter()){
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome){
        cout << "The word, " << s << " , is a palindrome." << endl;
    }
    else{
        cout << "The word, " << s << " , is not a palindrome." << endl;
    }
    return 0;
}
