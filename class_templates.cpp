#include<iostream>
using namespace std;

template <class T>
class something
{
    public:
    T a[2];
    T add();
    something();

};
template <class T>
something<T>::something()
{
    cout<<"enter two numbers"<<endl;
    cin>>a[0]>>a[1];

}
template <class T>
T something<T>::add()
{
    return a[0]+a[1];
}
int main()
{
    something<float> obj;
    cout<<obj.add();
}