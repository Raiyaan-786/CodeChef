#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0 ; i<n/2 ;i++){
            if(s[i] != s[n-1-i]){
                s[n-1-i] = s[i] ;
                count++ ;
            }
        }
        if(count == 0){
            cout<<"YES"<<endl;
        }
        else if(count % 2 != 0 && n%2 != 0){
            cout<<"YES"<<endl;
        }
        else if(count % 2 == 0 && n%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
