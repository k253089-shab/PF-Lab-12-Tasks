#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Enter maximum length of string: ");
    scanf("%d", &n);

    getchar();

    char *str=(char *)malloc(n*sizeof(char));
    if(str==NULL){
        printf("Memory Allocation failed");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, n, stdin);

    int len= strlen(str);

    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }

    printf("Reversed string: ");
    for(int i=len-1; i>=0; i--){
        printf("%c ", str[i]);
    }

    free(str);

    return 0;
}
