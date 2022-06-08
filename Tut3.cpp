#include<iostream>
using namespace std;

int main(){
    int a =3;
    int* b= &a;
    cout<<"Address of a:"<<b<<endl;
    cout<<"Value of a :"<<*b<<endl;
    return 0;
}