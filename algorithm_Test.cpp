#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x=1,y=-2,z=8;
    printf("%d %d\n",max(x,y),min(x,y));        //返回最大值与最小值
    printf("%d %d\n",abs(x),abs(y));            //返回绝对值数
    printf("%d",max(z,max(x,y)));               //返回三者的比较数，x必须为整数，若为浮点数则必须使用<math>下的fabs；
    return 0;

}