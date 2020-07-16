#include<iostream>
#include<deque>
using namespace std;
//in deque we can add elemets at the back and front both unlike vectors we can add only at back in ORDER OF 1

int main()
{
    deque<int> d(5);
    for(int i=1;i<6;i++)
    {
        d[i]=i*10;
    }
    d.push_back(5000);
    d.push_front(12);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }

}