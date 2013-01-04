#include<iostream>
#include<stdio.h>

using namespace std;

long min(long long x[],int n)
{
     long long q=x[0];
     for(int i=1;i<n;i++)
     {
             if(q>x[i])
             q=x[i];
     }
     
     return q;
}

int LCS(long long x[],int n,long long y[],int m)
{
    int c[n+1][m+1];
    
    for(int i=1;i<=n;i++)
    c[i][0]=0;
    
    for(int j=0;j<=m;j++)
    c[0][j]=0;
    
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
            if(x[i-1]==y[j-1])
            c[i][j]=c[i-1][j-1]+1;
            
            else if(c[i-1][j]>=c[i][j-1])
            c[i][j]=c[i-1][j];
            
            else
            c[i][j]=c[i][j-1];
    }
    
    return c[n][m];
}

int main()
{
    int n,m;
    
    scanf("%d%d",&n,&m);
    
    long long x[n],y[m];
    
    for(int i=0;i<n;i++)
            cin>>x[i];
            
    for(int j=0;j<m;j++)
            cin>>y[j];
    
          
    long long k=min(x,n);
    long long p=min(y,m);
    
    for(int i=0;i<n;i++)
            x[i]=x[i]-k;
            
    for(int j=0;j<m;j++)
            y[j]=y[j]-p;
            
    int len=LCS(x,n,y,m);
    
    printf("%d\n",len+1);
    
    system ("pause");
    
    return 0;
    
}
            
    
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
