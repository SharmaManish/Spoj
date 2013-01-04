#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    unsigned long long int n;
    
    cin>>n;
    
    if((n&(n-1))==0)
    printf("TAK\n");
    
    else
    printf("NIE\n");
    
    system ("pause");
    
    return 0;
}
    
    
