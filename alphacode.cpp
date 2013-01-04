#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

bool flag=0;

string s1[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26"};

int len=26;

bool find(string s2)
{
     for(int i=0;i<26;i++)
     if(s2==s1[i])
     return true;
     
     return false;
}

int findwords(string s,int n)
{
    if(n==1)
    return 0;
    
    int count=1;
    
    if(flag)
    if(find(s.substr(n-1,2)))
    count++;
    
    flag=1;
    
    return findwords(s,n-1)+count;
            
}

int main()
{
    string s;
    
    while(true)
    {
               cin>>s;
               
               if(s=="0")
               break;
               
               if(s.find("0")!=-1)
               printf("0\n");
               
               else
               {
                   unsigned long long int k=findwords(s,s.length());
                   cout<<k<<endl;
               }
               
    }
    
    system ("pause");
    
    return 0;
    
}
               
   
