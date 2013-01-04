#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iterator>
#include<vector>

using namespace std;
int main()
{
    unsigned int sz; 
    int elem;
    vector<int>v, va, vb;
    scanf("%u",&sz);
    while (sz--){
    scanf("%d", &elem);
    v.push_back(elem);
    }
    
    int size = v.size();
    for ( int i =0; i< size; i++)
        for ( int j = 0; j<size; j++)
            for(int k=0; k<size;k++)
                va.push_back((v[i]*v[j])+v[k]);

    sort(va.begin(), va.end());

    for ( int i =0; i< size; i++)
                for ( int j = 0; j<size; j++)
                        for(int k=0; k<size;k++)
                        if(v[i]!=0)vb.push_back(v[i]*(v[j]+v[k]));

    sort(vb.begin(), vb.end());

       
    int count=0;

    for ( int i(0); i<vb.size(); i++){
        vector<int>:: iterator ita, itb;
        itb = vb.begin();
        int tmp(0);
        ita = lower_bound(va.begin(),va.end(), *(itb+i) );
    
        if ( *ita == *(itb+i) && *itb<= va.back() )
            count++;
        while ( *ita == *(ita+1) && *ita == *(itb+i)){
            ita++;
            tmp++;
            }
        count += tmp;
    
    }

    printf("%d\n",count);
    
    system ("pause");
    return 0;
}
