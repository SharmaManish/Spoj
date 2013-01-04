#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n,W;
              
              scanf("%d%d",&W,&n);
              
              int v[n+1],w[n+1],c[n+1],u[n+1];
              bool flag[n+1];
              bool flag2[n+1];
              
              for(int i=1;i<=n;i++)
              {
                      scanf("%d%d%d",&w[i],&c[i],&u[i]);
                      flag[i]=0;
                      
                      v[i]=c[i]*w[i];       
              }
              
              v[0]=0;w[0]=0;u[0]=0;c[0]=0;
              
              int V[n+1][W+1];
    
              for(int i=0;i<=W;i++)
              V[0][i]=0;
    
              for(int i=1;i<=n;i++)
              {
                      if(u[i]!=0)
                      {
                                 if(flag[u[i]]==0)
                                 {
                                                  w[i]=w[i]+w[u[i]];
                                 }
                                 
                      }
                                 
                      
                      for(int j=1;j<=W;j++)
                      {
                              if(w[i]>j)
                              V[i][j]=V[i-1][j];
            
                              else
                              {
                                  V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
                                  
                                  if(u[i]!=0 && V[i][j]!=V[i-1][j])
                                  flag[u[i]]=1;
                              }
            
                      }
                      
            }
            
            printf("%d\n",V[n][W]);
            
    }
    
    system ("pause");
    
    
    return 0;
    
}
              
              
              
               
               
    
              
              
              
    
