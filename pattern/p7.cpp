// hollow daimond


#include<iostream>
using namespace std;

int main(){
    int n = 7;
    for(int i = 1; i<= n; i++){
        for(int j = 1;j<4;j++){
            cout<<" ";
        }
        for(int k = 1; k< 4; k++){
            cout<<"*";
        }
        for(int j = 1;j<4;j++){
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}


