#include<iostream>
using namespace std;

void reversearr(int arr[],int sz)
{
    int start = 0, last = sz-1;
    while (start < last)
    {
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
}

int main()
{
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    reversearr(arr,sz);

    for ( int i=0; i<sz; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
