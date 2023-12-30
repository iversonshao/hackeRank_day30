#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int findMaxConsecutiveOnes(int n) {
    bitset<32> binaryRepresentation(n);
    string binaryString = binaryRepresentation.to_string();

    int maxConsecutiveOnes = 0;
    int currentConsecutiveOnes = 0;

    for (char bit : binaryString) {
        if (bit == '1') {
            currentConsecutiveOnes++;
            maxConsecutiveOnes = max(maxConsecutiveOnes, currentConsecutiveOnes);
        } else {
            currentConsecutiveOnes = 0;
        }
    }

    return maxConsecutiveOnes;
}

int main(){
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp))); 
    int result = findMaxConsecutiveOnes(n);

    cout << result << endl;
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
