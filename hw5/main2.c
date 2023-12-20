#include <stdio.h>
int main(){
    double n = 4.0;
    double PI = 4.0;
    int j = 1;
    for(int i = 1; PI >= 3.14159; i++){
        j += 2;
        PI = PI - n/j;
        if(PI-3.14159 < 0.00001 && PI-3.14159 > 0){
            break;
        }
        else if(PI-3.14159 > -0.00001 && PI-3.14159 < 0){
            break;
        }
        j += 2;
        PI = PI + n/j;
        if(PI-3.14159 < 0.00001 && PI-3.14159 > 0){
            break;
        }
        else if(PI-3.14159 > -0.00001 && PI-3.14159 < 0){
            break;
        }
    }
    printf("%d", j);
}
