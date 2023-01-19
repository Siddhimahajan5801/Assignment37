#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector <int> vec;

    for (int i=0; i<5; i++)
    {
        vec.push_back(2*i);
    }

    cout<<"Vector =  ";

    for(int i=0; i<5; i++)
    {
        cout<<vec[i]<<"    ";
    }
    cout<<endl;

    return 0;

}
