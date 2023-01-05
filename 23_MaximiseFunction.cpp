#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t ; 
    cin>>t ; 
    while(t--){
        int n , result; 
        cin>>n ;
        int arr[n] ; 
        for(int i = 0 ; i<n ;i++){
            cin>>arr[i] ;
        }
        sort(arr , arr+n) ;
        result = (arr[n-1] - arr[0]) + (arr[n-2] - arr[0]) + (arr[n-1] - arr[n-2])  ;
        cout<<result<<endl;
    }  
    return 0;
}
