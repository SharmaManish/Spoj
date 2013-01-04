#include<stdio.h>
int main()
{
    long sum,n,t;
    register int i,x,y;
    //freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
        sum=0;
        for(i=1;sum<n;i++)
            sum+=i;//for find row or column
        if(i&1)
        {
            x=(n+i)-(sum+1);
            y=i-x;
        }
        else
        {
            y=(n+i)-(sum+1);
            x=i-y;
        }
        printf("TERM %ld IS %d/%d\n",n,x,y);
    }
    return(0);
}
   
