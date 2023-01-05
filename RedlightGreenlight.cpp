#include<iostream>
using namespace std;

void getdata(int a[] , int size){
    for(int i = 0 ; i<size ; i++){
        cin>>a[i];
    }
}

void checkdata(int a[] , int key , int size ,int counter){
    counter = 0 ;
    for(int i = 0 ; i<size ; i++){
        if(a[i] > key){
            counter = counter + 1;             
        }
        else{
            counter = counter + 0; 
        }
    }
}

int main(){
    int t ;
    cout<<"enter the number of test cases"<<endl;
    cin>>t;
    int n , k , count ;
    int A[n];
    for(int i = 0 ; i<t ; i++){
        cin>>n;
        getdata(A , n);
    } 
    // for(int i = 0 ; i < t ; i++){
    //     cin>>k>>n;
    //     for(int i = 0 ; i<n ; i++){
    //         cin>>a[i];
    //     }
    //     for(int i = 0 ; i<n ; i++){
    //         count = 0 ;
    //         if(a[i]>k){
    //             count++;
    //         }
    //     }
    // }
    
    return 0;
}