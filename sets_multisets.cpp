#include<iostream>
#include<set>
//set offers a really quick search coz it stores the data in the form of binary search tree that is the 
//reason why you cannot control order of data in the set
using namespace std;
int main()
{
    set<int> s;
    //by degault set inserts the data in the ascending order,so lets put the data here in descnding order and check
    for(int i=0;i<10;i++)
    {
        s.insert(10-i);
    }
     set<int>::iterator it;
     it=s.find(6);
     s.erase(it);     //if we dont use the erase statement we cant use *it=8, coz sets are read only
     s.insert(6);
    for(set<int>::iterator it1=s.begin();it1!=s.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<"\n";
    cout<<s.size();
    s.insert(1);
    //so if is inserted in a set it will be shown only once,coz set contains only the unique values
    //so to add two similar values we have to use multisets
}