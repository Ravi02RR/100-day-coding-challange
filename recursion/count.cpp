#include <iostream>
using namespace std;

int countone(int n)
{
    int count = 0;
    while (n)
    {
        cout << "Current binary bit: " << (n & 1) << endl;
        count += n & 1;
        cout << "Total count of set bits so far: " << count << endl;
        n >>= 1;
    }
    cout << "Final count of set bits: " << count << endl;
    return count;
}

int main()
{
    countone(5);
    return 0;
}
