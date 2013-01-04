#include<iostream>
#include<stdio.h>

using namespace std;

bool check(long long A,long long a[],int n)
{
     long long sq=0;
     while(A!=0)
     {
                sq=sq+(A%10)*(A%10);
                A=A/10;
     }
     
     if(sq>338)
     {
               bool w=check(sq,a,n);
               return w;
     }
     
     else
     {
         int beg=0;int end=n-1;
         int mid=0;
         while(beg<=end)
         {
                        mid=(beg+end)/2;
                        
                        if(a[mid]==sq)
                        return true;
                        
                        else if(a[mid]>sq)
                        end=mid-1;
                        
                        else
                        beg=mid+1;
         }
         
         return false;
     }
     
}
                        
                        

int main()
{
    long long a[]={1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70, 79, 82, 86, 91, 94, 97, 100, 103, 109, 129, 130, 133, 139, 167, 176, 188, 190, 192, 193, 203, 208, 219, 226, 230, 236, 239, 262, 263, 280, 291, 293, 301, 302, 310, 313, 319, 320, 326, 329, 331, 338};
    
    long long A,B;
    
    while(true)
    {
               scanf("%lld",&A);
               scanf("%lld",&B);
               
               int n=sizeof(a)/sizeof(long long);
               
               bool p=check(A,a,n);
               bool q=check(B,a,n);
               
               
    }
               
               
