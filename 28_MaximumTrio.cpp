#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; 
    cin>>t ;
    while(t--){
        long long n , a, b ,val,res;
        cin>>n ;
        long long arr[n] ;
        for(long long i = 0 ; i<n ;i++){
            cin>>arr[i] ;
        }
        sort(arr, arr+n) ;
        b = arr[0] ;
        a = arr[n-1] ;
        val = arr[n-2] ;
        res = (a-b)*val ;
        cout<<res<<endl;
    }
    return 0;
}