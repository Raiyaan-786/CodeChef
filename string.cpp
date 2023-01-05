#include<iostream>
using namespace std;

int main(){
    string A , B , C;
    int Alength , Blength;
    cin>>A>>B;
    C = A + B;
    char x = A[0];
    char y = B[0];
    B[0] = x;
    A[0] = y;
    Alength = A.size();
    Blength = B.size();
    cout<<A.size()<<" ";
    cout<<B.size()<<endl;
    cout<<C<<endl;
    cout<<A<<" "<<B;
    return 0;
}