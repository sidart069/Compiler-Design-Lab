%{
	#include<stdio.h>
	int i=0,j=0;
%}

%%
printf { i++;}
scanf { j++; }

%%	

void main(){
	yyin=fopen("h1.txt","r");
	char string[100];
	//printf("enter the input \n");
	//fgets(string , sizeof(string),stdin);
	//yy_scan_string(string);
	yylex();
	
	printf("Number of printf is %d\n",i);
	printf("Number of scanf is %d\n",j);
	
}
