#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    unsigned long long int sum;
    
    long long int h;
    
    int N;
    
    scanf("%d",&N);
    
    while(N--)
    {
              sum=0;
              scanf("%lld",&h);
              double d=0;
              d=sum+h/2.0;
              sum=d*(h+1)/3;
              cout<<sum<<endl;
                        
              
    }
    
    system ("pause");
    
    return 0;
    
}
