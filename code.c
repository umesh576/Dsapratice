#include<stdio.h>
int hello(){
    return "helloumeshe";
}
int main(){
    int x = printf(hello());
    printf("\nvalue of x is : %d",x);

    return 0;
}