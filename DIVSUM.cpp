#include<stdio.h>
#include<math.h>

main()
{
	int t;int x,i=2;
		
 
	scanf("%d",&t);
	
	while(t!=0) 
	{
		long sum=1;
		
		scanf("%d",&x);
		
		if(x==1)
			sum=0;
		
		for(;i<sqrt(x);i++)
		{
			if((x%i)==0)
				sum=sum+i+(x/i);
				
		}
		
		if((x/i)==i)
			sum=sum+i;
		
		printf("%d\n",sum);
		
		t--;
	}
}
