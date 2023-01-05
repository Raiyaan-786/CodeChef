#include<iostream>
using namespace std;

int main(){
    int T , N , k , D;
    // cout<<"Enter the Number of test cases"<<endl;
    cin>>T ;
    for(int i = 0 ; i<T ; i++){
        // cout<<"Number of elements in case : "<<i<<endl;
        cin>>N;    
        k = 0 ;
        for(int j = 0 ; j<N ; j++){
            // cout<<"Element "<<j<<" is :"<<endl;
            cin>>D;
            if(D>= 1000){
                k = k+1 ;
            }
            else{
                k = k+0 ;
            }
        }
        cout<<k<<endl;      
    }
    return 0;
}