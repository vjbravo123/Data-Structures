#include<iostream>
using namespace std;

int Sum(int n){
    if(n==1){
        return 1;
    }
    int PrevSum = Sum(n-1);
    return n + PrevSum;

    }

int main(){
    int n;
    cout<<"Enter the number upto which you need to calculate the sum:";
    cin>>n;
    cout<<"Sum upto "<< n <<" is "<<Sum(n);
    return 0;
}