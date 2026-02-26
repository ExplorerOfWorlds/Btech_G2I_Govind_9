#include<stdio.h>
#include<string.h>
void main(){
    char str[]="qwertyuiopasdfghjklzxcvbnm";
    char pqr[]="QWERTYUIOPASDFGHJKKLZXCVBNM";
    char xyz[]="1234567890";
    char a;
    printf("ente a character: ");
    scanf("%c",&a);
    if (strchr(str,a) != NULL ){
        printf("lowercase");
    }
    else if(strchr(pqr,a) !=NULL ){
        printf("Uppercase");
    }
    else if(strchr(xyz,a) !=NULL ){
        printf("digits");
    }
    else{
        printf("Special symbols");
    }
}
