#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N[5]={60,12,14,85,90};
    int smallest=INT_MAX,index;
    for(int i=0; i<5; i++)
    {
        if(N[i] < smallest)
        {
            smallest = N[i];
            index=i;
        }
    }
    cout<<"The Smallest Is "<<smallest<<endl;
    cout<<"And The Index Is "<<index<<endl;
    return 0;
}
