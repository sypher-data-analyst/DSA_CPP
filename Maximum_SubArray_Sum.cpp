#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"Max Subarray Sum = "<<maxSum<<endl;
    return 0;
}