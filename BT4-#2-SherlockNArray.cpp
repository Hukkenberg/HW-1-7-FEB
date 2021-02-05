#include <iostream>

using namespace std;


int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
            cin >> a[j];
        bool SnA = true;
        for (int j = 0; j < n; j++)
        {
            int left_sum = 0;
            int right_sum = 0;
            for (int k = 0; k < j; k++)
                left_sum += a[k];
            for (int k = j; k < n; k++)
                right_sum += a[k];
            if (left_sum == right_sum)
                SnA = false;
        }
        if (SnA == false)
            cout << "YES";
        else
            cout << "NO";    
    }
    return 0;
}