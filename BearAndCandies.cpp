#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ; 
	cin>>t ;
	while(t--){
	    int l,b ;
	    cin>>l>>b;
        int tl = 0 , tb = 0 , counter = 0;
        while(tl<l || tb<b){
            counter = counter+1;
            tl = tl+counter ;
            counter = counter+1;
            tb = tb+counter;
        }
        if(tl==l && tb==b){
            cout<<"Bob"<<endl;
        }
        else if(tl>l){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Limak"<<endl;
        }
    }                   
	return 0;
}
