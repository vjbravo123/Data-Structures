#include<iostream>
using namespace std;
#define n 100

class stack{
    //Private Members
    int* arr;
    int top;

    public:
    //Contructor
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){

        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"NO Element to POP , Stack Underflow"<<endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"NO Element in Stack "<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

};


int main(){
    stack st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);

    cout<<st1.Top()<<endl;
    st1.pop();
    cout<<st1.Top()<<endl;
    st1.pop();
    st1.pop();
    st1.pop();
    st1.empty();
    return 0;

}