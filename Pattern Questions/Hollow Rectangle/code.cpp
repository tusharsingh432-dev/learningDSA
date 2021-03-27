#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Row And Columns";
    int row,col;
    cin>>row>>col;
    for (int i = 1; i <= row; i++){
        if(i == 1|| i == row){
            for (int j = 0; j < col; j++){
                cout<<"*";
            }

        }else{
            cout<<"*";
            for(int j = 0; j < col-2; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}