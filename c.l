%{
	#include<stdio.h>
	int i=0,j=0;
%}

%%
[a-zA-Z]+ {printf("%s is a word \n",yytext); j++; }
%%	



void main(){
	char string[100];
	printf("enter the input \n");
	fgets(string , sizeof(string),stdin);
	yy_scan_string(string);
	yylex();
	
	printf("Number of words is %d\n",j);
}
