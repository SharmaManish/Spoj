#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
 
using namespace std;
 
int main()
{
 
        string s1="";
        int k=1;
        
        while(true)
        {
                   cin>>s1;
                   stack<int> s;    
                   if(s1=="()")
                   break;
                   
                   int count=0,count2=-1;
                   bool z,x=0;
                   
                   for(int i=0;i<s1.length();i++)
                   {
                           if(s1[i]=='(')
                           {
                                        count++;
                                        s.push(2);
                           }
                           
                           else if(s1[i]=='T')
                           s.push(1);
                           
                           else if(s1[i]=='F')
                           s.push(0);
                           
                           else if(s1[i]==')')
                           {
                                if(count%2==0)
                                {
                                              if(x==0)
                                              {
                                                      z=0;
                                                      x=1;
                                              }
                                              while(s.top()!=2)
                                              {
                                                 z=z+s.top();
                                                 s.pop();
                                              }
                                              
                                }
                                
                                else if(count%2)
                                {
                                    if(x==0)
                                    {
                                            z=1;
                                            x=1;
                                    }
                                    int y=s.top();
                                    while(y!=2)
                                    {
                                                 z=z*y;
                                                 s.pop();
                                                 y=s.top();
                                    }
                                  
                                }
                                
                                if(count2==count)
                                {
                                                 if(z)
                                                 z=0;
                                                 
                                                 else
                                                 z=1;
                                }
                                
                                count--;
                                count2=count;
                                s.pop();
                                s.push(z);
                                x=0;
                        
                           }
                         
                   }
                   
                   if(z==0)
                   cout<<k<<". false"<<endl;
                   
                   else
                   cout<<k<<". true"<<endl;
                   
                   k++;
                   
        }
        
        system ("pause");
        
        return 0;
        
 }
