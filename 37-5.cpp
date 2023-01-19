#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v = {5,3,2,4,8};

    int minimun=v[0];
    int maximum=v[0];

    for (int i=1; i<v.size(); i++)
    {
        if (v[i]<minimun)
        {
            minimun=v[i];
        }
        if (v[i]>maximum)

        {
            maximum=v[i];
        }

    }

    cout<<"\The largest element in the vector = "<<maximum;
    cout<<"\n\nThe smallest element in the vector = "<<minimun;
    cout<<endl;

     return 0;
}
