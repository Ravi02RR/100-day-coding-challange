#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = {1, 2, 3, 4, 5, 6, 6};
    v.insert(20);
    v.insert(30);

    set<int>::iterator itr;
    cout << "using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;

    cout << "this is using for each loop" << endl;
    for (int x : v)
        cout
            << x << endl;
}