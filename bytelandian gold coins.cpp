#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

map<long long,unsigned long long> mymap;

unsigned long long max(long long n,unsigned long long k)
{
     return ((n>k)?n:k);
}

unsigned long long int f(long long n)
{
         if(n==0)
         return 0;
         
         unsigned long long int a=mymap[n];
     
         if(a==0)
         {
                 unsigned long long int a=max(n,f(n/2)+f(n/3)+f(n/4));
                 mymap[n]=a;
         }
     
         return a;
     
}

int main()
{
    long long n,t=10;
    
    mymap.clear();
    
    while(t--)
    {
              cin>>n;
              unsigned long long int b=f(n);
              
              cout<<b<<endl;
              
    }
    
    system ("pause");
    
    return 0;
    
}
    
    
    
    
    
    
    
