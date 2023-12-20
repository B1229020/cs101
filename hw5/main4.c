#include <stdio.h>
int main(){
    int i = 12345;
    int n = (i%10000)/1000, m = i%10;
    int d = n - m;
    i = i - d*1000 + d;
    printf("%d\n", i);
}
