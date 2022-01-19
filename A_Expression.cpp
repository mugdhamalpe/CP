#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int sum1, sum2, sum3, sum4, sum5, sum6;
    sum1=a+b*c;
    sum2=a*(b+c);
    sum3=a*b*c;
    sum4=(a+b)*c;
    sum5=a+b+c;
    sum6=a*b+c;
    cout<<max(sum1,max(sum2,max(sum3,max(sum4,max(sum5,sum6)))));
    return 0;
}