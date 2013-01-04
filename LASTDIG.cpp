#include<iostream>
#include<stdio.h>

using namespace std;

int modexp(int x,int y)
{
    if(y==0)
    return 1;
    int z=modexp(x,y/2);
    if(y%2==0)
    return (z*z)%10;
    else
    return (x*z*z)%10;
}
int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int a,b;
              scanf("%d%d",&a,&b);
              
              int z=modexp(a,b);
              
              printf("%d\n",z);
    }
    
    system ("pause");
    
    return 0;
}
