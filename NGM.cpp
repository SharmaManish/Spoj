#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long n;
    
    scanf("%lld",&n);
    
    if(n%10)
    {
            printf("1\n");
            printf("%d\n",n%10);
    }
    
    else
    printf("2\n");
    
    system ("pause");
    
    return 0;
}
