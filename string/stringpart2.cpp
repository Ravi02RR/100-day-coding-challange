#include <iostream>
#include <string>
using namespace std;
int neighbour(const string &s)
{
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1] &&s[i] != s[i -1 ])
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    string s = "abbcdeffghh";
    cout << neighbour(s); // Output: 3
    return 0;
}