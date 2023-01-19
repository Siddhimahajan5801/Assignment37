#include<iostream>
using namespace std;
#include<vector>

int main ()
{
    vector<int> v1= {2,3,9,1,5};
    vector<int> v2= {9,6,8,2,1};

    cout<<"The common elements are : \n\n";

    for(int i=0; i<v1.size(); i++)
    {
        for (int j=0; j<v2.size(); j++)
        {
            if (v1[i]== v2[j])
                cout<<v1[i]<<"  ";
        }
    }
    cout<<endl;

    return 0;
}
