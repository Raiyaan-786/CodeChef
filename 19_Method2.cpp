#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t; 
	while(t--){
	    long long n , m , k , x , res  ;
        cin>>n>>m>>k>>x ;
        long long pr = n*(k-1);
        long long qr = (n*k)+m ;
        res = x%qr ;
        if(res==0 || res-pr >0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
	}
	return 0;
}
