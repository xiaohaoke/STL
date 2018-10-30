#include "cstdio"
#include "string"
#include "vector"
#include "iostream"
using namespace std;

const int maxn=30;
int n;

vector<int> pile;

int main() {
    cout << "verctor siza=" << pile.size() << endl;
    int temp;

    for (int i = 0; i < 5; i++) {
        cin>>temp;
        pile.push_back(temp);

    }




    cout << "vector size" << pile.size() << endl;

    for (int j = 0; j < 5;j++)
    {

        cout << pile[j];

    }

    pile.clear();
//    for (int j = 0; j < 5;j++)
//    {
//
//        cout << pile[j];
//
//    }
    cout<<"vector的size值"<<pile.size();

}
