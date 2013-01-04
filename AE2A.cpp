#include<iostream>
#include<stdio.h>

using namespace std;

unsigned long long dp[1000][1000]={0};

int main()
{
    for(int i=0;i<1000;i++)
    dp[0][i]=0;
    
    dp[1][0]=0;
    
    for(int i=1;i<7;i++)
    dp[1][i]=1;
    
    for(int i=7;i<1000;i++)
    dp[1][i]=0;
    
    for(int i=0;i<1000;i++)
    dp[i][0]=0;
    
    for(int i=2;i<1000;i++)
    for(int k=1;k<1000;k++)
    {
            switch(k)
            {
                     case 1: dp[i][k]=dp[i-1][k-1]/6;
                             break;
                     case 2: dp[i][k]=(dp[i-1][k-1]+dp[i-1][k-2])/6;
                             break;
                     case 3: dp[i][k]=(dp[i-1][k-1]+dp[i-1][k-2]+dp[i-1][k-3])/6;
                             break;
                     case 4: dp[i][k]=(dp[i-1][k-1]+dp[i-1][k-2]+dp[i-1][k-3]+dp[i-1][k-4])/6;
                             break;
                     case 5: dp[i][k]=(dp[i-1][k-1]+dp[i-1][k-2]+dp[i-1][k-3]+dp[i-1][k-4]+dp[i-1][k-5])/6;
                             break;
                     default: dp[i][k]=(dp[i-1][k-1]+dp[i-1][k-2]+dp[i-1][k-3]+dp[i-1][k-4]+dp[i-1][k-5]+dp[i-1][k-6])/6;
                             break;
            }
            
    }
    
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
              int n,k;
              
              scanf("%d%d",&n,&k);
              
              if(n<1000 && k<1000)
              {
                             unsigned long long y=(long long)(dp[n][k]*100);
                             
                             cout<<y<<endl;
              }
              
              else
              cout<<"0"<<endl;
              
    }
    
    system ("pause");
    
    return 0;
}
              
              
                                     
                      
    
    
