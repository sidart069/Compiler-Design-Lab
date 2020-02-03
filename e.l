%{
	#include<stdio.h>
	int i=0,j=0;
%}

%%
[0-9]*[02468] {printf("%s is even \n",yytext); i++; }
[0-9]*[13579] {printf("%s is a odd \n",yytext); j++;}
%%	

void main(){
	char string[100];
	printf("enter the string \n");
	fgets(string , sizeof(string),stdin);
	yy_scan_string(string);
	yylex();
	
	printf("Number of even numbers is %d\n",i);
	printf("Number of odd numbers is %d\n",j);
}
