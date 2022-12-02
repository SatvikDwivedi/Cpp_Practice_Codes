#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the num to be searched : ";
    int a;
    cin>>a;
    int f=0;
    for(int i=0;i<n;i++){
    if(arr[i]==a){
        f++;
    }
    }
    if(f==1){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
}