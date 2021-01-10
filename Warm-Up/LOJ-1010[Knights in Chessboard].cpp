/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int T,a,b,c=1;
 cin>>T;
 while(T--){
 	cin>>a>>b;
 	 if(a==1||b==1){
 	 	cout<<"Case "<<c++<<": "<<a*b<<endl;
	  }
	 else if(a==2||b==2){
	 	int f,k;
	 	a<b? f=b:f=a;
	 	k=ceil((float)f/2);        
	 	cout<<"Case "<<c++<<": ";(k%2)==1 ? f%2==1 ? cout<<k*2<<endl : cout<<(k+1)*2<<endl : cout<<k*2<<endl;
	 }
	 else{
	 	
	 	cout<<"Case "<<c++<<": ";(a*b)%2==0 ? cout<<(a*b)/2<<endl : cout<<(a*b)/2+1<<endl;
	 }
 }
 return 0;
}
