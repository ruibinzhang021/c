#include<stdio.h>

int main(){
    int f(int);
    int a = 2, i;
    for(i=0; i<3; i++){
        printf("%d\n", f(a));
    }
    return 0;
}

int f(int a){
    auto int b=0;
    static int c = 3;
    b++;
    c++;
    return(a + b + c);
}