#include <iostream>
#include <cstring> 

using namespace std;

int main()
{
    string set;
    cin >> set;
    bool parr = true;
    for (int i = 0; i < set.length()/2; i++)
    {
        for (int j = set.length()-1; j > set.length()/2; j--)
        {
            if (set[i] != set[j])
                parr = false;
        }
    }
    if (parr == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}