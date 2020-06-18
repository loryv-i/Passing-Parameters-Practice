#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num(int *a);
int choose(int *b);
int math(int a, int b);
int cont(int *y);


int main(){
int n, choice,c,d=3;

do{
    num(&n);
    choose(&choice);
    math(n,choice);
    cont(&c);
}while(c==d);


}

int num(int *a){
    printf("Enter a number: ");
    scanf("%d", a);
}

int choose(int *b){
    printf("\nPress 1 for Multiplication");
    printf("\nPress 2 for Addition");
    printf("\nEnter a number: ");

    scanf("%d", b);
}


int math(int a, int b){

int mul = 1;
int add = 2;
int ans,num;

srand(time(NULL));
if( b == add){

    int add1, add2;
        add1 = rand() % a;
        add2 = rand() % a;

    num = add1+ add2;

    printf("\n \n Solve: %d + %d = ", add1,add2);
    scanf("%d", &ans);
        if(ans == num){
            printf("\n Correct!");
        }
        else {
            math(a,b);
        }
}

if( b == mul){

    int mul1, mul2;
        mul1 = rand() % a;
        mul2 = rand() % a;

    num = mul1 * mul2;

    printf("\n \n Solve: %d * %d = ", mul1,mul2);
    scanf("%d", &ans);
        if(ans == num){
            printf("\n Correct!");
        }
        else {
            math(a,b);
        }
}

}

int cont(int *y){

    printf("\n PRESS [ 3 ] to continue again.: ");
    scanf("%d", y);

}

