#include <stdio.h>
#include <string.h>

struct record
{
    char name[20];
    int pass[4];
    
}rec;

int main(){
    printf("***********************\n*WELCOME TO YOUR DIARY*\n***********************\n\n");
    printf("DO YOU HAVE AN ACCOUNT? (Y/N)\n");
    int a;
    scanf("%c",&a);
    if(a=='Y'){
        printf("ENTER YOUR NAME\n");
        
        
        printf("ENTER YOUR PASSWORD (4-DIGIT NUMERIC)\n");
        
    }
    if(a=='N'){
        printf("ENTER YOUR NAME\n");
        

    }
}