#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t ;
	while(t--){
	    int n , k , i , total = 0 , sum = 0;
	    cin>>n>>k ;
	    int A[n] ;
	    for(i = 1 ; i<n+1 ; i++){
	        cin>>A[i];
	    }
	    for(i = 1 ; i<n+1 ; i++){
	        sum = sum + A[i];
	        if(sum>k){
	            sum = A[i]-k; 
	            total++ ;
	        }
	        else{
	            cout<<"NO "<<i<<endl;
	        }
	    }
	    if(total == n ){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
