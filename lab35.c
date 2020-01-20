#include<stdio.h>
#include<string.h>
char str[100];
int i=0;
int f=0;

void A(){
	if(str[i]=='a' ){
		i++;
		A();
	}
}
void B(){
	if(str[i]=='b' ){
		i++;
		B();
	}
	
}

void C(){
	if(str[i]=='c' ){
		i++;
		C();
	}

}

void D(){
	if(str[i]=='d'  ){
		i++;
		D();
	}
	else if(str[i]=='e'){
		i++;
	}
	else f=1;

}




void S(){
		A();
		B();
		C();
		D();
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

