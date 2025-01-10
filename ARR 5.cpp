#include<iostream>
using namespace std;

int sumofarr(int arr[],int sz)
{
    int sum=0;
    for(int i=0; i<sz; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int productofarr(int arr[],int sz)
{
    int product=1;
    for(int i=0; i<sz; i++)
    {
        product*=arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int sz=5;
    cout<<"The Sum Of All Is "<< sumofarr(arr,sz)<<endl;
        cout<<"The Product Of All Is "<< productofarr(arr,sz)<<endl;
    return 0;
}
