#include<cstdio>
#include<iostream>
#include<utility>
#include<string>
using namespace std;
int main()
{
    pair<string,int> p;
    p.first="haha";                                     //赋值的三种方式
    p.second=5;
    cout<<p.first<<"   "<<p.second<<endl;
   p=make_pair("xixi",55);
   cout<<p.first<<"  "<<p.second<<endl;
   p=pair<string,int>("heihei",555);
   cout<<p.first<<" "<<p.second<<endl;


   pair<int,int>p1(5,10);
   pair<int,int>p2(5,15);
   pair<int,int>p3(10,5);
   if(p1<p3) printf("p1<p3\n");
   if(p1<=p3) printf("p1<=p3\n");
   if(p1<p2) printf("p1<p2\n");
   if(p2<p1)  printf("asdfghjgdsda");
   return 0;
}