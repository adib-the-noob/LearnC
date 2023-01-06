#include<stdio.h>
int main(){
    int myAge = 25;
    int votingAge = 25;
    if (myAge > votingAge){
        printf("you are eligble");
    }else if (myAge == 25)
    {
        printf("wait 1year also...");
    }else{
        printf("you are not eligilble for apply in this post!");
    }
}