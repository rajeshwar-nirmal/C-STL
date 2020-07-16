#include<iostream>
using namespace std;
// int add(int a,int b)
// {
//     return a+b;
// }
// float add(float a,float b)
// {
//     return a+b;
// }
template <typename T>       //just replace the datatype with T
T add(T a,T b)
{
    return a+b;
}

int main()
{
    int x=10,y=20;
    float a=10.2,b=2.1;
    cout<<add<int>(x,y)<<endl;
    cout<<add<float>(a,b);
}
//instead of using same function two times for different datatypes,we can use templates