#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              scanf("%d",&n);
              
              bool flag=1;
              vector<string> left,right;
              string s;
              
              for(int i=0;i<n;i++)
              {
                      cin>>s;
                      
                      if(s[0]!='#')
                      bool flag=0;
                      
                      if(flag==0)
                      left.push_back(s);
                      
                      else if(flag)
                      right.push_back(s);
              }
              
              for(int i=0;i<left.size();i++)
              cout<<left[i]<<" ";
              
              
              /*string s2="";
              
              for(int i=left.size()-1;i>=0;i--)
              {
                      s2=s2+left[i]+" ";
              }
              
              for(int i=0;i<right.size()-1;i++)
              {
                      s2=s2+right[i]+" ";
              }
              
              s2=s2+right[right.size()-1];
              
              cout<<s2<<endl;*/
              
    }
    
    system ("pause");
    
    return 0;
    
}
                      
                      
