#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    int t,count=1;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n,m;
              
              scanf("%d%d",&n,&m);
              
              int a[n][n];int start;
              
              bool flag=true,flag2=true;
              
              int dist[n];
              
              for(int i=0;i<n;i++)
              dist[i]=0;
              
              for(int i=0;i<n;i++)
              for(int j=0;j<n;j++)
              {
                      a[i][j]=0;
              }
              
              int b,c;
              
              for(int i=0;i<m;i++)
              {
                      scanf("%d%d",&b,&c);
                      
                      if(flag)
                      {
                              start=b-1;
                              flag=false;
                      }
                      
                      a[b-1][c-1]=1;
                      a[c-1][b-1]=1;
              }
              
              queue<int> q;
              
              q.push(start);
              
              dist[start]=-1;
              
              while(!q.empty())
              {
                               int x=q.front();
                               
                               q.pop();
                               
                               for(int i=0;i<n;i++)
                               {
                                       if(a[x][i])
                                       {
                                                  if(dist[i]==dist[x])
                                                  {
                                                                      flag2=false;
                                                                      break;
                                                  }
                                                  
                                                  else if(dist[i]==0)
                                                  {
                                                      if(dist[x]==-1)
                                                      {
                                                                     dist[i]=-2;
                                                                     q.push(i);
                                                      }
                                                      
                                                      else
                                                      {
                                                          dist[i]=-1;
                                                          q.push(i);
                                                      }
                                                      
                                                  }
                                                  
                                       }
                               }
                               
                               if(flag2==false)
                               break;
                               
                               
                               if(q.empty())
                               {
                                            for(int j=0;j<n;j++)
                                            {
                                                    if(dist[j]==0)
                                                    {
                                                                  q.push(j);
                                                                  dist[j]=-1;
                                                                  break;
                                                    }
                                                    
                                            }
                                            
                               }
                               
              }
              
              if(!flag2)
              printf("Scenario #%d:\nSuspicious bugs found!\n",count);
              
              else
              printf("Scenario #%d:\nNo suspicious bugs found!\n",count);
              
              count++;
              
    }
    
    system ("pause");
    
    return 0;
    
}
              
              
              
              
              
    
