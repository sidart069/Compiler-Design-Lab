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

int main(){
	string f= "//hi sidharth here \n"
		"int x, y,z; \n"
		"//how are you?\n"
		"//how is life?\n"
		"cin>>x>>y>>z;\n";

	cout << "Given string \n"; 
	cout << f << endl; 
	cout << " Modified file \n"; 
	cout << removeSinglecom(f);
	return 0; 
}
	



