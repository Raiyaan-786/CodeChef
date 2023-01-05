#include <iostream>
using namespace std;

int main() {
    int T , X , Y , A; 
    cin>>T; 
    for(int i = 0 ; i<T ; i++){
        cin>>X>>Y>>A;
        if(X <= A && A < Y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
