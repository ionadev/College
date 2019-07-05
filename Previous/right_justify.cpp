#include <iostream>
#include <string.h>
using namespace std;

 
int
main () 
{
  
char line[5][100];
  
int i, j, len, maxlen = 0;
  
for (i = 0; i <= 4; i++)
    
    {
      
cin.getline (line[i], 99, '\n');
      
len = strlen (line[i]);
      
if (len > maxlen)
	
maxlen = len;
    
}
  
for (i = 0; i <= 4; i++)
    
    {
      
len = strlen (line[i]);
      
for (j = 1; j <= maxlen - len; j++)
	
	{
	  
cout << " ";
	
}
      
cout << line[i] << endl;
    
}
  
return 0;

}
