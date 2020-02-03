%{
	#include<stdio.h>
	int i=0,j=0;
%}

%%
[aeiouAEIOU] {printf("%s is a vowel \n",yytext); i++; }
[a-zA-Z] {printf("%s is a consonant \n",yytext); j++; }
%%	

void main(){
	char string[100];
	printf("enter the string \n");
	fgets(string , sizeof(string),stdin);
	yy_scan_string(string);
	yylex();
	
	printf("Number of vowels is %d\n",i);
	printf("Number of consonants is %d\n",j);
}
