#include<iostream>
#include<cstdlib>

using namespace std;
/*
int max(int x,int y)
{
    int z=(x>y)?x:y;
    
    if(z==y)
    {
            
    
    return z;
}
*/

int Knapsack(int v[],int w[],int u[],int c[],int n,int W)
{
             int V[n][W+1];
             
             for(int i=0;i<n;i++)
             {
                     V[i][0]=0;
             }
             
             for(int i=0;i<=W;i++)
             {
                     V[0][i]=0;
             }

             for(int i=1;i<n;i++)
             for(int j=0;j<=W;j++)
             {
                     if(w[i]<=j)
                     {
                         //      V[i][j]=max(V[i-1][j],v[i]+V[i-1][j-w[i]]);
                               
                                if(V[i-1][j]>=(v[i]+V[i-1][j-w[i]]))
                               {
                                                                 V[i][j]=V[i-1][j];
                               }
                               
                               else if(V[i-1][j]<(v[i]+V[i-1][j-w[i]]))
                               {
                                   V[i][j]=v[i]+V[i-1][j-w[i]];
                                   
                                   for(int j=1;j<n;j++)
                                   {
                                                       if(u[j]==i)
                                                       {
                                          
                               
                                                                  w[j]=w[j]-w[i];
                                                                  c[j]=c[j]-c[i];
                                                                  v[j]=w[j]*c[j];
                                                                  }
                                     }
                                   
                               }
                              
                     }
                     
                     else
                         V[i][j]=V[i-1][j];
                         
             }
             
             
             return V[n-1][W];
}
                     
                             

int main()
{
    int n,W;
    int t,N;
    
    cin>>t;
    
    while(t!=0)
    {
    cin>>W>>N;
    
    if(W>32000 || N>60)
               exit(0);
    
    n=N+1;
    
    int v[n];int w[n];int c[n];int u[n];
    
    v[0]=0;
    u[0]=0;
    c[0]=0;
    w[0]=0;
    
    for(int i=1;i<n;i++)
    {
            cin>>w[i]>>c[i]>>u[i];
    }
    
    for(int i=1;i<=N;i++)
    {
            if(u[i]==0)
            {
                       for(int j=1;j<n;j++)
                       {
                               if(u[j]==i)
                               {
                                          w[j]=w[j]+w[i];
                                          c[j]=c[j]+c[i];
                                          }
                       }
                       
            }
    }        
    
    for(int i=1;i<n;i++)
    {
            v[i]=w[i]*c[i];
    }
    
   
    
    int max_value=Knapsack(v,w,u,c,n,W);
    
    cout<<max_value<<endl;
    
    t--;
    
    }
    
    system ("pause");
    return 0;
    
}
    
    
    
    
    
    
    
    
    
    
    
     
    
