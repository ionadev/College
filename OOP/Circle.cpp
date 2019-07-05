#include <iostream>
using namespace std;

class Circle
{
	const float pi = 3.14;
	float radius,x,y;
	public:
		Circle(float r, float _x, float _y)
		{
			radius = r;
			x = _x;
			y = _y;
		}

		void area(float radius)
		{
			float result;
			result = pi * (radius*radius);
			cout << "Area is: " << result << endl;
		}

		void circumference()
		{
			float result;
			result = 2 * pi * radius;
			cout << "Circumference is: " << result << endl;
		}
};

int main()
{
	float i,x,y;

	std::cout << "Enter The Radius of the circle";
	std::cin >> i;

	std::cout << "Enter The x coordinate of the circle";
	std::cin >> x;

	std::cout << "Enter The y coordinate of the circle";
	std::cin >> y;


	Circle c(i,x,y);

	c.area(i);
	c.circumference();
}