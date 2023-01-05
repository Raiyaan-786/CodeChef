#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t ;
	while(t--){
	    int n , count = 0  , sum_ladd0 = 0 , mul1 , mul2 ;
        cin>>n ;
	    string s , r ; 
        cin>>s ;
	    if(s == "INDIAN"){
	        count = 200 ;
	    }
        else{
            count = 400 ;
        }
	    int arr[n];
        string cw = "CONTEST_WON" ,tc = "TOP_CONTRIBUTOR"  , bf = "BUG_FOUND" , ch = "CONTEST_HOSTED" ; 
	    for(int i = 0 ;i<n ;i++){
	        cin>>r ;
            if(r == cw){
                cin>>mul1 ;
                if(mul1<20){
                    sum_ladd0 += (300 + (20-mul1)) ;
                }
                else{
                    sum_ladd0 += 300 ;
                }
                cout<<sum_ladd0<<" ";
            }
            else if(r == tc){
                sum_ladd0 += 300;
                cout<<sum_ladd0<<" ";
            }
            else if(r == bf){
                cin>>mul2 ;
                sum_ladd0 += mul2 ;
                cout<<sum_ladd0<<" ";
            }
            else{
                sum_ladd0 += 50 ;
                cout<<sum_ladd0<<" ";
            }
	    }
        cout<<sum_ladd0/count<<endl;
	}
	return 0;
}
