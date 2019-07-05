#include <iostream>
using namespace std;

class Ratio
{
    double numerator, denominator;
    public:

    void assign(double _numerator, double _denominator)
    {
        numerator = _numerator;
        denominator = _denominator;
        print();
    }

    void convert()
    {
        cout << "Conversion is: " << (numerator / denominator) << endl;
    }

    void invert()
    {
        double _numertator;
        _numertator = numerator;
        numerator = denominator;
        denominator = _numertator;
        print();
    }

    void print()
    {
        cout << "The Ratio is now: " << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Ratio r;
    r.assign(12.0,13.0);
    r.convert();
    r.invert();
}
