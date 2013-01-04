#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int min(int x,int y,int z)
{
    int k=(x>y)?y:x;
    k=(k>z)?z:k;
    
    return k;
}

int diff(char p,char q)
{
    if(p==q)
    return 0;
    
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              string s1,s2;
              
              cin>>s1>>s2;
              
              int m=s1.length();
              int n=s2.length();
              
              int e[m+1][n+1];
              
              for(int i=0;i<=m;i++)
              e[i][0]=i;
              
              for(int j=1;j<=n;j++)
              e[0][j]=j;
              
              for(int i=1;i<=m;i++)
              for(int j=1;j<=n;j++)
              {
                      e[i][j]=min(e[i-1][j]+1,e[i][j-1]+1,e[i-1][j-1]+diff(s1[i-1],s2[j-1]));
                      
                      if(i>1 && j>1 && s1[i-1]==s2[j-2] && s1[i-2]==s2[j-1])
                      {
                             e[i][j]=min(e[i][j],e[i-2][j-2]+diff(s1[i-1],s2[j-1]));
                      }
                      
              }
                      
              printf("%d\n",e[m][n]);
              
    }
    
    system ("pause");
    return 0;
}
              

