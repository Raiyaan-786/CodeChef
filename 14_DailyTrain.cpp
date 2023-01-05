#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

int main()
{
    // your code goes here
    int x, n, comb = 0, ways = 0 ;
    cin >> x >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int l = s.length(), i = 1;
        string arr;
        while (i <= l)
        {
            int count = 0 ;
            s[i] = arr[0];
            s[i + 1] = arr[1];
            s[i + 2] = arr[2];
            s[i + 3] = arr[3];
            s[l - 1] = arr[4];
            s[l] = arr[5];
            for (int j = 1; j <= 6; j++)
            {
                if (arr[i] == '0')
                {
                    count++;
                }
            } ;
            ways  += factorial(x) / (factorial(count) *factorial(x-count) ) ;
            i += 4;
            l -= 2;
        }

    }
    cout<<ways<<endl;

    return 0;
}