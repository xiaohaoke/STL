#include "cstdio"
#include "set"
#include "iostream"
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    cout<<"set的size值为:"<<s.size()<<endl;
    cout<<"set的maxsize值为:"<<s.max_size()<<endl;
    cout<<"set中的第一个元素:"<<*s.begin()<<endl;
    cout<<"set中的最后一个元素"<<*s.end()<<endl;
    s.clear();
    if(s.empty())
    {
        cout<<"set为空！！！"<<endl;

    }

    cout<<"set的size值为"<<s.size()<<endl;
    cout<<"set的maxsiza的值为："<<s.max_size()<<endl;


    return 0;


}