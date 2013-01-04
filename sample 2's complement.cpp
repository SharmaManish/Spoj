#include<iostream>
#include<stdio.h>

using namespace std;

int NumberOfSetBits(int i)
{
    i = i - ((i >> 1) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
    
    
int main()
{
    
    int t;
    
    scanf("%d",&t);
    
   while(t--)
    {
              int A,B;
              
              scanf("%d%d",&A,&B);
              
              long long int count=0;
              
              for(int j=A;j<=B;j++)
              count=count+NumberOfSetBits(j);
              
              printf("%lld\n",count);
              
    }
              
              
              
    
    system ("pause");
    
    return 0;
    
}
               
