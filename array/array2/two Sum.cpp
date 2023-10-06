#include <iostream>
#include <vector>
using namespace std;

int copyfrom(vector<int> &a)
{
    vector<int> b;
   for (int i = a.size() - 1; i >= 0; i--) {
        b.push_back(a[i]);
    }
    return b;
}
int main()
{
    int x;
    cout << "enetr the target numebr " << endl;
    ;
    cin >> x;
    vector<int> v;
    int n;
    cout << "enter the array size :" << endl;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; i < v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}