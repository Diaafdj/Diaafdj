/*
工作室招新C语言0001题
*/


#include<stdio.h>
#include<string.h>
int main()
{
    char *A = "I LOVE YOU";
    char *B = NULL;
    int length = strlen(A);
    
    //printf("%d\n",length);
    B= (char*)malloc(length*sizeof(char));

    char* dest=B;


    char* src=&A[length-1];

    while(length--!=0){
        *dest=*src;
        dest++;src--;
    }
        
    printf("%s" ,B);
    return 0;
}