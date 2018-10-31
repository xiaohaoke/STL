#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;

//stack<int> st;
int main()
{
    stack<int> st;
    if(st.empty()==true){
        printf("Empty\n");
    }else
    {
        printf("Not Empty");;
    }
    for(int i=0;i<=5;i++)          //推入元素
    {
        st.push(i);
    }
    if(st.empty()==true){
        printf("Empty\n");
    }else
    {
        printf("Not Empty\n");;
    }

    for(int i=0;i<=3;i++)
    {
        st.pop();             //推出元素
    }
    printf("%d\n",st.size());
    printf("%d\n",st.top());      //top取栈顶元素
    return 0;
}