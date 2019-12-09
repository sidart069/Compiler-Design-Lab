
#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fp,*fp1;
char ch;
fp=fopen("testResultMerge.c","r");
fp1=fopen("withoutspacefile.c","w");
if(fp==NULL)  {
printf("Some problem in opening the file");
exit(0);
}
else  {
while((ch=fgetc(fp))!=EOF)  {
if(ch==' '|| ch=='\n') {
}
else  {
fprintf(fp1,"%c",ch);
}
}
}
fclose(fp);
return 0;
}
