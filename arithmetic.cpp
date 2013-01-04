#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>

using namespace std;

void printhipen(int x)
{
     for(int i=0;i<x;i++)
             cout<<"-";
             
     cout<<endl;
     
}

void add(string x,int y)
{
     
     string str1=x.substr(0,y);
     string str2=x.substr(y+1);
     
     if(str1[0]=='0' || str2[0]=='0')
                     exit(0);
     
     if(str1.length()>500 || str2.length()>500)
            exit(0);
     
     char* cstr1;char* cstr2;
     
     cstr1=new char[str1.size()+1];
     cstr2=new char[str2.size()+1];
     
     strcpy(cstr1,str1.c_str());
     strcpy(cstr2,str2.c_str());
     
     int p=atoi(cstr1);
     int q=atoi(cstr2);
     
     int z=p+q;
     
     int anslen=0,j;
     
     j=z;
     
     while(j!=0)
     {
                j=j/10;
                
                anslen++;
                
     }          
                
     
     str2="+"+str2;
     
     if(str2.length()>=str1.length() && str2.length()>=anslen)
     {
                                    int k=str2.length();
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<str2<<endl;
                                    printhipen(str2.length());
                                    cout<<setw(k)<<z<<endl;
                                    
                                    cout<<endl;
     }
     
     else if(str2.length()<str1.length() && str1.length()>=anslen)
     {
                                    int k=str1.length();
                                    cout<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(str1.length());
                                    cout<<setw(k)<<anslen<<endl;
                                    
                                    cout<<endl;
                                    
     }
     
     else if(str2.length()>=str1.length() && str2.length()<anslen)
     {
                                    int k=anslen;
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(anslen);
                                    cout<<z<<endl;
                                    
                                    cout<<endl;
     }    
     
}

void sub(string x,int y)
{
     string str1=x.substr(0,y);
     string str2=x.substr(y+1);
     
     if(str1[0]=='0' || str2[0]=='0')
                     exit(0);
     
     char* cstr1;char* cstr2;
     
     cstr1=new char[str1.size()+1];
     cstr2=new char[str2.size()+1];
     
     strcpy(cstr1,str1.c_str());
     strcpy(cstr2,str2.c_str());
     
     int p=atoi(cstr1);
     int q=atoi(cstr2);
     
     if(p<q || str1.length()>500 || str2.length()>500)
            exit(0);
     
     int z=p-q;
     
     int anslen=0,j;
     
     j=z;
     
     while(j!=0)
     {
                j=j/10;
                
                anslen++;
                
     }          
                
     
     str2="-"+str2;
     
     if(str2.length()>=str1.length() && str2.length()>=anslen)
     {
                                    int k=str2.length();
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<str2<<endl;
                                    printhipen(str2.length());
                                    cout<<setw(k)<<z<<endl;
                                    
                                    cout<<endl;
     }
     
     else if(str2.length()<str1.length() && str1.length()>=anslen)
     {
                                    int k=str1.length();
                                    cout<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(str1.length());
                                    cout<<setw(k)<<anslen<<endl;
                                    
                                    cout<<endl;
                                    
     }
     
     else if(str2.length()>=str1.length() && str2.length()<anslen)
     {
                                    int k=anslen;
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(anslen);
                                    cout<<z<<endl;
                                    
                                    cout<<endl;
     }    
}

void mult(string x,int y)
{
     string str1=x.substr(0,y);
     string str2=x.substr(y+1);
     
     if(str1[0]=='0' || str2[0]=='0')
                     exit(0);
     
     char* cstr1;char* cstr2;
     
     cstr1=new char[str1.size()+1];
     cstr2=new char[str2.size()+1];
     
     strcpy(cstr1,str1.c_str());
     strcpy(cstr2,str2.c_str());
     
     int p=atoi(cstr1);
     int q=atoi(cstr2);
     
     if(str1.length()>500 || str2.length()>500)
            exit(0);
     
     int z=p*q;
     
     int anslen=0,j;
     
     j=z;
     
     while(j!=0)
     {
                j=j/10;
                
                anslen++;
                
     }          
                
     
     str2="*"+str2;
     
     if(str2.length()>=str1.length() && str2.length()>=anslen)
     {
                                    int k=str2.length();
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<str2<<endl;
                                    printhipen(str2.length());
                                    int count=0;
                                    int cal;
                                    while(q!=0)
                                    {
                                               cal=p*(q%10);
                                                       
                                                cout<<setw(k-count)<<cal<<endl;               
                                    
                                                    q=q/10;
                                                    count++;
                                    }
                                    
                                    if(count!=1)
                                    {
                                    printhipen(str2.length());
                                    cout<<setw(k)<<z<<endl;
                                    }
                                    
                                    cout<<endl;
     }
     
     else if(str2.length()<str1.length() && str1.length()>=anslen)
     {
                                    int k=str1.length();
                                    cout<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(str1.length());
                                    int count=0;
                                    int cal;
                                    while(q!=0)
                                    {
                                               cal=p*(q%10);
                                                       
                                                cout<<setw(k-count)<<cal<<endl;               
                                    
                                                    q=q/10;
                                                    count++;
                                    }
                                    
                                    if(count!=1)
                                    {
                                    printhipen(str1.length());
                                    cout<<setw(k)<<anslen<<endl;
                                    }
                                    
                                    cout<<endl;
                                    
     }
     
     else if(str2.length()>=str1.length() && str2.length()<anslen)
     {
                                    int k=anslen;
                                    cout<<setw(k)<<str1<<endl;
                                    cout<<setw(k)<<str2<<endl;
                                    printhipen(anslen);
                                    int count=0;
                                    int cal;
                                    while(q!=0)
                                    {
                                               cal=p*(q%10);
                                                       
                                                cout<<setw(k-count)<<cal<<endl;               
                                    
                                                    q=q/10;
                                                    count++;
                                    }
                                    
                                    if(count!=1)
                                    {
                                    printhipen(anslen);
                                    cout<<z<<endl;
                                    }
                                    
                                    cout<<endl;
     } 
     
     
}

int main()
{
    int t;
    
    scanf("%d",&t);
    
    if(t>1000)
              exit(0);
    
    string x[t];
    
               for(int i=0;i<t;i++)
               {
                       cin>>x[i];
               }
               
               cout<<endl;
               
               
               for(int j=0;j<t;j++)
               {
               for(int i=0;i<x[j].length();i++)
               {
                       if(x[j][i]=='+')
                       {
                                    add(x[j],i);
                                    break;
                       }
                       
                       else if(x[j][i]=='-')
                       {
                            sub(x[j],i);
                            break;
                       }
                       
                       else if(x[j][i]=='*')
                       {
                            mult(x[j],i);
                            break;
                       }
                       
               }
               }
               
              
    
    system ("pause");
    
    return 0;
}
