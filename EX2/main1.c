#include <stdio.h>
int main(){
    int i = 10;
    if(i&(i-1) != 0){
        printf("否\n");
    }
    else{
        printf("是\n");
    }
    return 0;
}
