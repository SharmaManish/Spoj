#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
                              string p;
                              string s;
                              bool flag=0;
                              
                              cin>>p>>s;
                              
                              int pre[m];
                              
                              int k=-1;
                              pre[0]=k;
                              
                              for(int q=1;q<=m-1;q++)
                              {
                                      while(k>-1 && p[k+1]!=p[q])
                                      k=pre[k];
                                      
                                      if(p[k+1]==p[q])
                                      k=k+1;
                                      
                                      pre[q]=k;
                                      
                              }
                              
                              int n=s.length();
                              
                              int q=-1;
                              
                              for(int i=0;i<n;i++)
                              {
                                      while(q>-1 && p[q+1]!=s[i])
                                      q=pre[q];
                                      
                                      if(p[q+1]==s[i])
                                      q=q+1;
                                      
                                      if(q==m-1)
                                      printf("%d\n",(i-m+1)),q=pre[q],flag=1;
                                      
                              }
                              
                              if(!flag)
                              printf("\n\n");
                              
    }
    
    system ("pause");
    
    return 0;
    
}
                                      
                                      
                              
                              
