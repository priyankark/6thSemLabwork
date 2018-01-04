#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
FILE *fptr1, *fptr2;
char filename[100], c1,c2;
printf("Enter the filename to open for reading: \n");
scanf("%s", filename);
fptr1 = fopen(filename, "r");
// Open one file for reading
if (fptr1 == NULL)
{
printf("Cannot open file %s \n", filename);
exit(0);
}
printf("Enter the filename to open for comparison: \n");
scanf("%s", filename);
fptr2 = fopen(filename, "r"); // Open another file for writing
c1=fgetc(fptr1);
c2=fgetc(fptr2);
// Read contents from file
while (c1 != EOF)
{
if(c1!=c2)
{
 printf("\nDissimilar\n");
 exit(0);
}



c1=fgetc(fptr1);
c2=fgetc(fptr2);
}

if(c1!=c2)
printf("\nDissimilar content");
else
printf("\nFiles have same content");
fclose(fptr1);
fclose(fptr2);
return 0;
}
