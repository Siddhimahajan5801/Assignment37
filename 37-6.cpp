#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<int> v = {5,3,2,4,2};

    cout<<"The vector Before reversing is : \n\n";

    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"   ";
    }

    cout<<"\n\n----------------------------------\n\n";

    reverse(v.begin(), v.end());

    cout<<"The vector After reversing is  : \n\n";

    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"   ";
    }

     cout<<"\n\n----------------------------------\n\n";

     return 0;
}
