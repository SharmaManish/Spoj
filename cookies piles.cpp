#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,n,a,d;
    
    scanf("%d",&t);
    
    while(t--)
    {
            scanf("%d%d%d",&n,&a,&d);
            
            int now=0;
            
            while(n>0)
            {
                   now=now+a;
                   a=a+d;
                   n--;
            }
            
            printf("%d\n",now);
            
    }
    
    system ("pause");
    
    return 0;
}     
