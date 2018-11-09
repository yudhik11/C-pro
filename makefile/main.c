#include "stdio.h"
#include "calculator.h"

int main() {
    while(1){
        int x, y;

        printf("input two numbers \n");
        scanf("%d %d", &x, &y);
        printf("Add: %d\n", add(x, y));
        printf("Sub: %d\n", sub(x, y));
    }
    return 0;
}
