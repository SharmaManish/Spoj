#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    
    while((c=getchar())!=EOF)
    {
                             //c=c-1;
                             int y=(int)c;
                             printf("%d",y);
                             //putchar(c);
                             //printf("%d",c-48);
    }
    
    getch();
    
    return 0;
}
