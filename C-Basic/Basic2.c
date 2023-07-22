#include<stdio.h>
int main(){
    int a = 1, b = 1, c =1, d;
    d = a && --b || ++c;   //   1  0  2  1 
    printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = a || --b && ++c;   //   1  1  1  1 
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = a || --b || ++c;   //   1  1  1  1 
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = --a || --b || ++c;   //   0  0  2  1
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = --a || ++b || ++c;   //   0  2  1  1
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = --a && ++b && ++c;   //   0  1  1  0
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = a && --b && --c;   //   1  0  1  0
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = a && --b && c;   //   1  0  1  0
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
    // d = a && b && c;   //   1  1  1  1
    // printf("a : %d, b : %d, c : %d, d : %d",a,b,c,d);
}