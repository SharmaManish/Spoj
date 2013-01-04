#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

struct edge
{
       int u;
       int v;
       int key;
};

void merge(edge e[],int p,int q,int r)
{
     int n1=q-p+1;
     int n2=r-q;
     
     edge l[n1+1],l2[n2+1];
     
     l[n1].key=10000000;
     l2[n2].key=10000000;
     
     for(int i=0;i<n1;i++)
     {
             l[i].key=e[p+i].key;
             l[i].u=e[p+i].u;
             l[i].v=e[p+i].v;
     }
     
     for(int i=0;i<n2;i++)
     {
             l2[i].key=e[q+i+1].key;
             l2[i].u=e[q+i+1].u;
             l2[i].v=e[q+i+1].v;
     }
     
     int i=0;int j=0;
     
     for(int k=p;k<=r;k++)
     {
             if(l[i].key<=l2[j].key)
             {
                            e[k].key=l[i].key;
                            e[k].u=l[i].u;
                            e[k].v=l[i].v;
                            i++;
             }
             
             else
             {
                 e[k].key=l2[i].key;
                 e[k].u=l2[i].u;
                 e[k].v=l2[i].v;
                 j++;
             }
     }
     
}
     

void mergeSort(edge e[],int p,int r)
{
    if(p<r)
    {
           int q=(p+r)/2;
           mergeSort(e,p,q);
           mergeSort(e,q+1,r);
           merge(e,p,q,r);
    }
}

int main()
{
    int m,n;
    
    scanf("%d%d",&n,&m);
    
    edge e[m];
    
    int a,b,c;
    
    for(int i=0;i<m;i++)
    {
            scanf("%d%d%d",&a,&b,&c);
            
            e[i].u=a;
            e[i].v=b;
            e[i].key=c;
    }
    
    mergeSort(e,0,m-1);
    
    int s[n+1];
    
    for(int i=0;i<n+1;i++)
    s[i]=i;
    
    vector<int> bigset;
    
    for(int i=0;i<m;i++)
    {
            if(s[e[i].u]!=s[e[i].v])
            {
                                    bigset.push_back(e[i].key);
                                    s[e[i].u]=-1;
                                    s[e[i].v]=-1;
            }
            
    }
    
    long long int sum=0;
    
    for(int i=0;i<bigset.size();i++)
    sum=sum+bigset[i];
    
    printf("%lld",sum);
    
    system ("pause");
    
    return 0;
    
}
                                    
    
    
    
    
    
