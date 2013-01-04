#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    
    scanf("%d",&n);
    
    while(n--)
    {
     
     int s;
     scanf("%d",&s);         
    long r=0;
    int x;
    for(int i=1;i<=s;i++)
    {
            scanf("%d",&x);
            if(x&1)r=r^i;
    }
    
    puts(r==0?"Hanks Wins":"Tom Wins");
    
    }
    system ("pause");
    return 0;
}
              
              
              
              
              
