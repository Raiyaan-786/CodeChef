#include <bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    int k, n , j , count = 0;
    cin >> k >> n;
    map<int, string> fav;
    for (int i = 1; i <= k; ++i)
    {
        string s;
        cin >> s;
        fav.insert({i, s});
    }
    map<int, string> str;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        str.insert({i, s});
    }

    for (int i = 1; i <= n; ++i)
    {
        for (j = 1; j <= k; ++j)
        {
            string m = str.at(i);
            int res = isSubstring(fav.at(j), str.at(i));
            if (m.length() >= 47)
            {
                count++ ;    
            }
            else if (res == 0)
            {
                count++ ;
            }   
        }
            if(count > 0){
                cout<<"Good"<<endl;
            }
            else{
                cout<<"Bad"<<endl;
            }
    }
    
    return 0 ;
}
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     cout<<"Enter the value k and n"<<endl;
// 	int k , n ,t ;
// 	cin>>k>>n ;
//     string s[k] ;
//     string r[n] ;
//     for(int i = 0 ;i<k ;i++){
//         cin>>s[i] ;
//     }
//     for(int i = 0 ;i<k ;i++){
//         cin>>r[i] ;
//     }
//     for(int i = 0 ;i<k ;i++){
//         cout<<s[i]<<" " ;
//     }
//     cout<<endl;
//     for(int i = 0 ;i<k ;i++){
//         cout<<s[i]<<" " ;
//     }
//     // for(int i = 0 ; i<k ; i++){
//     //     for(int j = 0 ; j<n ;j++){
//     //         if(s[i][t] == r)
//     //     }
//     // }
// 	return 0;
// }