#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "sudh"));
    m.insert(pair<int, string>(2, "ravi"));
    m.insert(pair<int, string>(3, "khan"));
    m.insert(pair<int, string>(4, "kumar"));
    m.insert(pair<int, string>(5, "ranjan"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout << "using map function : " << endl;
    cout << itr1->first << " " << itr1->second << endl;
}