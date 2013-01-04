#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <stdlib.h>

using namespace std;

int sum[10000];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int cnt=0;
    
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    sum[cnt++]=a[i]+a[j];
    
    qsort (sum, cnt, sizeof(int), compare);

    int cnt3=0;
    int cnt2=1;
    for(int i=1;i<cnt;i++)
    {
            if(sum[i]==sum[i-1])
            cnt2++;
            
            else if(cnt2>cnt3)
            cnt3=cnt2,cnt2=1;
            
            else
            cnt2=1;
    }
    
    printf("%d\n",(cnt3*2));
    
    system ("pause");
    
    return 0;
    
}
            
            
    
