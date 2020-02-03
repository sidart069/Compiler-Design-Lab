%{
	#include<stdio.h>
	int i=0,j=0,sum=0;
%}

%%
[0-9]+ { sum=sum +atoi(yytext);}

%%	

void main(){
	yyin=fopen("sumf.txt","r");
	//yyout=fopen("output.txt","w");
	//char string[100];
	//printf("enter the input \n");
	//fgets(string , sizeof(string),stdin);
	//yy_scan_string(string);
	yylex();
	printf("%d is the sum of all numbers \n",sum);
	//printf("Number of identifier is %d\n",j);
	//printf("Number of keywords is %d\n",i);
	//printf("Number of invalid identifiers is %d\n",k);
}
