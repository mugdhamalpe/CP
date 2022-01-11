#include <bits/stdc++.h>

using namespace std;

int main() {
    int y;
    cin >> y;
    while (y>0) {
        int count = 0;
        y+=1;
        string s = to_string(y);
        for (int i=0; i<s.length()-1; i++) {
            for (int j=i+1; j<s.length(); j++) {
                if (s[i]==s[j]) {
                    count++;
                }
            }
        }
        if (count==0) {
            cout<<y;
            break;
        }
        else {
            continue;
        }
    }
    return 0;
}