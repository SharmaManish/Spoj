#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              scanf("%d",&n);
              
              long long sum=0;
              bool flag=1;
              int min=0;
              int count=0;
              long long num=0;
              int x;
              
              for(int i=0;i<n;i++)
              {
                      scanf("%d",&x);
                      
                      if(x>0)
                      {
                                sum=sum+x;
                                flag=0;
                      }
                      
                      if(x==0)
                      num++;
                      
                      if(min>x)
                      min=x;
                      
                      if(min==x)
                      count++;
                      
              }
              
              if(flag)
              printf("%d %lld\n",min,(count+num));
              
              else
              printf("%lld %lld\n",sum,(num+1));
              
    }
    
    system ("pause");
    
    return 0;
    
}
                      
                      
                      
                      
                      
                      
                      
                      
