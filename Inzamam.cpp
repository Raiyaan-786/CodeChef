#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cout << "Enter the binary no " << endl;
    cin >> s;
    s = s + '0'; // we cannot iterate beyond the last index of string so adding '0' to the string
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            while (s.at(i) == '1')
                i++;
            count = count + 1;
        }
        else
            continue;
    }
    cout << count;
    return 0;
}
