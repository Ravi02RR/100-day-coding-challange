// write a class for rational number (p/q) with overloading + and << operator

#include <iostream>
using namespace std;

class Rational
{
private:
    int p;
    int q;

public:
    Rational(int a, int b)
    {
        this->p = a;
        this->q = b;
    }
    Rational(Rational &r)
    {
        this->p = r.p;
        this->q = r.q;
    }
};
int main()
{
    Rational N(1, 2);
}