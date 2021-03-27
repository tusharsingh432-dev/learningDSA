#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int margin = num - 1;
    for(int i = 0; i<num; i++, margin--){
        for(int j = 0; j<margin; j++){
            cout<<" ";
        }
        for(int j = 0; j<num; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}