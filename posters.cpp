#include<iostream>
#include<stdio.h>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

short a[10000000];

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              long l,r;
              
              scanf("%d",&n);
              
              long min,max;
              
              scanf("%ld%ld",&l,&r);
              
              min=l;
              max=r;
              
              for(int i=l;i<=r;i++)
              a[i]=(short)0;
              
              for(short i=1;i<n;i++)
              {
                      scanf("%ld%ld",&l,&r);
                      
                      if(min>l)
                      min=l;
                      
                      if(max<r)
                      max=r;
                      
                      for(int j=l;j<=r;j++)
                      a[j]=i;
                      
              }
              
              int count=1;
              sort(a+min,a+max+1);
              for(int i=min+1;i<=max;i++)
              {
                      if(a[i]!=a[i-1])
                      count++;
              }
              
              printf("%d\n",count);    
    }
    
    system ("pause");
    
    return 0;
}
                      
