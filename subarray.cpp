#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int maxi(int x,int y)
{
    return x>y?x:y;
}
int max(int a[],int i,int j)
{
    if(i<j)
    return maxi(max(a,i,(i+j)/2),max(a,(i+j)/2+1,j));
    
    if(i==j)
    return a[i];
}

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int k;
    
    scanf("%d",&k);
    
    for(int i=0;i+k<=n;i++)
    {
            int p=max(a,i,i+k-1);
            
            printf("%d ",p);
    }
    
    printf("\n");
    
    system ("pause");
    
    return 0;
}
            
            
    
