#include<iostream>
#include<stdio.h>
main()
{int T,i,j;long long int N,sum=0;scanf("%d",&T);while(T!=0){scanf("%lld",&N);sum=0;sum+=(N*N*N+3*N*N+2*N)/6;sum+=((N*N-N)*((N/2)+1))/2;sum+=((-2*N+1)*((N/2)*((N/2)+1)))/2;sum+=(4*((N/2)*((N/2)+1)*(2*(N/2)+1))/6)/2;sum=sum*6;printf("%lld\n",sum);T--;system ("pause");}}
