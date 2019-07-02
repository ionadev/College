#include <iostream>
using namespace std;

void replace(char[]);

int main()
{
    char a[80];
    cin.getline(a, 81);
    replace(a);
    return 0;
}

void replace(char a[])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if(a[i] == ' ') {
            a[i] = '-';
        }
	}

	cout << a << endl;
}
