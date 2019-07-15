#include <iostream>
using namespace std;

class Ratio
{
	protected:
		float a,b;
	public:
		Ratio() 
		{
			a = b = 0.0;
		}

		void assign(float _a, float _b)	 
		{
			a = _a;
			b = _b;
		}

		Ratio operator + (Ratio &r) 
		{
			Ratio result;
			result.a = ((b * r.a) + (r.b * a));
			result.b =  (r.b * b);
			return result;
		}

		Ratio operator / (Ratio &r)
		{
			Ratio result;
			result.a = (a * r.b);
			result.b = (b * r.a);
			return result;
		}

		void print()
		{
			cout << a << "/" << b << endl;
		}
};

int main()
{	
	Ratio a,b,r,o;
	a.assign(1,2);
	b.assign(2,3);
	r = a + b;
	r.print();
	o = a / b;
	o.print();
	return 0;
}