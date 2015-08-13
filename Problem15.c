#include <stdio.h>

int f(int m, int n) , meow;

int main(void){
    meow=f(20,20);
    printf("%d\n",meow);
    return 0;
};

int f(int m, int n){

    if(m==0||n==0){
        return 1;
    }
    else{
        return f(m-1,n)+f(m,n-1);
    }
}
