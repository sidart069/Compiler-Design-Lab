#include<stdio.h>
#include<string.h>
char str[100];
int i=0;
int f=0;


void S(){
	if(str[i]=='a'){
		i++;
		S();
	}
	else if(str[i]=='b'){
		i++;
	}
	else f=1;
}



void main(){
	printf("enter the string");
	gets(str);
	S();
	
	if(strlen(str)==i && f==0)
		printf("the string is parsed");
	else{
		printf("string is rejected");
	}	
}
