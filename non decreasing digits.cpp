#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    
    int c=1;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              scanf("%d%d",&c,&n);
              
              int x=362880;
              
              unsigned long long int y=1;
              
              for(int i=n+1;i<=n+9;i++)
              y=y*i;
              
              y=y/x;
              
              cout<<c<<" "<<y<<endl;
    }
    
    system ("pause");
    
    return 0;
    
}
              
              
              
              
