#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main(){
	FILE *fp,*fp1,*fp2,*fp3;
	char data[150]="_abcd int a,b,c &*%- , ;>= != == ++ + =";
	
	fp=fopen("identifier.txt","w");
	fp1=fopen("keyword.txt","w");
	fp2=fopen("operator.txt","w");
	fp3=fopen("delimiter.txt","w");
	
	
	if(!fp){
	  printf("failed to open the file ");
	
	}
	
	else{
		printf("file is open now...");
		printf("\n");
	
		for(int i=0;i<strlen(data);i++){
			if(data[i]==43 ||data[i]==47 ||data[i]==45||data[i]==35||data[i]==36 ||data[i]==37){
				char x=data[i];
				putc(x,fp2);
				continue;
			} 
			else if(data[i]==32 ||data[i]==59||data[i]==58||data[i]==44){
				char x=data[i];
				putc(x,fp3);
				continue;
				}
			else if(data[i]==95){
				char x=data[i];
				putc(x,fp);
			 int j=i+1;
			 	while(data[j]!=32){
					char y= data[j];			 		
			 		putc(y,fp);
			 		j++;
			 	}
			    }
			  else if(data[i]>=65 && data[i]<=90 &&(data[i+1]==32 ||data[i]==59||data[i]==58||data[i]==44)){
			  	char x=data[i];
				putc(x,fp);
			  }  
			   else if(data[i]>=97 && data[i]<=122 &&(data[i+1]==32 ||data[i]==59||data[i]==58||data[i]==44)){
			  	char x=data[i];
				putc(x,fp);
			  }  
			     
			   else if(data[i]>=97 && data[i]<=122 &&(data[i+1]==32 ||data[i]==59||data[i]==58||data[i]==44)){
			  	char x=data[i];
				putc(x,fp);
			  } 
			  
			   else if(data[i]==105 && data[i+1]==110 && data[i+2]==116){
			  	char x=data[i];
			  	char y=data[i+1];
			  	char z=data[i+2];
				putc(x,fp1);
				putc(y,fp1);
				putc(z,fp1);
				i=i+3;
				continue;
			  }
			    
			    
			 }
			 	
			}	
		fclose(fp);
		fclose(fp1);
		fclose(fp2);
		fclose(fp3);
		
		printf("data written on the output files(s)\n");
		printf("file is closed");
	
	
	return 0;
}

