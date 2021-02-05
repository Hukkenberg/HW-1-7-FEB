#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string raw[n];
    for (int i = 0; i < n; i++)
        cin >> raw[i];
    for (int i = 0; i < n; i++)
    {
        string key = raw[i];
        string key_rev = strrev(key);
        bool concl = true;
        for (int j = i+1; j < n; j++)
        {
            if(key_rev == raw[j])
                concl = false;
        }
        int m = key.length();
        if (concl == false && m % 2 == 0)
        {
            cout << m << ' ' << key[m/2];
            break;
        }
        if (concl == false && m % 2 != 0)
        {
            cout << m << ' ' << key[(m-1)/2];
            break;
        }
    }
    return 0;
}