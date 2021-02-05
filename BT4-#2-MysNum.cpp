#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    int B[N+1];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i <= N; i++)
        cin >> B[i];
    for (int i = 0; i <= N; i++)
    {
        int sus = B[i];
        bool sus_b = true;
        for (int i = 0; i < N; i++)
        {
            if (sus == A[i])
            {
                sus_b = false;
                break;
            }
        }
        if (sus_b == true)
        {
            cout << sus;
            break;
        }
    }
    return 0;
}