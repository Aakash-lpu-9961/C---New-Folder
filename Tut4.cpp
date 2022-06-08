#include<iostream>
using namespace std;

int main(){
    cout<<"Arrays in C++"<<endl;
    int c[20];

    for(int i=0;i<=20;i++)
    {
        cout<<"Enter element"<<i+1<<"of array:";
        cin>>c[i];
    }
    for(int j=0;j<=20;j++)
    {
        cout<<"Entered nos are:"<<c[j]<<endl;
    }

    int colour[2][3];
    cout<<"Enter colour names"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter colour name:"<<endl;
            cin>>colour[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j  = 0; j < 3; j++)
        {
            cout<<colour[i][j];
        }
        
    }
    
    

     return 0;
}