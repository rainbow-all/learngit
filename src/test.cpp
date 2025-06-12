#include<iostream>
#include"../include/test.h"

using namespace std;
int main(){
    int a=10;
    int b=5;
    cout<<"a+b="<<add(a,b)<<endl;
}

int add(int a,int b){
    return a+b;
}

