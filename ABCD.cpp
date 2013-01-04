#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n;
    
    scanf("%d",&n);
    
    char a[2][2*n];
    
    for(int i=0;i<2*n;i++)
    {
            cin>>a[0][i];
    }
    
    int count[4]={0};
    
    count[(int)a[0][0]-65]=1;
    count[(int)a[0][1]-65]=1;
    
    for(int i=0,j=0;i<4;i++)
    {
            if(count[i]==0)
            {
                           a[1][j]=(char)(i+65);
                           j++;
            }
    }
    
    //cout<<a[1][0]<<a[1][1]<<endl;
    
    for(int k=2;k<2*n;k=k+2)
    {
            memset(count,0,sizeof(count));
            count[(int)a[0][k]-65]=1;
            count[(int)a[0][k+1]-65]=1;
            
            for(int i=0,j=0;i<4 && j<2;i++)
            {
                    if(count[i]==0)
                    {
                           a[1][k+j]=(char)(i+65);
                           j++;
                    }
            }
            
            if(a[1][k-1]==a[1][k])
            {
                                  char temp=a[1][k];
                                  a[1][k]=a[1][k+1];
                                  a[1][k+1]=temp;
            }
            
    }
    
    for(int i=0;i<2*n;i++)
    cout<<a[1][i];
    
    cout<<endl;
    
    system ("pause");
    
    return 0;
    
}
            
    
    
         
         
         
