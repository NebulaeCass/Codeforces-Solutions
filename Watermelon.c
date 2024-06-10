//Watermelon Problem

#include <stdio.h>
#include <stdlib.h>

void Watermelon(int w);

int main() {
    
    int w;

    scanf("%d", &w);

    if(w > 100 || w < 1)
        exit(1);


    Watermelon(w);
    
    
    return 0;
    }

void Watermelon(int w) {

    if (w>2 && w%2 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    
}