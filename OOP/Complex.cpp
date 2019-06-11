#include <iostream>
using namespace std;

// class AddFraction
// {
// 	private: int n1,n2,d1,d2,nn,nd;
// 	public:
// 		AddFraction()
// 		{
// 			n1 = n2= d1 = d2 = nn = nd = 0;
// 		}
// 		void add(int a1,a2,b1,b2)
// 		{
// 			n1 = a1;
// 			n2 = a2;
// 			d1 = b1;
// 			d2 = b2;

// 			nn = (a1*d1) + (a)
// 		}
// }

class Ratio
{
int num,den;
public:
	Ratio()
	{
		num = den = 0;
	}

	void get()
	{
		cout << "Enter The Numerator: ";
		cin >> num;
		cout << endl;

		cout << "Enter The Denominator: ";
		cin >> den;
		cout << endl;
	}

	void show()
	{
		cout << "Num: " << num << " Den: " << den << endl;
	}

	Ratio operator +(Ratio t)
	{
		Ratio nR;
		nR.num = (t.num * den) + (t.den * num);
		nR.den = (t.den * den);

		return(nR);
	}
};

int main()
{
	Ratio o1,o2,o3;
	o1.get();
	o2.get();
	o3 = o1 + o2;
	o3.show();
}