#include<bits/stdc++.h>
using namespace std;

string removeSinglecom(string f){
	int n= f.length();
	bool s=false;
	string res="";
	
	for(int i=0;i<n;i++){
	
	  if(f[i]=='/' && f[i+1]=='/'){
	  	s=true; i++;
	  }
	 else if(s && f[i]=='\n')
	  	s=false;
	  
	  else if(s)
	  	continue;	
	  else
	  	res+=f[i];		
	}

	return res;

}

string helper(char *dataToread){

	string s(dataToread);
	return s;
}


int main(){
	string helpS= "//hi sidharth here \n"
"#include<stdio.h>"
"int x, y,z; \n"
"int a,b,c ;a+b/c; //how are you?\n"
"//how is life?\n"
"cin>>x>>y>>z;\n"
"//hello there\n"
"cin>>x>>y>>z;\n";
	FILE *f1;
	f1=fopen("help.cpp","r");
	char datatoread[150];
	
	int i=0;
	cout << "Given File \n"; 
	while(fgets(datatoread,150,f1)!=NULL){
			printf("%s",datatoread);
		}
	
	 
	cout << " Modified file \n"; 
	cout << removeSinglecom(helpS);
	return 0; 
	}
	


