#include<iostream>
#include<stdio.h>

int main()
{
    int t,n,m;
    scanf("%d",&t);
    
    while(t--)
    {
              scanf("%d%d",&n,&m);
              
              if((n%2)!=0 && m>=n)
              printf("R\n");
              
              else if((n%2)==0 && m>=n)
              printf("L\n");
              
              else if((m%2)!=0 && n>m)
              printf("D\n");
              
              else if((m%2)==0 && n>m)
              printf("U\n");
              
    }
    
    system ("pause");
    
    return 0;
}
