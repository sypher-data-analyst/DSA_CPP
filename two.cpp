#include<iostream>
using namespace std;

int removelement(int val)
{
    int nums[]={0,1,2,2,3,0,4,2};
    int k=0;
    for(int i=0; i<sizeof(nums)/4; i++)
    {
        if(nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
    }
    cout<<k;
}

int main()
{
    removelement(2);

}
