/*#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,i;
    cin>>n>>k;
    long long int even_ele, odd_ele;
    even_ele=n/2;
    odd_ele=(n+1)/2;
    if(k<=odd_ele)//condition -> k less than (n+1)/2 not n/2
    {
        cout<<2*k-1<<endl; //odd
    }else{
        cout<<2*(k-odd_ele)<<endl; //even
    }
    return 0;
}*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,i;
    cin>>n>>k;
    vector<long long int> arr;
    for(i=1; i<=n; i++){
        if(i%2!=0){
            arr.push_back(i);
        }
    }
    for(i=1; i<=n; i++){
        if(i%2==0){
            arr.push_back(i);
        }
    }
    long long int & req_ele = arr.at(k-1);
    cout<<req_ele;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
