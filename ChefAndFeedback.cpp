#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, count1 = 0, count2 = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                count1++;
            }
            else if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                count2++;
            }
        }
        if((count1 + count2) > 0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Bad"<<endl ;
        }
    }    
        return 0;
}
