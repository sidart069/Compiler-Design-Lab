#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(){
	FILE *fp;
	char data[150]="hi this data will be written. My name is Sidharth ,roll no. 1705078";
	
	fp=fopen("test.c","w");

	if(!fp){
	  printf("test.c failed to open");
	
	}
	
	else{
		printf("file is open now...");
		printf("\n");
	
		if(strlen(data)>0){
			fputs(data,fp);
			fputs("\n",fp);
		}
		fclose(fp);
		printf("data written on test.c\n");
		printf("file is closed");
	
	}
	return 0;
}


