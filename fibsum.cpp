#include<iostream>
#include<stdio.h>

int main()
{
    long long int a[100001];
    long long int b[100001];
    int t,n,m;

    a[0]=0; a[1]=1;
    
    for(int i=2;i<100001;i++)
    a[i]=a[i-1]+a[i-2];
    
    b[0]=a[100000]+a[99999];
    b[1]=a[100000]+b[0];
    
    for(int i=2;i<100001;i++)
    b[i]=b[i-1]+b[i-2];
    
    scanf("%d",&t);
    
    /*for(int i=0;i<100001;i++)
    {
            cout<<a[i]<<endl;
    }
    for(int j=100001;j<1000000000;j++)
    {
            cout<<b[j-100001]<<endl;
    }
      */      
    
    while(t--)
    {
              long long unsigned int sum=0;
              scanf("%d%d",&n,&m);
              
              if(n>100000)
              {
                          while(n<=m)
                          {
                                    sum=sum+b[n-100001];
                                    n++;
                          }
                          
                          sum=sum%1000000007;
              }
              
              else if(n<100000 && m>100000)
              {
                   while(n<=100000)
                   {
                                  sum=sum+a[n];
                                  n++;
                   }
                   
                   while(n<=m)
                   {
                              sum=sum+b[n-100001];
                              n++;
                   }
                   
                   sum=sum%1000000007;
              }
              
              else
              {
                  while(n<=m)
                  {
                            sum=sum+a[n];
                            n++;
                  }
                  
                  sum=sum%1000000007;
              }
    
              printf("%lld\n",sum);
    
    }
    
    system ("pause");
    
    return 0;
}
