#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if (i==4){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

// output:
//     1
//     2
//     3
//     5
//     6
//     7
//     8
//     9
//     10