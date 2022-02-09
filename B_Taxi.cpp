#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count1=0, count2=0, count3=0, count4=0, result=0, sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]==4){
            count4+=1;
        }else if(arr[i]==1){
            count1+=1;
        }else if(arr[i]==2){
            count2+=1;
        }else if(arr[i]==3){
            count3+=1;
        }
    }
    result=count4+count3;
    if(count3<=count1){
        count1-=count3;
    }else{
        count1=0;
    }
    result+=count2/2;
    if(count2%2==1){
        result+=1;
        count1=max(0, count1-2);
    }
    result+=count1/4;
    if(count1%4!=0){
        result+=1;
    }
    cout<<result;
    return 0;
}