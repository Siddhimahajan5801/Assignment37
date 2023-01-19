#include<iostream>
using namespace std;
#include<vector>

int main ()
{
    vector <int> v = {5,6,3,2,7};

    cout<<"The vector is : ";

    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }

    int sum=0;

    for (int i=0; i<v.size() ; i++)
    {
        sum=sum+v[i];
    }


    cout<<"\n\nThe sum of elements is : "<<sum<<endl;

    return 0;
}
