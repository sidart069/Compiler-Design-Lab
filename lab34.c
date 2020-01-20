#include<stdio.h>
#include<string.h>
char str[100];
int i=0;
int f=0;

void A(){
	if(str[i]=='a'){
		i++;
		A();
	}
	else if(str[i]=='b'){
	i++;
	}
	else f=1;
}
void B(){
	if(str[i]=='c'){
		i++;
		B();
	}
	else if(str[i]=='d'){
	i++;
	}
	else f=1;
}

void C(){
	if(str[i]=='e'){
		i++;
		C();
	}
	else if(str[i]=='f'){
	i++;
	}
	else f=1;
}

void D(){
	if(str[i]=='g'){
		i++;
		D();
	}
	else if(str[i]=='h'){
	i++;
	}
	else f=1;
}




void S(){
	if(str[i]=='a' || str[i]=='b'){
		A();
		B();
	}
	else if(str[i]=='e' || str[i]=='f'){
		C();
		D();
	}
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

