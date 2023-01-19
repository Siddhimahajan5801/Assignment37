#include<iostream>
using namespace std;
#include<vector>

int main ()
{
    vector<float> vec;

    for(int i=0; i<5; i++)
    {
        vec.push_back(3.14*i);
        cout<<vec[i]<<"  ";
    }
    cout<<endl;

    return 0;

}
