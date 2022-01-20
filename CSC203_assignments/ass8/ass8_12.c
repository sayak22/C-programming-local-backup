#include <stdio.h>
int main() {
	char name[100];
	int marks,i,n;
	printf("\nEnter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("student.txt","w"));

	printf("\n");
	for (i=0;i<n;++i) {
		printf("\nFor student - %d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}