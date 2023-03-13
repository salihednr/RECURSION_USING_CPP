/*
Sum Of N Numbers Using Void Recursive Function
*/
#include<iostream>
using namespace std;
void sumOfNNumbers(int n,int sum=0){
    if(n<1)
    {
        cout<<sum;
        return;
    }
    sumOfNNumbers(n-1,sum+n);
}
int main()
{
    int n;
    cin>>n;
    sumOfNNumbers(n);
    return 0;
}
