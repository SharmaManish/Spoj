#include<stdio.h>
main(){char c;int X=1;while((c=getchar())!=-1){if(c=='\n'){printf("%d\n",X);X=1;}if(c=='F'||c=='L'||c=='D'||c=='T')X*=2;}}
