#include<stdio.h>
#include<string.h>

void reversingstring(char *p){
    int l=strlen(p);
    char *ptr=p+l-1;
    while(ptr>=p){
        printf("%c",*ptr);
        ptr--;
    }
    printf("\n");
}


int main(){
    char s[100];
    printf("Enter any string of your choice to be reversed: \n");
    scanf("%s",s);
    printf("The string in reversed order is :\n");
    reversingstring(s);
    return 0;
}