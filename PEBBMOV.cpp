#include<stdio.h>
#include<string.h>
int main()
{    
int n,x,a[101];    
scanf("%d",&n);
    
 memset(a,0,sizeof(a));        
 bool f=false;        
 for(int i=0;i<n;i++)       
  {            
  scanf("%d",&x);           
   a[x]++;           
 if(x!=0) f=true;       
  }       
  if(!f) printf("0/n");       
   else if(n%2==1)  
   printf("1/n");        
   else       
    {           
    bool flag=true;           
    for(int i=0;i<=100;i++)           
    if(a[i]%2==1)
     {flag=false;
     break;}           
     
     if(!flag) 
     printf("1/n");         
    else printf("0/n");        
    }       
    return 0;
    }
