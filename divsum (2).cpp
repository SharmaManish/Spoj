#include <stdio.h>
#include <math.h>

int sum[500001];


int main()
{

	int T,i,n,s,sqrt_n;
	for (i = 1; i <=500000; i++)
		sum[i] =-1;
	scanf("%d", &T);
	while(T--)
	{
		s = 1;
		scanf("%d", &n);
		printf("%d %d \n", n, sum[n]);
		if (sum[n] == -1)
		{
			sqrt_n = (int )sqrt(n); 
			for (i = 2; i <= sqrt_n; i++)
			{
				if (n%i == 0)
					s = s + i + n/i;
			}
			
			if (n == 1)
				s--;
			else
			{
				i--;
				if (i*i == n)
					s = s -i;
			}
			printf("%d\n", s);
			sum[n] = s;
		}
		else
		{
			printf("%d\n", sum[n]);
		}
	}
	return 0;
}
