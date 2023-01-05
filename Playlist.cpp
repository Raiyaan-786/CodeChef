#include<iostream>
using namespace std;

int main(){
    int T , N , X , A , B , C ;
    cin>>T;
    for( int i = 0 ; i<T ; i++){
        cin>>N>>X;
        C = N/(3*X);
        cout<<C<<endl;
    } 
    
    return 0;
}