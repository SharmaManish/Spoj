#include<iostream>
#include<stdio.h>
#include<cmath>

int main()
{
    int t;
    float n,m;
    
    scanf("%d",&t);
    
    while(t--)
    {
              scanf("%f%f",&n,&m);
              
              float phi=(1+2.23606798)/2;
              
              long long unsigned int x=(pow(phi,n+1)-pow(1-phi,n+1))/2.236;
              
              long long unsigned int y=(pow(phi,m+2)-pow(1-phi,m+2))/2.236;
              
              long long unsigned int sum=(int)(y-x);
              
              sum=sum%1000000007;
              
              printf("%lld\n",sum);
    }
    
    system ("pause");
    
    return 0;
    
}
              
