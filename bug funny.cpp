#include<iostream>
#include<string>
using namespace std;

int main()
{
    string A,B;
    int a[24];
    
    for(int i=0;i<24;i++)
    {
            cout<<"enter A and B"<<endl;
            cin>>A>>B;
            
            if(A.find(B)!=-1)
            a[i]=1;
            
            else
            a[i]=0;
    }
    
    for(int i=0;i<24;i++)
    {
            cout<<a[i]<<endl;
    }
    
    system ("pause");
    return 0;
}
            
