#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, v, num, num2;
    cin>>n>>v;
    vector<int> result;
    for(int i=0; i<n; i++){
        bool flag=false;
        cin>>num;
        for(int j=0; j<num; j++){
            cin>>num2;
            if(flag==false && v>num2){
                result.push_back(i);
                flag=true;
            }
        }
    }
    cout<<result.size()<<endl;
    for(int i=0; i<result.size(); i++){
        cout<<result[i]+1<<" ";
    }
    return 0;
}