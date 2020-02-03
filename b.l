%{
	#include<stdio.h>
	int i=0,j=0;
%}

%%
int|char|bool|float|void|for|do|while|if|else|return|void {printf("%s is a keyword \n",yytext); i++;}
[_a-zA-Z]+[a-zA-Z0-9]* {printf("%s is an identifier \n",yytext); j++; }
%%	

void main(){
	char string[100];
	printf("enter the input \n");
	fgets(string , sizeof(string),stdin);
	yy_scan_string(string);
	yylex();
	
	printf("Number of identifier is %d\n",i);
	printf("Number of keywords is %d\n",j);
}
