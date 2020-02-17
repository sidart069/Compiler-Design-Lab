                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

#include<stdio.h>
#include<string.h>

char terminals[] = {'a','b','$'};
char nonTerminals[] = {'S','A','B','C','D','E'};

char table[6][3][7] = {{"AB|CDE","AB|CDE",""},
{"aA","b",""},
{"aB","b",""},
{"aC","b",""},
{"aD","b",""},
{"aE","b",""}
};

char stack[10], input[10], cs;
int top;

int getTerminal(char c) {
int i;
for(i=0; i<3; i++)
if(terminals[i] == c)
return i;
return -1;
}

int getNonTerminal(char c) {
int i;
// printf("\nSearching for %c.\n",c);
for(i=0; i<6; i++)
if(nonTerminals[i] == c)
return i;
return -1;
}

int main() {
int i, term, nonTerm;
char temp[10];
printf("Enter string:\t");
scanf("%s",input);
input[strlen(input)] = '$';

cs=0;
strcpy(stack,"$E");
top = strlen(stack) - 1;
printf("\nStack\tInput\tOutput\n");

while(stack[top] != '$') {
for(i=0; i<=top; i++)
printf("%c", stack[i]);
printf("\t");
for(i=cs; i<strlen(input); i++)
printf("%c", input[i]);
printf("\t");
if(input[cs] == stack[top]) {
top--;
cs++;
printf("Match");
}
else {
term = getTerminal(input[cs]);
nonTerm = getNonTerminal(stack[top]);

top--;
if(term == -1 || nonTerm == -1) {
printf("Invalid string.\n");
if(term == -1)
printf("Term\n");
else
printf("Non Term\n");
return 0;
}
strcpy(temp, table[nonTerm][term]);
if(!strcmp(temp, "")) {
printf("Invalid string.\n");
return 0;
}
else if(temp[0] != 'e') {
for(i=strlen(temp)-1; i>=0; i--) {
top++;
stack[top] = temp[i];
}
}
printf("%c->%s",nonTerminals[nonTerm],temp);
}

printf("\n");
}
printf("Valid string.\n");

printf("Parsing table LL-1.\n");

for(int i=0;i<6;i++){
 for(int j=0;j<3;j++){
  for(int k=0;k<7;k++){
     printf("%c",table[i][j][k]);
  }
  printf(" ");
 }
  printf("\n");
}
printf("\n");
printf("Parsing table is not LL-1 table.\n");
return 0;
}
