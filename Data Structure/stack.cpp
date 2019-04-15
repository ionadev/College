#include <iostream>
#include <stack>
using namespace std;

int showStack(stack <int>s)
{
	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}

	cout << endl;

	return 0;
}

int main()
{
	stack <int>s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << "Stack: " << endl;
	 showStack(s);
	cout << endl << "Stack Size: " << s.size() << endl;
	cout << "Top: " << s.top() << endl;

	cout << "Popping!" << endl;
	s.pop();

	cout << endl <<  "Stack After Popping" << endl;
	showStack(s);

	return 0;
}