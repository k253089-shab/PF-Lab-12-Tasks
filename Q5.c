#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    char *concat;
    int len1,len2;
    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    len1=strlen(str1);
    len2=strlen(str2);
    concat=(char*)malloc(len1+len2+1);
    if(concat==NULL){
        printf("Memory allocation failed\n");
        return 0;
    }
    strcpy(concat,str1);
    strcat(concat,str2);
    printf("Concatenated string: %s\n",concat);
    free(concat);
    return 0;
}
