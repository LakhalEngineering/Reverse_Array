#include <stdio.h>


int main(){

    int array[3] = {0};
    int i = 2;
    while(i>=0){
        printf("insert a value of index %d : ",i-2);
        printf("\n");
        scanf("%d",&array[i]);
        i--;
    }

    // Display
    for(int i=0;i<3;i++){
        printf("index is %d and value is %d\n",i,array[i]);
    }
    return 0;
}