#include<iostream>
using namespace std;

void Arraycheck(int A[] , int size){
    
}

int main(){
    int Test , size , count ;
    cin>>Test ;
    cin>>size ;
    int A[size];
    for(int i = 0 ; i<Test ; i++){
        for(int j = 0 ; j<size ;j++){
            cin>>A[j];          
        }
    } 
    for(int j = 0 ; j < size ; j++){
        cout<<A[j]<<" ";
    }      
    return 0;
}