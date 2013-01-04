#include<iostream>
#include<stdio.h>

using namespace std;

int wl[1000001];

int main()
{
    int k,l,m;
    
    scanf("%d%d%d",&k,&l,&m);
    
    wl[0]=0;
    
    for(int i=1;i<=1000000;i++)
    {
            if(wl[i-1]==0)
            wl[i]=1;
            
            else if((i-k)>=0 && wl[i-k]==0)
            wl[i]=1;
            
            else if((i-l)>=0 && wl[i-l]==0)
            wl[i]=1;
    }
    long y;
    for(int i=0;i<m;i++)
    {
            scanf("%ld",&y);
            
            if(wl[y])
            printf("A");
            
            else
            printf("B");
    }
    
    printf("\n");
    
    system ("pause");
    
    return 0;
}
    
