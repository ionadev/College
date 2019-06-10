#include <iostream.h> 
using namespace std;

int main()
{
    int numbers[10] = {1,2,4,6,3,2,7,9,0,2}, swap;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(numbers[i] < numbers[j])
            {
                swap = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = swap;
            }
        }
    }

    cout << "Sorted!" << endl;
    for (int k = 0; k < 10; k++)
    {
        cout << numbers[k] << endl;
    }
    
    return 0;
}