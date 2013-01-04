#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct point
{
       int x;
       int y;
};

struct solitare
{
       point p;
       int num;
};

bool calcDistance(point p1,point p2,int R)
{
                   double d=sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p2.y-p1.y)*(p2.y-p1.y));
                   
                   double b=(double)R;
                   
                   if(d<b)
                   return true;
                   
                   return false;
}

int main()
{
    int K,R;
    
    scanf("%d%d",&K,&R);
    
    int M;
    
    scanf("%d",&M);
    
    point a[M];
    
    for(int i=0;i<M;i++)
    scanf("%d%d",&a[i].x,&a[i].y);
    
    int f=(int)pow(2.0,(double)M);
    
    int subset[f][M];
    
    memset(subset,0,sizeof(subset)); 
    
    for(int i=0;i<f;i++)
    {
            for(int j=0;j<M;j++)
            {
                    if(i&1<<j)
                    subset[i][j]=1;
            }
            
    }
    
    int N;
    
    scanf("%d",&N);
    
    solitare s[N];
    
    for(int i=0;i<N;i++)
    scanf("%d%d%d",&s[i].p.x,&s[i].p.y,&s[i].num);
    
    
    
    
    
    
    
    
    
