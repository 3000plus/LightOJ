/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 long long T,s,c=1;
 cin>>T;
 while(T--){
 	cin>>s;
 	double ch= (double) ceil(sqrt(s));
 	long long k=(long long) ch*ch-ch+1;
 	if((long long)ch%2==0){
 		cout<<"Case "<<c++<<": "; k<s? cout<<(long long) ch<<" "<<(long long) (ch*ch)-s+1<<endl : cout<<s-(k-(long long) ch+1)+1<<" "<<(long long) ch<<endl;
	 }
	 else{
	 	cout<<"Case "<<c++<<": "; k<s? cout<<(long long) (ch*ch)-s+1<<" "<<(long long) ch<<endl : cout<<(long long) ch<<" "<<s-(k-(long long) ch+1)+1<<endl;
	 }
 }
 return 0;
}
