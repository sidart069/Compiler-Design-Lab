%{
	#include<stdio.h>
	int i=0,j=0,k=0;
%}

%%
int|char|bool|float|void|for|do|while|if|else|return|void {printf("%s is a keyword \n",yytext); i++;}
[0-9]+[a-zA-Z0-9]* {printf("%s is an invalid identifier \n",yytext);k++; }
[_a-zA-Z]+[a-zA-Z0-9]* {printf("id\n"); j++;}

%%	

void main(){
	yyin=fopen("a.txt","r");
	//yyout=fopen("output.txt","w");
	//char string[100];
	//printf("enter the input \n");
	//fgets(string , sizeof(string),stdin);
	//yy_scan_string(string);
	yylex();
	
	printf("Number of identifier is %d\n",j);
	printf("Number of keywords is %d\n",i);
	printf("Number of invalid identifiers is %d\n",k);
}
