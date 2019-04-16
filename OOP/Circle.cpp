#include <iostream>

class Circle
{
	const float pi = 3.14
	public: 
		// float area(float &radius)
		// {
		// 	return (*radius) * (*radius);
		// }

		void area(float radius)
		{
			float result;
			result = pi * (radius*radius);
			cout << "Area is: " << result << endl;
		}

		void circumference(float radius)
		{
			float result;
			result = 2 * pi * radius;
			cout << "Circumference is: " << result << endl;
		}
};

int main()
{
	float i;
	Circle c;

	std::cout << "Enter The Radius of the circle";
	std::cin >> i;

	a.area(i);
	a.circumference(i);
}