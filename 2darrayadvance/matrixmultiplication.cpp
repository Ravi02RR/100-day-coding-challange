#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int m;
    cout << "enter rows of 1st matrix : ";
    cin >> m;
    int n;
    cout << "enter column of 1st matrix : ";
    cin >> n;
    int p;
    cout << "enter rows of 2nd matrix : ";
    cin >> p;
    int q;
    cout << "enter column of 2nd matrix : ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];

        cout << "enter element of first matrix : ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[m][n];
            }
        }
        int b[p][q];
        cout << "enter element of second matrix : ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> a[p][q];
            }
        }
        // resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multiply matrix here.. 
                for (int k = 0; k < n; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
                


                
            }
        }
    }
    else
    {
        cout << "these two matrices can't perform multiplication";
    }
    return 0;
}