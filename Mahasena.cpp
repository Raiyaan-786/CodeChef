#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N ; 
	cin>>N;
	int a[N];
	for(int i = 0 ; i<N ;i++){
	    cin>>a[i];
	}
    int odd = 0 ;
    int even = 0 ;
	for(int i = 0 ; i<N ; i++){
        if(a[i]%2 == 0){
            even++;
        }
        else{
            odd++; 
        }
    }
    if(odd>=even){
        cout<<"NOT READY";
    }
    else{
        cout<<"READY FOR BATTLE";
    }
	return 0;
}

