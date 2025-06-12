#include<iostream>
#include<test.h>

int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<"a+b="<<add(a,b)<<endl;
}

int add(int a,int b){
    return a+b;
}