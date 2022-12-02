#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n, greater<int>());
    cout<<"the sorted array is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}