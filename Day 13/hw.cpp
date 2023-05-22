#include <iostream>
using namespace std;

int main()
{
    int amount = 1330;
    int note50 = 0, note100 = 0, note20 = 0, note10 = 0;

    while (amount > 0)
    {
        switch (amount / 50)
        {
        case 0:
            switch (amount / 20)
            {
            case 0:
                switch (amount / 10)
                {
                case 0:
                    cout << "Remaining amount is less than 10, cannot be given in notes." << endl;
                    return 0;
                default:
                    note10 = amount / 10;
                    amount %= 10;
                    break;
                }
                break;
            default:
                note20 = amount / 20;
                amount %= 20;
                break;
            }
            break;
        default:
            note50 = amount / 50;
            amount %= 50;
            break;
        }
    }

    cout << "Number of notes:" << endl;
    cout << "50 rupees: " << note50 << endl;
    cout << "100 rupees: " << note100 << endl;
    cout << "20 rupees: " << note20 << endl;
    cout << "10 rupees: " << note10 << endl;

    return 0;
}
