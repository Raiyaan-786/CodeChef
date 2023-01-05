#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t  , count00 = 0 , count01 = 0 , count10 = 0 , count11 = 0;
	cin>>t ;
	while(t--){
	    int n ; 
	    cin>>n;
	    int A[n] , B[n];
	    for(int i = 0 ; i<n ; i++){
	        cin>>A[i] ;
	    }
	    sort(A , A+n) ;
        for(int i = 0 ; i<n ;i++){
            B[n-i-1] = A[i] ;
        }
        for(int i = 0 ; i<n ; i++){
            cout<<A[i]<<" " ;
        }
        cout<<endl;
        for(int i = 0 ; i<n ; i++){
            cout<<B[i]<<" " ;
        }
        cout<<endl;
        for(int i = 1 ; i<n-1 ; i++){
            if(A[i] - A[i-1] % 2*(A[i+1] - A[i]) == 0 || 2*(A[i] - A[i-1]) % A[i+1] - A[i] == 0){
                count00++ ;
            }
            else{
                count01++ ;
            }
            if(B[i] - B[i-1] % 2*(B[i+1] - B[i] == 0) || 2*(B[i] - B[i-1]) % B[i+1] - B[i] == 0){
                count11++ ;
            }
            else{
                count10++ ;
            }
        }
        if(count01>0 || count10>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl; 
        }
	}
	return 0;
}
