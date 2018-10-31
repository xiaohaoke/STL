#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,3};
    //a[0]~a[2]之间的序列需要求解next_permutation
    do{
        printf("%d%d%d\n",a[0],a[1],a[2]);

    }while(next_permutation(a,a+3));
    return 0;
}