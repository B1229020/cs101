#include <stdio.h>
int main(){
    double PI = 4.0;
    int j = 1;
    for(int i = 1; PI >= 3.1416 || PI < 3.14159; i++){
        j += 2;
        if(i%2){
            PI = PI - 4.0/j;
        }
        else{
            PI = PI + 4.0/j;
        }
    }
    printf("%d", j);
}
