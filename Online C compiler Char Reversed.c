// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char char1[2] ;
    char char2[2] ;
    char char3[2] ;

    printf("Enter a single letter:");
    scanf("%s",&char1);
    printf("Enter another letter:");
    scanf("%s",&char2);
    printf("Enter one last letter:");
    scanf("%s",&char3);
    
    printf("The reverse of %s%s%s",char1,char2,char3);
    printf(" is %s%s%s",char3,char2,char1);
    
    return 0;
}
