#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t; 
	while(t--){
	    long long n , m , k , x ;
        cin>>n>>m>>k>>x ;
        long long count = 0 , i = 1;
	    while(count<=x){
            // cout<<i<<"th : "<<count<<endl;
            if(i % k == 0){
                count += n+m ;  
            }
            else{
                count += n ;
            }
            i++ ;
        }
        // cout<<i<<"th : "<<count<<endl;
        if((i-1) % k == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
