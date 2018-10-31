#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int a[10]={10,11,12,13,14,15};            //对数组进行操作
    reverse(a,a+4);
    for(int i=0;i<6;i++)
    {
        printf("%d  ",a[i]);
    }


    string str;
    cin>>str;
    reverse(str.begin()+2,str.begin()+4);       //对字符串进行操作
//    for(int i=0;i<6;i++)
////    {
////        printf("%c  ",str[i]);
////    }

     cout<<str<<endl;
     printf("%s\n",str.c_str());               //输出字符串的三种方法

     for(string::iterator it=str.begin();it!=str.end();it++)       利用迭代器进行输出
     {
         printf("%c",*it);

     }

    return 0;

}