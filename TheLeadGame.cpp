#include<iostream>
using namespace std;

void PointTable(int T[] , int size){
    for(int i = 0 ; i<size ; i++){
        cin>>T[i];
    }
}

int Winner(int T[] , int S[]  , int size){
    int diff1 = 0 , diff2 = 0 ;
    int max1 = 0 , max2 = 0;
    for(int i = 0 ; i<size ; i++){
        if(T[i] > S[i]){
            diff1 = T[i] - S[i];          
        }
        else{
            diff2 = S[i] - T[i];
        }
        if(diff1 > max1){
            max1 = diff1 ;
        }   
        if(diff2 > max2){
            max2 = diff2 ;
        }   
    }
    if(max1 > max2){
        cout<<"1"<<" "<<max1;
    }
    else{
         cout<<"2"<<" "<<max2;
    }          
}

int main(){
    int N ; 
    cin>>N;
    int A[N] ,B[N];
    PointTable(A , N);
    PointTable(B , N);
    int dif1 = 0 , dif2 = 0;
    int lead = 0  , winner = 0 ;
    for(int i = 0 ; i<N ; i++){
        if(A[i] > B[i]){
            dif1 = A[i] - B[i];
            if(dif1 > lead){
                lead = dif1;
                winner = 1; 
            }
        }
        else{
            dif2 = B[i] - A[i];
            if(dif2 > lead){
                lead = dif2 ; 
                winner = 2;
            }
        }
    }
    cout<<winner<<" "<<lead; 
       
    return 0;
}