#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

struct node
{
       char val;
       char nextval;
};

struct node2
{
       int p;
       int r;
};

int main()
{
    while(true)
    {
               vector<node2> v;
               
               int h,w;
    
               cin>>h>>w;
    
               if(h==0 && w==0)
               break;
    
               node mat[h+2][w+2];
               
               for(int i=0;i<h+2;i++)
               for(int j=0;j<h+2;j++)
                       mat[i][j].val='(';
    
               for(int i=1;i<h+1;i++)
               for(int j=1;j<w+1;j++)
               {
                             cin>>mat[i][j].val;
                             
                             int x=mat[i][j].val;
                             x++;
                             mat[i][j].nextval=x;
                             
                             
                             if(mat[i][j].val=='A')
                             {
                                               node2 temp;
                                               temp.p=i;
                                               temp.r=j;
                                               v.push_back(temp);
                             }
               }
               
               int max=0;
               
               for(int i=0;i<v.size();i++)
               {
                      int visited[h+2][w+2];
                      int key[h+2][w+2];
               
                      for(int k=0;k<h+2;k++)
                      {
                              for(int j=0;j<w+2;j++)
                              {
                                      visited[k][j]=0;
                                      key[k][j]=0;
                              }
                      }
                      
                      queue<node2> q;
                      
                      q.push(v[i]);
                      
                      int key_max=0;
                      
                      while(!q.empty())
                      {
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)-1][(v[i].r)-1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)-1;
                              temp2.r=(v[i].r)-1;
                              
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)+1][(v[i].r)-1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)+1;
                              temp2.r=(v[i].r)-1;
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)+1][(v[i].r)+1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)+1;
                              temp2.r=(v[i].r)+1;
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)][(v[i].r)-1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p);
                              temp2.r=(v[i].r)-1;
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)][(v[i].r)+1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p);
                              temp2.r=(v[i].r)+1;
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)-1][(v[i].r)].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)-1;
                              temp2.r=(v[i].r);
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)+1][(v[i].r)].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)+1;
                              temp2.r=(v[i].r);
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      if(mat[v[i].p][v[i].r].nextval==mat[(v[i].p)-1][(v[i].r)+1].nextval)
                      {
                              node2 temp2;
                              temp2.p=(v[i].p)-1;
                              temp2.r=(v[i].r)+1;
                              if(visited[temp2.p][temp2.r]==0)
                              {
                                                              q.push(temp2);
                                                              visited[temp2.p][temp2.r]=1;
                                                              key[temp2.p][temp2.r]=key[v[i].p][v[i].r]+1;
                                                              
                                                              key_max=(key_max>key[temp2.p][temp2.r])?key_max:key[temp2.p][temp2.r];
                              }
                      }
                      
                      q.pop();
                      }
                      
                      max=(max>key_max)?max:key_max;
                      
               }
               
    }
    
    system ("pause");
    
    return 0;
    
}
                      
                      
               
                       
                       
            
    
    
