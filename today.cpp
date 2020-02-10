#include<bits/stdc++.h>


using namespace std;
int main(){
 int n;
 
 printf("enter no of terminals appearing in grammar\n");
 scanf("%d",&n);
 
 string mat[n][10];
 string mat2[n][10];
 string s1;
 
 for(int i=0;i<n;i++){
  cin>>s1;
  for(int j=0;j<s1.length();j++){
  	mat[i][j]=s1[j];

  }
  s1="";
  }
  string k="";
  
  for(int i=0;i<n;i++){
    if(mat[i][2]>="a" && mat[i][2]<="z" ){
    	cout<<"the first is "<<mat[i][2];
    	cout<<endl;
  }
   else{
    k=mat[i][2];
    for(int j=0;j<n;j++){
      if(mat[j][0]==k){
      	cout<<"the first is "<<mat[j][2];
      	cout<<endl;
      }
    }
   }
  }
  return 0;
  }
