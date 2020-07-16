#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
//in case of vectors and dequeues,to insert the number in between,it requires to arrange all the elemnts of the array
//so list are introduced
int main()
{
    list<int> l;      //interally the list is doubly connected linked list
    l.push_back(0);
    for(int i=0;i<10;i++)
    {
        l.push_back(i+1);
    }
    //for(int i=0;i<10;i++)
    //{
        //cout<<l[i]<<" ";      //we cant access the list by index, we have to use the iteratot
         
//    }
list<int>::iterator itr=find(l.begin(),l.end(),8);
//.begin()  indicates the starting address and l.end() goivws the end address of the list
l.insert(itr,88);    //so insertion is easy
itr=find(l.begin(),l.end(),7);
l.erase(itr);     //so deletion in easy
for(list<int>::iterator it=l.begin();it!=l.end();it++)
{
    cout<<*it<<" ";
}
//read about splice() function on google
    
}