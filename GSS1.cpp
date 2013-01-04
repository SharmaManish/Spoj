#include<stdio.h>

main()
{
    int t;
    
    scanf("%d",&t);
    
    int a[t];
    
    for(int i=0;i<t;i++)
    scanf("%d",&a[i]);
    
    int m;
    scanf("%d",&m);
    
    while(m--)
    {
              int x,y;
              
              scanf("%d",&x);
              scanf("%d",&y);
              
              int max=a[x-1];
              for(int i=x;i<y;i++)
              {
                      if(a[i]>max)
                      max=a[i];
              }
              
              printf("%d\n",max);
              
    }
}
              
