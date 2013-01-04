#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,n,k;
    
    scanf("%d\n",&t);
    
    while(t--)
    {
              scanf("%d%d\n",&n,&k);
              long long unsigned int a[n];
              
              for(int i=0;i<n;i++)
              scanf("%lld",&a[i]);
              
              while(k--)
              {
                        long long unsigned int count1=0,count2=0,count3=a[0];
                        count2=a[0];
                        a[0]=a[0]^a[n-1]^a[1];
                        
                        for(int i=1;i<n-1;i++)
                        {
                                    count2=a[i];
                                    a[i]=a[i]^count1^a[i+1];
                                
                                count1=count2;
                        }
                        
                        a[n-1]=a[n-1]^count1^count3;
              }
              
              for(int i=0;i<n;i++)
              printf("%lld ",a[i]);
    }
    
    system ("pause");
    
    return 0;
    
}
