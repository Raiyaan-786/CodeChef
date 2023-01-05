#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t ; 
    cin>>t ;
    while(t--){
        long long n , k , product = 1 ; 
        cin>>n>>k ;
        long long arr[n] , hash[n] ;
        for(int i = 0 ; i<n ;i++){
            cin>>arr[i] ;
        }
        for(int i = 0 ; i<n ; i++){
            product *= arr[i] ;
            hash[i] = product ;
        }
        for(int i = 0 ;i<n ;i++){
            if(hash[i] % k == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
