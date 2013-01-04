#include<iostream>
#include<stdio.h>
#include<string.h>
#include<queue>

using namespace std;

bool visited[20000];

struct node
{
       char data[2000];
       int mod;
};

void bfs(int x)
{
      queue<node> m;
       node temp,temp1,temp2;
       
       strcpy(temp.data,"1");
       temp.mod=1%x;
       
       visited[temp.mod]=1;
       
       m.push(temp);
       
       while(!m.empty())
       {
                        node temp=m.front();
       
                        if(temp.mod==0)
                        {
                                       printf("%s\n",temp.data);
                                       break;
                        }
                        
                        visited[temp.mod]=1;
                        
                        m.pop();
                        
                        strcpy(temp2.data,temp.data);
                        
                        strcat(temp.data,"0");
                        
                        strcpy(temp1.data,temp.data);
                        
                        temp1.mod=atoi(temp1.data)%x;
                        
                        if(!visited[temp1.mod])
                        m.push(temp1);
                        
                        strcat(temp2.data,"1");
                        
                        strcpy(temp1.data,temp2.data);
                        
                        temp1.mod=(atoi(temp1.data))%x;
                        
                        if(!visited[temp1.mod])
                        m.push(temp1);
                        
       }
             
}
                        
                        
                        
                        
       
       


int main()
{
    int x,t;
    char* s;
    
    scanf("%d",&t);
    
    while(t--)
    {
              for(int i=0;i<20000;i++)
              visited[i]=0;
              
              scanf("%d",&x);
              
              bfs(x);
    }
    
    system ("pause");
    return 0;
    
}
    
    
