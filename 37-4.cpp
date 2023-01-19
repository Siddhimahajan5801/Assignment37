#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v1 = {5,9,2,4,2};
    vector<int> v2;

    cout<<"The original vector is : \n\n";

    for (int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<"   ";
    }

    cout<<"\n\nThe Copied vector is : \n\n";

    for (int i=0; i<v1.size(); i++)
    {
        v2.push_back(v1[i]);

        cout<<v2[i]<<"   ";
    }
    cout<<endl;

     return 0;
}
