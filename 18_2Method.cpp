#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ; 
    while(t--){
        int n , count0 = 0 , count1 = 0; 
        cin>>n ;
        int a[n] ; 
        for(int i = 0 ; i<n ;i++){
            cin>>a[i] ;
        }
        for(int i = 0 ; i<n ;i++){
            if(a[i] == 0 ){
                count0++; 
            }
        }
        for(int i = 0 ; i<n ;i++){
            if(a[i] == 1 ){
                count1++; 
            }
            else{
                break ;
            }
        }
        count1 = n - count1 ;
        cout<<(1000*count0)+(count1*100)<<endl;
    }
    return 0 ;
}