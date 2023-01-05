#include<iostream>
using namespace std;

int main(){
    int T , K , X ;
    cin>>T; 
    for(int i = 0 ; i<T ; i++){
        cin>>K>>X;
        cout<<(K*7)-X<<endl;
    }
    return 0;
}