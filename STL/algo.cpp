#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << binary_search(v.begin(), v.end(), 3) << endl;

    // Find the position of the lower bound
    // vector<int>::iterator lb = lower_bound(v.begin(), v.end(), 3);
    // cout << "lower bound 3: position " << (lb - v.begin()) << endl;

    // cout << "lower bound" << lower_bound(v.begin(), v.end(), 6);

    int a = 10;
    int b = 12;
    cout << max(a, b);
    swap(a, b);
    cout << a;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s;

    rotate(v.begin(), v.begin() + 1, v.end());

    return 0;
}
