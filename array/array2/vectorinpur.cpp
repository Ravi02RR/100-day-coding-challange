#include <iostream>
#include <vector>
#include <algorithm>  // Required for the sort function

using namespace std;

int main()
{
    vector<int> c;
    c.push_back(1);
    c.push_back(12);
    c.push_back(132);
    c.push_back(2);
    c.push_back(124);

    // Sort the vector outside of the loop
    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
