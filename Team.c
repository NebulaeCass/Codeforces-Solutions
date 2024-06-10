#include <stdio.h>

int main()
{
    int i, j, n, aux, problemas = 0;
    
    
    scanf("%d", &n);
    
    int A[n][3];
    
    for(i = 0; i < n; i++) {
        
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    
    for(i = 0; i < n; i++) {
        
        aux = A[i][0] + A[i][1] + A[i][2];
        
        problemas += (aux >= 2) ? 1 : 0;

        
    }
    
    printf("%d", problemas);

    return 0;
}
