#include<cstdio>
#include<queue>
#include "iostream"
using namespace std;
int b[5]={0};
int main()
{
    queue<int> q;
    int a[5]={1,9,8,6,5};

    for(int i=0;i<5;i++)
    {

        q.push(a[i]);
    }
    for(int i=0;i<3;i++)
    {
        q.pop();

    }
    printf("%d\n",q.front());
    return 0;
}