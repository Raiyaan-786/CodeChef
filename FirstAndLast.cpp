#include<iostream>
using namespace std;

int Result(int A[] ,int size ){
    int sum = 0 ;
    if(size == 1){
        sum = A[size-1]; 
    }
    else if(size == 2){
        sum = A[size-1] + A[size-2];
    }
    else if(size > 2){
        for( int i = 0 ; i<size ;i++){    
            if(sum < A[i] + A[i+1]){
                sum = A[i] + A[i+1]; 
            }
        }
    }
        return sum ;
}

int main(){
    int Test , n , i;
    // cout<<"Enter the number of test "<<endl;
    cin>>Test;
    for( i = 0 ; i<Test ; i++){
        // cout<<"Enter the size of array"<<endl;
        // cin>>N;
        // for(int j = 0 ; j<N ; j++){
        //     cout<<"Enter element "<<j<<" : "<<endl;
        //     cin>>A[j];
        // }
        // cout<<Result(A , N)<<endl;
        cin>>n;
	    int arr[n],max_sum,sum;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    max_sum=arr[0]+arr[n-1];
	    if(n==2){
	        cout<<max_sum<<endl;
	    }
	    else{
	    for(i=0;i<n-1;i++){
	        sum=arr[i]+arr[i+1];
	        if(sum>max_sum){
	            max_sum=sum;
	        }
	    }
	    cout<<max_sum<<endl;
	    }       
    }
    return 0;
}