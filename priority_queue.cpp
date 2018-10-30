#include "iostream"
#include "cstdio"
#include "queue"
using namespace std;

int main()
{
//   priority_queue<int> q;
   priority_queue<int,vector<int>,greater<int> >q;    //less<int>表示数字大的优先级高,greater<int>表示数字小的优先级小
   q.push(3);
   q.push(4);
   q.push(1);
   cout<<q.top()<<endl;
   if(q.empty()==true)
   {
       cout<<"Empty!"<<endl;

   }else{
       cout<<"Not Empty!"<<endl;
   }
   cout<<q.size()<<endl;



   return 0;
}