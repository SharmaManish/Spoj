#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    
    scanf("%d",&n);
    
    string s1,s2="";
    
    //char a[2][2*N];
    
    cin>>s1;
    char t='E';
    int count[4]={0};
    int len=s1.length();
    for(int i=0;i<len;i=i+2)
    {       
            count[(int)s1[i]-65]++;
            count[(int)s1[i+1]-65]++;
            
            int j=0;
            char x[2];
            for(int k=0;k<4;k++)
            {
                    if(count[k]==0)
                    {
                                   x[j]=k+65;
                                   j++;
                    }
                    
            }
            for(int i=0;i<4;i++)
            count[i]=0;
           
            
            if(t==x[0])
            {
                       s2=s2+x[1]+x[0];
                       t=x[0];
            }
            
            else
            {
                s2=s2+x[0]+x[1];
                t=x[1];
            }
            
    }
    
    cout<<s2<<endl;
    
    system ("pause");
    
    return 0;
}
            
            
            
            
            
            
            



