#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool not_dupl = true;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int sample = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] == sample)
                not_dupl = false;
        }
    }
    if (not_dupl == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}