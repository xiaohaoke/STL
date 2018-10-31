#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert(make_pair("a",5));
    mp.insert(pair<string,int>("h",5));
    //  printf("%d",mp.size());

   // map<string,int>::iterator iterator1=mp.find("ada");

    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
    {

        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;

}