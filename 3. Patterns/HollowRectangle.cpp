#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the number of rows and cols: ";
    int rows = 0 , cols = 0;
    cin>>rows;
    cin>>cols;

    for(int row = 0 ; row < rows ; row++){

        
            if(row == 0 || row ==rows-1){
                for(int col = 0 ; col < cols ; col++){
                    cout<<"* ";
                }
            }
            else{
                cout<<"* ";
                for(int i = 0 ; i < cols-2 ; i++)
                {cout<<"  ";}
                cout<<"*";
            }
        cout<<endl;
    }





    return 0;
}