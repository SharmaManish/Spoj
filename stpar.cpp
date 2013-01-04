#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    
    while(true)
    {
               
    int n;
    
    scanf("%d",&n);
    
    if(n==0)
    break;
    
    stack<int> s;
    
    s.push(n+1);
    
    int x,count=1;
    
    bool flag=1;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    {
            while(!s.empty() && count==s.top())
            {
                             s.pop();
                             count++;
            }
            if(count!=a[i])
            {
                           if(s.top()>a[i])
                           s.push(a[i]);
                        
                                             else
                                             flag=0;
            }
            
            else
            count++;
    }
    
    if(flag)
    printf("yes\n");
    
    else
    printf("no\n");
    
    }
    
    system ("pause");
    
    return 0;
}
            
            
            
