#include<iostream>
using namespace std;
#include<vector>

int main ()
{
    vector <int> vec;

    cout<<"Enter the elements of the vector(Enter 0 to stop appending) : \n ";

    int num;
    cin>>num;

    while (num)
  {
        vec.push_back(num);
        cin>>num;
  }

    cout<<"\nThe vector is : \n\n";

    for (int i=0; i<vec.size(); i++)
  {
       cout<<vec[i]<<"   ";
  }


    return 0;
}
