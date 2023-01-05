#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , count = 0 ;
	    cin>>n ; 
	    int arr[n] ;
	    for(int i = 0 ;i<n ; i++){
	        cin>>arr[i] ;
	    }
	    sort(arr , arr+n) ;
	    for(int i = 0 ; i<n-1 ;i++){
	        for(int j = i+1 ; j<n ;j++){
	            if(arr[i] == arr[j]){
	                count++ ;
	            }
	            else{
	                i == j  ;
	                j == i + 1 ;
	                break ;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
