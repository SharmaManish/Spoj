#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

long long sumOfSquares(long long x)
{
     long long e=0;
     
     while(x!=0)
     {
                e=e+(x%10)*(x%10);
                
                x=x/10;
     }
     
     return e;
}

int main()
{
    long long A,B;
    
    while(true)
    {
               scanf("%lld",&A);
               scanf("%lld",&B);
               
               if(A==0 && B==0)
               break;
               
               int count=0;bool flag=false;
               
               long long int C=A,D=B,E,F;
               
               while(C!=4 && C!=16 && C!=37 && C!=58 && C!=89 && C!=145 && C!=42 && C!=20 || D!=1 )
               {
                             E=C,F=D;
                           C=sumOfSquares(C);
                           D=sumOfSquares(D);
                           
                           if(C!=E && D!=F)
                           count=count+2;
                           
                           else if((D==F && C!=E) || (D!=F && C==E))
                           count=count+1;
                           
                           if(C==D)
                           {
                                   flag=true;
                                   break;
                           }
               }
               
               if(flag)
               printf("%lld %lld %d\n",A,B,count);
               
               else
               printf("%lld %lld 0\n",A,B);
               
    }
    
    system ("pause");
    
    return 0;
    
}
                           
                           
