#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s = "my name is ravi ";
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        cout << temp<<"\n";
    }

    return 0;
}