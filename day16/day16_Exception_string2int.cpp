#include <bits/stdc++.h>

using namespace std;

void str2int(string S){
    try{
        int i = stoi(S);
        cout << i << endl;
    }
    catch(exception &e){
        //cout << e.what() << endl;
        cout << "Bad String" << endl;
    }
}

int main()
{
    string S;
    getline(cin, S);
    str2int(S);

    return 0;
}
