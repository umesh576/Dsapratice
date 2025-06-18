// pyramid pattern

//    1
//   121
//  12321
// 1234321

#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i<= 4; i++){
        for(int k =i; k<4;k++){
            cout<<" ";
        }
        for(int j =1; j<= i; j++){
            cout<<j;
        }
        for(int k =i-1; k>=1;k--){
            cout<<k;
        }
        
        cout<<endl;
    }

    return 0;
}