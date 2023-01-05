#include<iostream>
using namespace std;

int main(){
    int t , n ;
	string s ;
	cin>>t;
	while(t--){
	    cin>>n>>s;
	    for(int i = 0 ; i<n ; i+=2){
            if(s[i] == '0'){
                if(s[i+1] == '0'){
                    cout<<"A";
                }
                else{
                    cout<<"T";
                }
            }
            if(s[i] == '1'){
                if(s[i+1] == '0'){
                    cout<<"C";
                }
                else{
                    cout<<"G";
                }
            } 
        }
        cout<<endl;
    }    
    return 0;
}