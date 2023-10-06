#include <iostream>
#include <vector>
using namespace std;
void sort01(vector<int> &v)
{
    int n = v.size();
    int no1 = 0;
    int noz = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noz++;
        else
            no1++;

        // filling element
    }
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}



//two pointers solnn.....




int main()
{
    return 0;
}