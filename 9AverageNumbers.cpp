#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cout<<"Enter the value of test cases"<<endl;
	cin>>t ;
	while(t--){
		cout<<"Enter the value n , k and v "<<endl;
	    int n , k , v , sum = 0 ;
	    cin>>n>>k>>v ;
	    int arr[n] ;
	    for(int i = 0 ;i<n ;i++){
	        cin>>arr[i] ; 
	        sum += arr[i] ;
	    }
		cout<<"Sum is : "<<sum<<endl;
	    int avg = (n+k)*v ;
		cout<<"Avg is : "<<avg<<endl;
	    if(sum >= avg){
	        cout<<-1<<endl;
	    }
	    else{
	        int tsum = avg - sum ;
	        if(tsum % k == 0){
	            cout<<tsum/k<<endl;
	        }
            else{
	            cout<<-1<<endl;
	        }
	    }     
	}
	return 0;
}
