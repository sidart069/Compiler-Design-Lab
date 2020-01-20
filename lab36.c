#include<stdio.h>
#include<string.h>
char str[100];
int i=0;
int f=0;

void A(){
	if(str[i]=='b'){
		i++;
		A1();
	}
	else f=1;
}

void A1(){
	A();
	i++;
	if(str[i]=='a'){
		i++;
		A1();
	}
	
}




void main(){
	printf("enter the string");
	gets(str);
	A();
	
	if(strlen(str)==i && f==0)
		printf("the string is parsed");
	else{
		printf("string is rejected");
	}	
}

