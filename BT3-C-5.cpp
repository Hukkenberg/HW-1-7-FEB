#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int max = x*y;
    int p = 0;
    int k = 1;
    int a[x][y];
    int col = y;
    int row = x;
    while(k <= max)
    {
		for(int i = p; i < col; i++) 
			a[p][i] = k++;
		for(int i = p+1; i < row; i++) 
			a[i][col-1] = k++;
		if ( p != row-1)
        {
			for(int i = col-2; i >=p; i--) 
				a[row-1][i] = k++;
		}	
		if(p!=col-1)
        {
			for(int i = row-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;row--; col--;
	}
    for (int i = 0; i < x; x++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j];
    }
    return 0;
}