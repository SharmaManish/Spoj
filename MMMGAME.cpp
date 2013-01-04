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
              
              int x;
              int r=0;
              bool flag=1;
              
              for(int i=0;i<s;i++)
              {
                      scanf("%d",&x);
                      
                      r=r^x;
                      
                      if(x!=1)
                      flag=0;
              }
              
              if(flag)
              puts(r==0?"John":"Brother");
              else
              puts(r!=0?"John":"Brother");
              
    }
    
    system ("pause");
    
    return 0;
}
                      
