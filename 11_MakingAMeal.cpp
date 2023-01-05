#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	cout<<"Enter the value of t"<<endl ;
	int t ; 
	cin>>t ;
	while(t--){
	    int n ;
		cout<<"Enter the value of n"<<endl ;
	    cin>>n ;
	    string s ;
		cout<<"Enter the value of strings"<<endl ;
	    int arr [6] ;
	    for(int i = 0 ; i<6 ; i++){
	        arr[i] = 0 ;
	    }
	    for(int i = 1 ; i<=n ;i++){
	        string r ;
			cin>>r ;
			s.append(r) ;
	    }
        for(int j = 0 ; j < s.length(); j++){
			if(s[j] == 'c'){
	                arr[0] += 1 ;
	        }
	        else if(s[j] == 'e'){
	                arr[1] += 1 ;
	        }
	        else if(s[j] == 'd'){
	                arr[2] += 1 ;
	        }
	        else if(s[j] == 'o'){
	                arr[3] += 1 ;
	        }
	        else if(s[j] == 'h'){
	                arr[4] += 1 ;
	        }
	        else if(s[j] == 'f'){
	                arr[5] += 1 ;
	        }
        }
		for(int i = 0 ; i<6 ;i++){
			cout<<arr[i]<<" " ;
		}
		// int min1 = min(arr[0] , arr[1]) ;
		// int min2 = min(arr[2] , arr[3]) ;
		// int min3 = min(arr[4] , arr[5]) ;
		// int min4 = min(min2 ,min3) ;
		// if(min1-1>= min4 && min2 == min3){
		// 	cout<<endl<<min4<<endl;
		arr[0]/=2 ;
		arr[1]/=2 ;
		cout<<min({arr[0] , arr[1] , arr[2] , arr[3] , arr[4] , arr[5]})<<endl ; 	    
	}
	return 0 ;
}
