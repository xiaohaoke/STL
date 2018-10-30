#include "iostream";
#include "map";
#include<stdio.h>
using namespace std;

int main()
{


    map<char,int>mymap;
    mymap.insert(pair<char,int>('a',100));
    mymap.insert(pair<char,int>('z',200));
    mymap['c']=20;

    map<char,int>::iterator iterator1=mymap.find('a');

    printf("%c %d\n",iterator1->first,iterator1->second);
//    map<char,int>::iterator iterator2=mymap.find("c");
//    map<char,int>::iterator iterator1=mymap.find('c');
//    mymap.erase(iterator2);
    map<char,int>::iterator iterator2=mymap.find('c');

    mymap.erase(iterator2,mymap.end());
    for(map<char,int>::iterator it=mymap.begin();it!=mymap.end();it++)
    {
        printf("%c %d\n",it->first,it->second);
    }

    mymap.clear();
    cout<<mymap.size()<<endl;


    return 0;

}