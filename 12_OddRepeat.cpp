#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	cout<<"Enter the value of t "<<endl;
	int t ;
	cin>>t ;
	while(t--){
        cout<<"Enter the value of n , k , s"<<endl ;
	    long int n , k , s , sum = 0;
	    cin>>n>>k>>s ;
	    int num = n*2 - 1 ;
	    for(int i = 1 ; i<=num ; i+2){
	        sum += i ;
	    }
        cout<<"sum : "<<sum<<endl ;
	    sum = s - sum ;
        cout<<"sum : "<<sum<<endl ;
	    for(int i = 3 ; i<=num ; i+2){
	        if(sum % i == 0 && sum/i == k-1){
	            cout<<i<<endl;
				break ;
	        }
	    }
	}
	return 0;
}
