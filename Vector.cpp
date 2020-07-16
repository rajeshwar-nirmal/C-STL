#include<iostream>
#include<vector>           //vector is a container
using namespace std;

int main()
{
    vector<int> v(10);     //vector of size 10, we can also use templates in here for various datatypes
    for(int i=0;i<v.size();i++)
    {
        v[i]=i*10;
    }
    
    cout<<v.empty()<<endl;     //returns boolean if the vector is empty or not
    v.push_back(500);
    
    
    
    v.resize(5);       //we have resized the vector
    v.resize(15);       //we have resized the vector to 15 
    v.push_back(10000);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v1=v;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }


}
