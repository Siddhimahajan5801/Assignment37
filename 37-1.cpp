#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v = {5,3,2,4,2};

    cout<<"The vector is : \n\n";

    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"   ";
    }
    cout<<endl;

     return 0;
}
