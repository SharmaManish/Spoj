#include <iostream>
#include<stdio.h>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

struct edge
{
       int u;
       int v;
       int key;
};

struct node
{
       int val;
       node* parent;
};

node* createnode(int k)
{
     node* temp=new node();
     temp->parent=NULL;
     temp->val=k;
     
     return temp;
}

void create_set(node* np)
{
     np->parent=np;
}

void merge(edge[],int,int,int,int);

void merge_sort(edge e[],int low,int high,int m)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  merge_sort(e,low,mid,m);
  merge_sort(e,mid+1,high,m);
  merge(e,low,mid,high,m);
 }
}
void merge(edge e[],int low,int mid,int high,int m)
{
 int h,i,j,k;
 edge b[m+1];
 h=low;
 i=low;
 j=mid+1;

 while((h<=mid)&&(j<=high))
 {
  if(e[h].key<=e[j].key)
  {
   b[i].key=e[h].key;
   b[i].u=e[h].u;
   b[i].v=e[h].v;
   h++;
  }
  else
  {
   b[i].key=e[j].key;
   b[i].u=e[j].u;
   b[i].v=e[j].v;
   j++;
  }
  i++;
 }
 if(h>mid)
 {
  for(k=j;k<=high;k++)
  {
   b[i].key=e[k].key;
   b[i].u=e[k].u;
   b[i].v=e[k].v;
   i++;
  }
 }
 else
 {
  for(k=h;k<=mid;k++)
  {
   b[i].key=e[k].key;
   b[i].u=e[k].u;
   b[i].v=e[k].v;
   i++;
  }
 }
 for(k=low;k<=high;k++) {
                        e[k].key=b[k].key;e[k].u=b[k].u;e[k].v=b[k].v;}
}



int main()
{
    int m,n;
    
    scanf("%d%d",&n,&m);
    
    edge e[m+1];
    
    int a,b,c;
    
    for(int i=0;i<m;i++)
    {
            scanf("%d%d%d",&a,&b,&c);
            
            e[i+1].u=a;
            e[i+1].v=b;
            e[i+1].key=c;
    }
    
    merge_sort(e,1,m,m);
    
    node* s[n+1];
    
    int count=-1;
    
    for(int i=0;i<n+1;i++)
    {
            s[i]=createnode(i);
            create_set(s[i]);
    }
    
    vector<int> bigset;
    
    
    
    for(int i=1;i<=m;i++)
    {
            if(s[e[i].u]!=s[e[i].v])
            {
                                    bigset.push_back(e[i].key);
            }
            
    }
    
    long long int sum=0;
    
    for(int i=0;i<bigset.size();i++)
    sum=sum+bigset[i];
    
    printf("%lld",sum);
    
    system ("pause");
    
    return 0;
}
