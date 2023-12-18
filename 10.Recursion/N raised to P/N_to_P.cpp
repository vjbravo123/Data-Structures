#include<iostream>
using namespace std;


int power(int n , int p){
    if(p==0){
        return 1;
    }

    int PrevPower = power(n , p-1);
    return n*PrevPower;
}
int main(){
    int n , p;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Enter the exponent:";
    cin>>p;

    cout<< n << " raised to power "<< p <<" is "<<power(n , p)<<endl;
    return 0;
}