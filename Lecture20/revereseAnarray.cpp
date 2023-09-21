#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(const vector<int> &v)
{
    vector<int> reversed = v;
    int s = 0;
    int e = reversed.size() - 1;
    while (s <= e)
    {
        swap(reversed[s], reversed[e]);
        s++;
        e--;
    }
    return reversed;
}

void print(const vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);

    cout << "printing reverse array" << endl;
    print(ans);

    return 0;
}
