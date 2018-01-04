#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE* fptr=fopen("source.txt","r");

int fs=fseek(fptr,SEEK_SET,SEEK_END);
int ft=ftell(fptr);

printf("%d",ft);


return 0;
}
