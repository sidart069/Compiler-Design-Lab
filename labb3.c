#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fp1=fopen("test.c","r");
	FILE *fp2=fopen("test2.c","r");	
	
	FILE *fp3=fopen("testResultMerge.c","w");	
	
	char c;
	if(!fp1 || !fp2 || !fp3){
	 puts("cant open files");
	 exit(0);
	
	}
	
	while((c=fgetc(fp1))!=EOF)
		fputc(c,fp3);
		
	while((c=fgetc(fp2))!=EOF)
		fputc(c,fp3);	
  
   printf("Merged test.c and test2.c into testResultMerge.c"); 
  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
