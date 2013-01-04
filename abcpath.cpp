#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>

using namespace std;

vector<int> count;

struct node
{
       int p;
       int q;
};

void dfs(char** mat,int h,int w,int t1,int t2,int** x,int** previsit,int** postvisit)
{
    x[t1][t2]=true;
    
    previsit[t1][t2]=previsit[t1][t2]+1;
    
    if(((int)mat[t1][t2]-(int)mat[t1+1][t2])==1)
    if(x[t1+1][t2]!=true)
    dfs(mat,h,w,t1+1,t2,x);

int main()
{
    int h,w;
    
    scanf("%d%d",&h,&w);
    
    string s="";
    
    vector<node> v;
    
    char mat[h+2][w+2];
    
    for(int i=0;i<h+2;i++)
    {
            mat[i][0]='(';
            mat[i][w+1]='(';
    }
    
    for(int i=0;i<h+2;i++)
    {
            mat[0][i]='(';
            mat[h+1][i]='(';
    }
    
    for(int i=1;i<h+1;i++)
    for(int j=1;j<w+1;j++)
    {
            cin>>mat[i][j];
            if(mat[i][j]=='A')
            {
                              node temp;
                              temp.p=i;
                              temp.q=i;
                              v.push_back(temp);
            }
    }
            
    bool x[h+2][w+2];
    
    for(int i=0;i<v.size();i++)
    {
            s=" ";
            int t1=v[i].p;
            int t2=v[i].q;
            
            for(int i=0;i<h+2;i++)
            for(int j=0;j<w+2;j++)
                    x[i][j]=0;
            
            for(int i=0;i<h+2;i++)
            for(int j=0;j<w+2;j++)
                    previsit[i][j]=0;
                    
            for(int i=0;i<h+2;i++)
            for(int j=0;j<w+2;j++)
                    postvisit[i][j]=0;
            
            dfs(mat,h+2,w+2,t1,t2,x);
            
            
            
            
            
                                                        
                                                        
            
            
            
            
    
    
    
    system ("pause");
    
    return 0;
}
