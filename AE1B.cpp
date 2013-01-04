#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
    
    int x[a];
    
    for(int i=0;i<a;i++)
    scanf("%d",&x[i]);
    
    sort(x,x+a);
    
    int sum=0,k=b*c,count=0;
    
    for(int i=a-1;i>=0;i++)
    {
            sum=sum+x[i];
            
            if(sum>k)
            break;
            
            count++;
    }
    
    printf("%d",count);
    
    system ("pause");
    
    return 0;
    
}
