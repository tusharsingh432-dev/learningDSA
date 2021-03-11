#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row";
    int row;
    cin>>row;
    int col = row*2;
    int trow = row + (row-1);
    for (int i = 1; i <= trow; i++)
    {
        if(i<=row){
            for(int j = 0; j<i; j++){
                cout<<"*";
            }
            for (int k = 0; k < col-(2*i); k++)
            {
                cout<<" ";
            }
            
            for(int j = 0; j<i; j++){
               cout<<"*";
            }
        }else{
            for(int j = 0; j<(col-i); j++){
                cout<<"*";
            }
            for (int k = 0; k < col-(2*(col-i)); k++)
            {
                cout<<" ";
            }
            
            for(int j = 0; j<(col-i); j++){
               cout<<"*";
            }
        }
        cout<<endl;
    }
    

    return 0;
}