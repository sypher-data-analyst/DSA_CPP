#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec = {1,2,3};//Creating Vector
    cout<<"Size = "<<vec.size()<<endl;//Size Function
    vec.push_back(4);//For Adding Data In Vector
    vec.push_back(5);
    vec.push_back(6);
    cout<<"After Push Back Size = "<<vec.size()<<endl;
    vec.pop_back();//For Deleting Data In Vector
    for( int i : vec )//For Each Loop
    {
        cout<< i <<endl;
    }
    return 0;
}
