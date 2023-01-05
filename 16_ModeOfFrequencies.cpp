#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[9] ;
	for(int i = 1 ; i<=9 ; i++){
	    arr[i] = 0 ;
	}
	int t ; 
	cin>>t ; 
	while(t--){
	    int n ; 
	    cin>> n; 
	    int a[n] ;
	    for(int i = 0 ; i<n ; i++){
	        cin>>a[i] ;
	        if(a[i] == 1){
	            arr[1]++;
	        }
	        if(a[i] == 2){
	            arr[2]++;
	        }
	        if(a[i] == 3){
	            arr[3]++;
	        }
	        if(a[i] == 4){
	            arr[4]++;
	        }
	        if(a[i] == 5){
	            arr[5]++;
	        }
	        if(a[i] == 6){
	            arr[6]++;
	        }
	        if(a[i] == 7){
	            arr[7]++;
	        }
	        if(a[i] == 8){
	            arr[8]++;
	        }
	        if(a[i] == 9){
	            arr[9]++;
	        }
	    }
        for(int i = 1 ; i<=9 ; i++){
            cout<<arr[i]<<" " ;
        }
        int fof[9] ;
        for(int i = 1 ; i<=9 ; i++){
            fof[arr[i]]++ ;
        }
        for(int i = 1 ; i<=9 ; i++){
            cout<<fof[i]<<" " ;
        }
        cout<<endl;
        int max = INT_MIN ;
        int min = INT_MAX ;
        for(int i = 1 ; i<=9 ; i++){
            if(arr[i] != 0){
                if(arr[i] <= min){
                    min == arr[i] ;
                }
                if(arr[i] >= max){
                    max = arr[i] ;
                }
            }
        }
        if(max != min){
            cout<<max<<endl; 
        }
        else{
            cout<<min<<endl;
        }
	    
	}
	return 0;
}
