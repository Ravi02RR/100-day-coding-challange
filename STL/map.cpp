#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // key   value
    m[1] = "babber";
    m[2] = "love";
    m[13] = "kumar";
    m.insert({5, "bheem"});
    
    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);
    if (it != m.end())
    {
        for (; it != m.end(); it++)
        {
            cout << it->first << endl;
        }
    }

    cout << "finding " << m.count(13) << endl;

    // if we want to erase any thing
    m.erase(13);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
