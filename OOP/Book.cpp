#include <iostream>
#include <string>
using namespace std;

class Book
{
	private: int price,stock;
			 char author[];
			 bool hasStockSet,hasPriceSet,hasAuthorSet;

			 bool checkInt(int m)
			 {
			 	if(m <= 0)
			 	{
			 		return false;
			 	}
			 	else
			 	{
			 		return true;
			 	}
			 }

    public: 
    	Bank()
    	{
    		price = stock = 0;
    		hasPriceSet = hasStockSet = hasAuthorSet = false;
    	}

    	int setStock(int stk)
    	{
    		bool check;
    		check = checkInt(stk);

    		if(!check)
    		{
    			return 1;
    		}
    		else if (check)
    		{
   				stock += stk;
    			hasStockSet = true;
    			return 0;
    		}
    	}

    	int setPrice(int prc)
    	{
    		bool check;
    		check = checkInt(prc);

    		if(!check)
    		{
    			return 1;
    		}
    		else if (check)
    		{
    			price += prc;
    			hasPriceSet = true;
    			return 0;
    		}
    	}

    	int setAuthor(int &str[])
    	{
    		strcpy(author,*str);
    		hasAuthorSet = true;
    	}
};

int main()
{
	Book
	return 0;
}