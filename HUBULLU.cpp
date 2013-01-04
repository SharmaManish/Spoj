#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long t;
    
    scanf("%lld",&t);
    
    while(t--)
    {
              long n;int k;
              
              scanf("%ld %d",&n,&k);
              
              puts(k==0?"Airborne wins.":"Pagfloyd wins.");
    }
    
    system ("pause");
    
    return 0;
    
}
