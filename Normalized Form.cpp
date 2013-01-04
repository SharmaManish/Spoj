#include<iostream>
#include<cstring>
#include<list>
#include<stdio.h>

using namespace std;

struct node
{
       public:
       int val;
       bool b;
};

int main()
{
    string s;
    
    while(true)
    {
               list<node> l1;
               int count=0;
               
               int b1=-1;
               
               cin>>s;
               
               if(s=="()")
               break;
               
               for(int i=0;i<s.length();i++)
               {
                       if(s[i]=='(')
                       {
                                    count++;
                                    node temp;
                                    
                                    temp.val=-1;
                                    temp.b=0;
                                    
                                    l1.push_front(temp);
                       }
                       
                       else if(s[i]=='T')
                       {
                                    node temp;
                                    
                                    temp.val=count;
                                    temp.b=1;
                                    
                                    l1.push_front(temp);
                       }
                       
                       else if(s[i]=='F')
                       {
                            node temp;
                            
                            temp.val=count;
                            
                            temp.b=0;
                            
                            l1.push_front(temp);
                       }
                       
                       else if(s[i]==')')
                       {
                            int count2=-1;
                            
                            do
                            {
                                             node t1=l1.front();
                                             
                                             count2=t1.val;
                                             
                                             if((t1.val)%2==0)
                                             {
                                                            if(b1==-1)
                                                            b1=0;
                                                            
                                                            b1=t1.b|b1;
                                             }
                                             
                                             else
                                             {
                                                 if(b1==-1)
                                                 b1=1;
                                                 
                                                 b1=t1.b|b1;
                                                 
                                             }
                            
                                             count--;
                                             
                                             l1.pop_front();
                                             
                            } while(count2!=-1);
                            
                            node temp;
                            
                            temp.val=count;
                            temp.b=b1;
                            
                            l1.push_front(temp);
                            
                            
                       }
                       
               }
               
               if(b1==1)
               printf("true\n");
               
               else if(b1==0)
               printf("false\n");
               
    }
    
    system ("pause");
    
    return 0;
    
}
                       
                       
                               
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
                       
               
    
    
