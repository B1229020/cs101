#include <stdio.h>
int main(){
    int n = 7;
    int spc = n;
    for(int i = 1; i <= n; i++){
        printf("%*d", spc, i);
        for(int j = 2; j <= i; j++){
            printf(" %d", i);
        }
        printf("\n");
        spc--;
    }
}
