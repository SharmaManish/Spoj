#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main()
{
    int t;
    
    scanf("%d",&t);
    
    while(t--)
    {
              int n;
              
              scanf("%d",&n);
              
              double b=(n-1)/5.0;
              
              int a=(int)ceil(b);
              
              if(a==0)
              printf("poor conductor\n");
              
              else
              {
                  if((a%2)==0)
                  {
                              long c=5*a;
                              switch(c-(n-1))
                              {
                                             case 0: printf("%d W L\n",a);
                                                     break;
                                                     
                                             case 1: printf("%d A L\n",a);
                                                     break;
                                             
                                             case 2: printf("%d A R\n",a);
                                                     break;
                                             
                                             case 3: printf("%d M R\n",a);
                                                     break;
                                                     
                                             case 4: printf("%d W R\n",a);
                                                     break; 
                              }
                  }
                  
                  else if((a%2)==1)
                  {
                              long c=5*a;
                              switch(c-(n-1))
                              {
                                             case 4: printf("%d W L\n",a);
                                                     break;
                                                     
                                             case 3: printf("%d A L\n",a);
                                                     break;
                                             
                                             case 2: printf("%d A R\n",a);
                                                     break;
                                             
                                             case 1: printf("%d M R\n",a);
                                                     break;
                                                     
                                             case 0: printf("%d W R\n",a);
                                                     break; 
                              }
                              
                  }
                  
              }
              
    }
    
    system ("pause");
    
    return 0;
    
}
                       
                                                      
