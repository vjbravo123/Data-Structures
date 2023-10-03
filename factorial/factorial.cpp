#include<iostream>
using namespace std;

int main(){
    int n ;//10 decimal digits
    long long int fact=1;//19 decimal digits
    cout<<"enter number to find factorial of:";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}