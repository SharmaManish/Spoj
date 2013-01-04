#include<iostream>
#include<stdio.h>
#include<cstdlib>

int main()
{
    int n,t,a,b,c,j,k,boo=1;
    char* s;
    
    scanf("%d",&t);
    
    while(t--)
    {
              scanf("%d",&n);
    
              int cost[n-1][3];
              
              for(int i=0;i<n-1;i++)
              scanf("%d%d%d",&a,&b,&c);
              
              while(boo)
              {
                              scanf("%s",&s);
                              
                              if(s[0]='C')
                              {
                                          char x=s[7];
                                          char y=s[9];
                                          j=atoi(x);
                                          k=atoi(y);
                                           cost[j+1][2]=k;
                              }
                              
                              else if(s[0]='Q')
                              {
                                   char* x=s[6];
                                   char* y=s[8];
                                   j=atoi(x);
                                   k=atoi(y);
                                   for(int i=0;i<n-1;i++)
                                   {
                                           if(cost[i][0]==j && cost[i][1]==k)
                                           printf("%d\n",cost[i][2]);
                                                            
                                   }
                                   
                              }
                              
                              else if(s=="DONE")
                              boo=0;
                              
              }
              
              printf("\n");
              
    }
    
    system ("pause");
    
    return 0;
}
