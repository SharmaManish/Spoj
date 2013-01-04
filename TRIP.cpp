#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>

using namespace std;

void print(set<string> s)
{
     set<string>::iterator it;
     
     for(it=s.begin();it!=s.end();it++)
     {
                                       cout<<*it<<endl;
     }
     
}

void LCS(string x,int m,string y,int n)
{
     int c[m+1][n+1];
     
     set<string> s[m+1][n+1];
     
     for(int i=0;i<=m;i++)
     {
             c[i][0]=0;
             s[i][0].insert("");
     }
     
     for(int j=0;j<=n;j++)
     {
             c[0][j]=0;
             s[0][j].insert("");
     }
             
     
     for(int i=1;i<=m;i++)
     for(int j=1;j<=n;j++)
     {
             if(x[i-1]==y[j-1])
             {
                               c[i][j]=c[i-1][j-1]+1;
                               set<string>::iterator it;
                               
                               for(it=s[i-1][j-1].begin();it!=s[i-1][j-1].end();it++)
                               {
                                                                                     s[i][j].insert((*it)+x[i-1]);
                               }
                               
             }
             
             else if(c[i-1][j]>c[i][j-1])
             {
                  c[i][j]=c[i-1][j];
                  set<string>::iterator it;
                               
                               for(it=s[i-1][j].begin();it!=s[i-1][j].end();it++)
                               {
                                                                                     s[i][j].insert((*it));
                               }
             }
             
             else if(c[i][j-1]>c[i-1][j])
             {
                  c[i][j]=c[i][j-1];
                  set<string>::iterator it;
                               
                               for(it=s[i][j-1].begin();it!=s[i][j-1].end();it++)
                               {
                                                                                     s[i][j].insert((*it));
                               }
             }
             
             else
             {
                 c[i][j]=c[i][j-1];
                 set<string>::iterator it;
                               
                  for(it=s[i][j-1].begin();it!=s[i][j-1].end();it++)
                  {
                                                                    s[i][j].insert((*it));
                  }
                  
                   for(it=s[i-1][j].begin();it!=s[i-1][j].end();it++)
                   {
                                                                     s[i][j].insert((*it));
                   }
                   
             }
             
     }
     
      print(s[m][n]);
     
}

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              string x;
              string y;
              
              cin>>x>>y;
              
              int m=x.length();
              int n=y.length();
              
              LCS(x,m,y,n);
              
    }
    
    system ("pause");
    
    return 0;
    
}
