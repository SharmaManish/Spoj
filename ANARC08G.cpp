#include<iostream>
#include<stdio.h>
#include<cstdlib>

using namespace std;

int main()
{
    int count=0;
    while(true)
    {
               int t;
               count++;
               
               scanf("%d",&t);
               
               if(t==0)
               break;
               
               int a[t][t];
               
               long long sum=0;
               
               for(int i=0;i<t;i++)
               for(int j=0;j<t;j++)
                       {
                                   scanf("%d",&a[i][j]);
                                   sum=sum+a[i][j];
                       }
                
               long long sum2=0;        
               for(int i=0;i<t;i++)
               {
                       long long k=0;
                       for(int j=0;j<t;j++)
                       k=k+a[i][j];
                       
                       for(int j=0;j<t;j++)
                       k=k-a[j][i];
                       
                       sum2=sum2+abs(k);
                       
               }
               
               printf("%d. %lld %lld\n",count,sum,sum2/2);
               
    }
    
    system ("pause");
    
    return 0;
    
}
                       
                       
                       
                       
               
