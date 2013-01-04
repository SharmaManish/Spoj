#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

map<long long,long long> v;

long long max(long long n,long long k)
{
     return n>k?n:k;
}

long long f(long long n)
{
     if(n==0)
     return 0;
     
     long long x=v[n];
     
     if(x==0)
     {
             x=max(n,f(n/2)+f(n/3)+f(n/4));
             v[n]=x;
     }
     
     return x;
}

int main()
{
    long long n;
    int t=10;
    
    while(t--)
    {
              cin>>n;
              
              long long a=f(n);
              
              cout<<a<<endl;
              
    }
    
    system ("pause");
    
    return 0;
    
}    
              
    
