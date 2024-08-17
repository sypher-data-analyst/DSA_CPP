#include<iostream>
using namespace std;


int monkey(int n,int k,int j,int m,int p){

    int atebanana=0;
    int atepinut=0;
    if(n<0 || k<0 || j<0 || m<0 || p<0)
    {
        cout<<"invalid Input "<<endl;
    }
    else{
        atebanana=m/k;
        atepinut=p/j;
        n= n-atebanana-atepinut;
        cout<<"Number Of Monkeys Left On The Tree Will Be :- "<<n<<endl;
    }
}

int input(){

    int n,k,j,m,p;
    cout<<"Enter The Total Number Of Monkeys "<<endl;
    cin>>n;
    cout<<"Enter number of bananas eatable by a single monkey "<<endl;
    cin>>k;
    cout<<"Enter The number of eatable peanuts by a single monkey "<<endl;
    cin>>j;
    cout<<"Enter The total number of bananas "<<endl;
    cin>>m;
    cout<<"Enter The total number of peanuts "<<endl;
    cin>>p;
    monkey(n,k,j,m,p);
}
int main()
{
    //n = total no of monkeys
    //k = number of bananas eatable by a single monkey
    //j = number of eatable peanuts by a single monkey
    //m = total number of bananas
    //p = total number of peanuts

  input();
}
