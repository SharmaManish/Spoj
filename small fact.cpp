#include<stdio.h>
#include<iostream>
#include<cstdlib>

using namespace std;

void fact(int x)
{
     int fac=1;
     
     while(x!=1)
     {
              fac=fac*x;
              x--;
     }
     
     printf("%d\n",fac);
}  

int main()
{
    int t;
    int x;
    
    scanf("%d",&t);
    
    if(t>100)
             exit(0);
    
    while(t!=0)
    {
               scanf("%d",&x);
               if(x>100)
                        exit(0);
               fact(x);
               t--;
    }
    
    system ("pause");
    return 0;
    
}
