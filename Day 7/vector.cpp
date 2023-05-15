#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    vector<int>::iterator itr;
    cout << "using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << ++*itr << endl;

    cout << "this is using for each loop" << endl;
    for (int x : v)
        cout
            << x << endl;
}