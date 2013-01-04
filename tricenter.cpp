#include<iostream>
#include<iomanip>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
    
            float a,b,c,dista,distb,distc,alt_a,alt_b,alt_c,R;
            
            cin>>a>>dista>>distb>>distc;
            
            alt_a=3*dista;
            alt_b=3*distb;
            alt_c=3*distc;
                    
            float area=(a*alt_a)/2;
            
            float k=area*2;
            
            b=k/alt_b;
            c=k/alt_c;
            
            R=(a*b*c)/(4*area);
            
            float q=9*R*R-(a*a+b*b+c*c);
            
            float ho=sqrt(q);
            
            float hg=(2*ho)/3;
            
            if(area<0.001)
            {
                    cout<<setprecision(0)<<area;
            }      
            
            else if(area<0.01)
            {
                         cout<<setprecision(1)<<area;
            }
            
            else if(area>=0.01 && area<0.1)
            {
                  cout<<setprecision(2)<<area;
            }
            
            else if(area>=0.1 && area<1)
            {
                  cout<<setprecision(3)<<area;
            }
            
            else if(area<10)
            {
                       
                       cout<<setprecision(4)<<area;
            }
            
            else if(area>10 && area<100)
            {
                 
                 cout<<setprecision(5)<<area;
            }
            
            else if(area>100 && area<1000)
            {
                 cout<<setprecision(6)<<area;
            }
            
            else if(area>1000 && area<10000)
            {
                 
                 cout<<setprecision(7)<<area;
            }
            
            else if(area>10000 && area<100000)
            {
                 
                 cout<<setprecision(8)<<area;
            }
            
            else
            {
                
                 cout<< setprecision(9)<<area;
            }
            
            if((a==b && b==c) || (c==a && b==a) || (c==b && c==a))
                     cout<<"0.000"<<endl;
            
            else
            {
            
            if(hg<0.001)
            {
                        cout<<setprecision(1)<<hg<<endl;
            }
            
            else if(hg<0.01)
            {
                       cout<<setprecision(1)<<hg<<endl;
            }
            
            else if(hg>=0.01 && hg<0.1)
            {
                  cout<<setprecision(2)<<hg<<endl;
            }
            
            else if(hg>=0.1 && hg<1)
            {
                  cout<<setprecision(3)<<hg<<endl;
            }
            
            else if(hg<10)
            {
                       cout<<setprecision(4)<<hg<<endl;
            }
            
            else if(hg>=10 && hg<100)
            {
                cout<<setprecision(5)<<hg<<endl;
            }
            
            else if(hg>=100 && hg<1000)
            {
                 cout<<setprecision(6)<<hg<<endl;
            }
            
            else if(hg>=1000 && hg<10000)
            {
                 cout<<setprecision(7)<<hg<<endl;
            }
            
            else if(hg>=10000 && hg<100000)
            {
                 cout<<setprecision(8)<<hg<<endl;
            }
            
            else
            {
                 cout<<setprecision(9)<<hg<<endl;
            }
            
            }
                               
    }
    
    system ("pause");
    return 0;
}
            
            
            
    
    
