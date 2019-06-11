#include <iostream>
using namespace std;

class Product
{
protected:
	char name[20];
	int stock,price;
public:
	void set() 
	{	
		cout << "Enter The Product name:" << endl;
		cin.getline(name , 20);
		cout << endl <<  "Enter The Stock of the Product: " << endl;
		cin >> stock;
		cout << endl;
		cout << "Enter The Price: " << endl;
		cin >> price;
	}
};

class Sales : public Product
{
public:
	void sell()
	{
		if(stock != 0) 
		{
			--stock;
			cout << "Thanks For Purchasing, Rs." << price << " has been deducted from your account!" << endl;
			cout << "Now, The Stock is " << stock << "!";
		} 
		else 
		{
			cout << "No Stock!" << endl;
		}
	}
};

int main()
{
	Sales o;
	char want;
	o.set();
	do 
	{
		o.sell();
		cout << "Do You Want To Buy More?\n\ty for yes\n\tAny key For No" << endl;
		cin >> want;
	}
	while(want == 'y');
	return 0;
}