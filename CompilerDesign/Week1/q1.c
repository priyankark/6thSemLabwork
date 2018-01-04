//Program to count number of lines and words

#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE* fptr;
char filename[50],c;
printf("Enter the filename to open for reading:");
scanf("%s",filename);
fptr=fopen(filename,"r");
if(fptr==NULL)
{
 printf("Cannot open file %s \n",filename);
 exit(0);
}

int linecount=0,charactercount=0;
c=fgetc(fptr);
while(c!=EOF)
{
printf("%c",c);
if(c=='\n')
linecount++;
else
charactercount++;
c=fgetc(fptr);
}

printf("\nLine Count: %d, Character count: %d",linecount,charactercount);


return 0;

}
