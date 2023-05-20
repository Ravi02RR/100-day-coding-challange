#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int power = 1;

    while (n != 0)
    {
        int bit = n % 2;
        ans += bit * power;
        n /= 2;
        power *= 10;
    }

    cout << "Binary representation: " << ans << endl;
    return 0;
}
