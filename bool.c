#include<stdio.h>
#include<stdbool.h>

int main(){
    bool isPython = true;
    bool isJS = false;
    printf("%d\n",isPython);
    printf("%d\n",isJS);

    // true = 1
    // false = 0

    printf("%d\n",10 > 5);
    // will print true > 0

    printf("%d\n",10 < 5);
    // will print false > 0

    bool IsBurgerTasty = true;
    bool IsPizzaTasty = true;

    printf("Pizza Burger Tasty result : %d",IsBurgerTasty == IsPizzaTasty);
}