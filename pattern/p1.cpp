// square pattern
// 1234 or ****
// 1234 or ****
// 1234 or ****
// 1234 or ****

// commented code for the continous number
// 123
// 456
// 789



#include<iostream>
using namespace std;


int main(){
    for(int i = 1; i<=4; i++){
        for(int j =1; j<=4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    // int a =1;
    // for(int i = 1; i<=3; i++){
    //     for(int j =1; j<=3;j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }

    return 0;
}