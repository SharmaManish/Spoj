#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N;
    
    scanf("%d",&N);
    
              long long ans=0;
              for(int i=1;N/i-i+1>0;i++)
              ans=ans+N/i-i+1;
              
              printf("%lld\n",ans);
              
              system ("pause");
              
              return 0;
              
}
