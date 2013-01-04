#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

struct node
{
       int x,y;
};

long dist[25][25]={100000000};

int main()
{
    while(true)
    {
               int h,w;
               
               cin>>w>>h;
               
               if(h==0 && w==0)
               break;
               
               char gh[h+2][w+2];
              
               for(int i=0;i<w+2;i++)
               {
                       gh[0][i]='X';
                       gh[h+1][i]='X';
               }
               
               for(int i=0;i<h+2;i++)
               {
                       gh[i][0]='X';
                       gh[i][w+1]='X';
               }
              
               queue<node> qu;
               
               for(int i=1;i<=h;i++)
               {
                       for(int j=1;j<=w;j++)
                       {
                       cin>>gh[i][j];
                       if(gh[i][j]=='S')
                       {
                                        dist[i][j]=0;
                                        node temp;
                                        temp.x=i;
                                        temp.y=j;
                                        qu.push(temp);
                       }
                       
                       }
               }
               
               
               
               
               
               
    }
    
    system ("pause");
               
    return 0;
}    
               
               
    
