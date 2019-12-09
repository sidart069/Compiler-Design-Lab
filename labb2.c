#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(){
	FILE *fp;
	char dataToread[150];
	
	fp=fopen("test.c","r");

	if(!fp){
	  printf("test.c failed to open");
	
	}
	
	else{
		printf("file is open now...");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		while(fgets(dataToread,150,fp)!=NULL){
			printf("%s",dataToread);
		}
		printf("\n");
		printf("\n");
		printf("\n");
		
		fclose(fp);
		printf("data read from test.c\n");
		printf("file is closed");
	
	}
	return 0;
}


