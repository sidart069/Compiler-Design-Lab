#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(){
	FILE *fp;
	char data[150]="sidharth reporting from dl-6 kiit university Bhubaneswardgjkwrg'jar'ghjfsd";
	
	fp=fopen("test2.c","w");

	if(!fp){
	  printf("test2.c failed to open");
	
	}
	
	else{
		printf("file is open now...");
		printf("\n");
	
		if(strlen(data)>0){
			fputs(data,fp);
			fputs("\n",fp);
		}
		fclose(fp);
		printf("data written on test2.c\n");
		printf("file is closed");
	
	}
	return 0;
}


