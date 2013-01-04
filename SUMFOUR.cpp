#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int v[4000*4000],v1[4000*4000];

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[4000],b[4000],c[4000],d[4000];
    
    for(int i=0;i<n;i++)
    scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    
    int cnt=0;
    
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
            v[cnt]=a[i]+b[j];
            v1[cnt++]=c[i]+d[j];
    }
    
    sort(v,v+cnt);
    sort(v1,v1+cnt);
    
    long long int ans=0;
    
    int i=0,j=cnt-1;
    int freq1=1,freq2=1;
    
    while(i<cnt && j>=0)
    {
        long long sum=v[i]+v1[j];
        while(i+1<cnt && v[i]==v[i+1]) freq1++, i++;
        while(j-1>=0 && v1[j]==v1[j-1]) freq2++ , j-- ;
 
        if(sum==0)
            ans+=(long long)freq1*(long long)freq2,i++,j--,freq1=1,freq2=1;
        else if(sum>0)
            j-- , freq2=1;        
        else i++, freq1=1;;
    }
                
    
    printf("%lld\n",ans);
    
    system ("pause");
    
    return 0;
}
            
            
    
    
    
    
