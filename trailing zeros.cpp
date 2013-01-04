#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int factorialnumber = 0;
	int t;
	
	scanf("%d",&t);
	
	if(t>100000)
                exit(0);
	
	while(t!=0)
	{
	           scanf("%d",&factorialnumber);
	           
	           if(factorialnumber>1000000000)
	                                         exit(0);
	
	           int zero_count = 0;
	
	           for(int five_factor=5; five_factor<=factorialnumber; five_factor*=5)
	           {
		               zero_count += factorialnumber/five_factor;
                       }
	
                       printf("%d\n",zero_count);
	                   
                     t--;
    }
    
    system ("pause");
    
    return 0;
    
}
