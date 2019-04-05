//
// Created by piyush on 1/4/19.
//

#include <iostream>

class ABC {
    private: int data; //So That Only This Class Can Use This
public: void getData()
    {
        std::cout << "Enter The Number:\n"; // Ask For The Number
        std::cin >> data; // Get The value of data from user
        std::cout << "The Given data is: " << data; //Output The Given/Stored Data
    }
};

int main()
{
    ABC obj; // Create An Object Of The Class Or SomeThing
    obj.getData(); //Start The Function From The Class
}