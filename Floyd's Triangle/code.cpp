#include<iostream>
using namespace std;
int main(){
    int a = 0, row;
    cout<<"Enter Row"<<endl;
    cin>>row;

    for(int i= 1; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<(++a)<<" ";
        }
        cout<<endl; 
    }

    return 0;
}