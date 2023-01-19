#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> v = {5,3,2,4,2};

    int num,count=0;

    cout<<"Enter the element you want to check : \n";
    cin>>num;
    cout<<endl;

    for(int i=0; i<v.size(); i++)
    {
        if(num == v[i])
            count++;
    }

    if (count>0)
        cout<<"Given element exists in the vector! \n";
    else
        cout<<"Given element does not exists in the vector! \n";

    return 0;
}
