#include <bits/stdc++.h>

using namespace std;

string olesyaRodion(int n, int t){
    string answer = "";
    if (t != 10) {
        answer += to_string(t);
        for (int i = 1; i < n; i++){
            answer += '0';
        }
    }
    else {
        if (n == 1){
            answer+="-1";
        }
        else {
            answer += '1';
            for (int i = 1; i < n; i++){
                answer += '0';
            }
        }
    }
    return answer;
}

int main(){
    int n, t;
    cin>>n>>t;
    cout << olesyaRodion(n, t);
    return 0;
}