#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;


long long int min(long long int x,long long int y,long long int z,long long int w)
{
    long long int k=(x<y)?x:y;
    k=(k<z)?k:z;
    k=(k<w)?k:w;
    
    return k;
}

long long int min(long long int x,long long int y,long long int z)
{
    long long int k=(x<y)?x:y;
    k=(k<z)?k:z;
    
    return k;
}

long long int min(long long int x,long long int y)
{
    long long int k=(x<y)?x:y;
    
    return k;
}

int main()
{
    int n,count=0;
    
    while(true)
    {
    
    cin>>n;
    
    count++;
    
    if(n==0)
    break;
    
    long long int cost[n][3];
    
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<3;j++)
            {
                    scanf("%lld",&cost[i][j]);
            }
    }
    
    cost[0][0]=2147483647;
    
    cost[0][2]=cost[0][1]+cost[0][2];
    
    /*cost[0][0]=INF;
    
    cost[0][2]=INF;*/
    
    long long int nodescost[n][3];
    
    for(int i=0;i<3;i++)
    nodescost[0][i]=cost[0][i];
    
    for(int i=1;i<n;i++)
    for(int j=0;j<3;j++)
    {
            if(j == 1)
            nodescost[i][j]=min(nodescost[i-1][j-1],nodescost[i-1][j],nodescost[i-1][j+1],nodescost[i][j-1])+cost[i][j];
            
            else if(j == 2)
            nodescost[i][j]=min(nodescost[i-1][j-1],nodescost[i-1][j],nodescost[i][j-1])+cost[i][j];
            
            else if(j == 0)
            nodescost[i][j]=min(nodescost[i-1][j],nodescost[i-1][j+1])+cost[i][j];
            
    }
    
    //cout<<count<<". "<<nodescost[n-1][1]<<endl;
    //cout<<nodescost[n-1][0]<<endl;
    printf("%d.",count);
    printf(" %lld\n",nodescost[n-1][1]);
    //cout<<nodescost[n-1][1]<<" "<<nodescost[n-1][2]<<endl;
    
    }
    
    system ("pause");
    
    return 0;
    
}
    
    
    
    
    
