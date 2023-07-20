//   AND   ->   First Zero than no Check Condition
//   OR    ->   First One than no Check Condition

#include<stdio.h>
int main(){
    int a = 1, b = 1, c;
    c = --a || --b; // 0 0 0 
    printf("A : %d, B = %d, C : %d",a,b,c);
    // c = ++a || --b; // 2 1 1
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = ++a || b; // 2 1 1
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = a || b; // 1 1 1
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = a && --b; // 1 0 0
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = --a && --b; // 0 1 0
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = --a && ++b; // 0 1 0
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = ++a && ++b; // 2 2 1
    // printf("A : %d, B = %d, C : %d",a,b,c);
    // c = a && b; // 1 1 1
    // printf("A : %d, B = %d, C : %d",a,b,c);
}