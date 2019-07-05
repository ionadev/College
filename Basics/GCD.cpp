#include <iostream.h>
#include <conio.h>
using namespace std;


class GCD
{
    private:
    int aa[10],ba[10],c, x;
    public:
    void calculate(int a, int b);
};

void GCD::calculate(int a, int b)
{
    c=0;
    x = 0;
    int i;
    for(i = 0; i< 10; i++)
    {
	aa[i] = 0;
	ba[i] = 0;
    }

    for(i=2;i<a;i++) {
        if(a%i == 0)
	    {
	        aa[c] = i;
	        c++;
	    }
    }

    c=0;

    for(i=2;i<b;i++)
    {
	    if(b%i == 0)
	    {
	        ba[c] = i;
	        c++;
	    }
    }

    for(i=0;i<10;i++)
    {
	    for(int j=0;j < 10;j++)
	    {
	        if(aa[i] == 0 || ba[j] == 0)
	        {
		        continue;
	        }
	        if(aa[i] == ba[j])
	        {
		    if(aa[i] > x)
		{
		   x = aa[i];
		}
	    }
	}
    }
    cout << endl << "GCD: " << x;
}

void main()
{
    clrscr();
    GCD a;
    a.calculate(25,15);

    getch();
}