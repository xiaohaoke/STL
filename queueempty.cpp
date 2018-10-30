#include "iostream"
#include "cstdio"
#include "queue"
using namespace std;

int main()
{
    queue<int >q;
    if(q.empty()==true){
        cout<<"empty\n"<<endl;

    }else
    {
        cout<<"NOt Empty\n"<<endl;
    }

    q.push(1);
    if(q.empty()==true)
    {
        cout<<"Empty\n"<<endl;
    } else
    {
        cout<<"NOt Empty"<<endl;
        cout<<q.size()<<endl;
    }
}
