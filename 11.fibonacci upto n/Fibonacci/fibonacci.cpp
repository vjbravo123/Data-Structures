#include<iostream>
using namespace std;

int main(){
    int n1=0 , n2=1 , next;

    for (int i = 0; i < 10; i++)
    {
        if(i<=1){
            next=i;
        }
        else{
            next = n1 + n2;
            n1 = n2;
            n2 = next;
        }
        cout<< next << endl;
    }
    
    return 0;
}