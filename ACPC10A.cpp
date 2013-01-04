#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int a1,a2,a3;
    
    scanf("%d%d%d",&a1,&a2,&a3);
    
    while(a1!=a2 && a2!=a3 && a1!=a3)
    {
                     if(2*a2==(a1+a3))
                     printf("AP %d\n",2*a3-a2);
                     
                     else if(a2*a2==a1*a3)
                     {
                          float k=(float)a3/(float)a2;
                          
                          float z=(float)a3;
                          
                          z=z*k;
                          
                          int m=(int)z;
                          
                          printf("GP %d\n",m);
                     }
                     
                     scanf("%d%d%d",&a1,&a2,&a3);
    }
    
    system ("pause");
    return 0;
}
