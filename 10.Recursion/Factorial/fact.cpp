#include<iostream>
using namespace std; 

int factorial(int n){
    if(n==0){
        return 1;
    }
    int PrevFact = factorial(n-1);
    return n*PrevFact;
} 

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}