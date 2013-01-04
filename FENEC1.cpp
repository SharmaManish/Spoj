#include<iostream>
#include<stdio.h>
#include<cmath>

#define pi acos(-1)

using namespace std;

int main()
{
    int L;
    
    while(true)
    {
               scanf("%d",&L);
               
               if(L==0)
               break;
               
               printf("%.2lf\n",((L/pi)*L)/2.0);
               
                   
