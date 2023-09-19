#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);

    cout << "print a" << endl;
    for (int i : last)
    {
        cout << i << endl;
    }

    cout << "size of vector is " << v.size() << endl;
    cout << "capacity of vector is " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity of vector is " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity of vector is " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity of vector is " << v.capacity() << endl;

    cout << "size of vector is " << v.size() << endl;

    if (v.size() > 2)
    {
        cout << "element at 2nd index is " << v.at(2) << endl;
    }
    else
    {
        cout << "element at 2nd index does not exist!" << endl;
    }

    return 0;
}
