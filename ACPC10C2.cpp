#include <iostream>
    #include <stack>
    using namespace std;
 
    int main ()
    {
        string a;
        int itung = 1;
        while(cin>>a && a!="()")
        {
                    stack <char> ini;
                    char tanda=' ',r=' ';
                    int n=1;
                    bool x=0,y=0,z=0;
                    for(int i=0; i<a.length(); i++)
                    {
                            if(a[i]==')')
                            {
                               tanda = ini.top();
                               ini.pop();
                               if(tanda=='F') x=0;
                               else if(tanda=='T') x=1;
                               while(1)
                               {
                                       tanda = ini.top();
                                       ini.pop();
                                       if(tanda=='F') y=0;
                                       else if(tanda=='T') y=1;
                                       
                                       if(n%2==0) z = x+y;
                                       else z = x*y;
                                       
                                       tanda = ini.top();
                                       if(tanda=='(')
                                       {
                                            ini.pop();
                                            if(z) r='T';
                                            else r='F';
                                            ini.push(r);
                                            n++;
                                            break;
                                            }
                                       else x = z;
                                       }
                               }
                            else ini.push(a[i]);
                            }
                    if(ini.top()=='T') cout<<itung<<". true"<<endl;
                    else if(ini.top()=='F') cout<<itung<<". false"<<endl;
                    itung++;
                    }
        return 0;
        }
