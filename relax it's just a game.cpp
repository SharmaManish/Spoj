#include<iostream>
#include<stdio.h>

using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;
    
    return fact(n-1)*n;
}

int main()
{
    int n,m;
    
    while(true)
    {
    
    scanf("%d%d",&n,&m);
    
    if(n==-1 && m==-1)
    break;
    
    int k=n+m;
    
    int x,y,z;
    
    x=fact(k);
    y=fact(n);
    z=fact(m);
    
    if((n+m)==(x/(y*z)))
    {
                        printf("%d+%d=%d",n,m,n+m);
                        printf("\n");
    }
    
    else
    {
        printf("%d+%d!=%d",n,m,n+m);
        printf("\n");
    }
    
    }
    
    system ("pause");
    
    return 0;
    
}
