// sum of the n number which are divisible by 3

#include<iostream>
using namespace std;



int main(){
    
    int n;
    int sum =1;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // if (i%3 == 0)
        // {
        //     sum += i;
        // }
        sum  *= i;
    }
    cout<<"Value: "<<sum;
    return 0;
}