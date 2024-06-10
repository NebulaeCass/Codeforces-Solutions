//es diferente

#include <stdio.h>
#include <string.h>

#define MAX_TAM 100


struct abrev {
    
    char word[MAX_TAM];
    char first;
    int size;
    char last;
    
};

int main () {
    
    int t, i, size;
    struct abrev abrevs[MAX_TAM];
    
    scanf("%d", &t);
    
    for(i = 0; i < t; i++){
        
        scanf("%s", abrevs[i].word);
        abrevs[i].size = strlen(abrevs[i].word); 
        
        abrevs[i].first = abrevs[i].word[0];
        abrevs[i].last = abrevs[i].word[abrevs[i].size -1];
        
        abrevs[i].size -= 2; //Descartando first and last
    
    } 
    
    //Impresiòn de resultados
    for(i = 0; i < t; i++) {
        
        if(abrevs[i].size + 2 > 10)
        printf("%c%d%c\n", abrevs[i].first, abrevs[i].size, abrevs[i].last);
        
        else
            printf("%s\n", abrevs[i].word);
        

    }
    
    
    return 0;
}

