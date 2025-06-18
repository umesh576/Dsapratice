// floyd triangle pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include<iostream>
using namespace std;


int main(){
    char n = 'A';
    for(int i =0; i<4; i++){
        for(int j = 0;j<i+1;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }

    return 0;
}