#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
    char s[1010];
    while(scanf("%s",s) !=EOF)
    {
    
    int len=strlen(s);
    int count=0;
    
    char c='a';
    
    for(int i=0;i<len;i++)
    {
            if(isupper(s[i]) && c=='a')
            count++;
            
            else if(islower(s[i]) && c=='A')
            count++;
            
            if(c=='A')
            c='a';
            
            else if(c=='a')
            c='A';
    }
            
    c='A';
    
    int count2=0;
    
    for(int i=0;i<len;i++)
    {
            if(isupper(s[i]) && c=='a')
            count2++;
            
            else if(islower(s[i]) && c=='A')
            count2++;
            
            if(c=='A')
            c='a';
            
            else if(c=='a')
            c='A';
    }
                    
            
            
    (count<count2)?printf("%d\n",count):printf("%d\n",count2);
    
    }
    
    system ("pause");
    
    return 0;
}
            
            
