#include<iostream>
using namespace std;

string EvenOrodd(int &n){
 if(n%2==0){
        cout<<"Even.";
    }
    else{
        cout<<"Odd.";
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    EvenOrodd(n);
}