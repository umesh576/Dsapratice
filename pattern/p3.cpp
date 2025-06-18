// for reverse triangle 
// 1
// 21
// 321
// 4321
// 54321
// second condition loop is
// A
// B A 
// C B A 
// D C B A




#include<iostream>
using namespace std;

int main(){

    char str = 'D';
    // for(int i =0;i<=4;i++){
    //     for(int j =i+1;j>0;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    for(int i =0;i<=4;i++){
        for(int j =i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}