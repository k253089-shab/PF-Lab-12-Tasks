#include<stdio.h>
#include<string.h>

int Palindrome(char str[], int start, int end){
    char c1,c2;
    if(start>=end){
        return 1;
    }
    c1 = str[start];
    if(c1 >='A'&& c1 <='Z'){
        c1 = c1 + ('a'- 'A');
    }
    c2 = str[end];
    if(c2 >= 'A' &&c2 <= 'Z'){
        c2 = c2 +('a'-'A');
    }
    if(c1!=c2){
        return 0;
    }
    return Palindrome(str, start+1, end-1);
}
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    if(Palindrome(str, 0, len-1)){
        printf("Palindrome\n");
    }else{
        printf("Not a palindrome\n");
    }
    return 0;
}
