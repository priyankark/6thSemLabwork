#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fptr;

char filename[100], c;
printf("Enter the filename to open for reading: \n");
scanf("%s", filename);
fptr=fopen(filename,"r");
int errorc=0;

while(1)
{
if(fptr==NULL&&errorc<2)
{
	errorc++;
	printf("error.Try again. \n");
	printf("Enter the filename to open for reading: \n");
	scanf("%s", filename);
	fptr=fopen(filename,"r");

}
else
break;

if(errorc>=2)
{
	printf("Tries exceeded");
	exit(0);
}


}

printf("Success");

return 0;
}
