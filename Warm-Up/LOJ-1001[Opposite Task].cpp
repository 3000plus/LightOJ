/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n;
 	cin>>T;
 	while(T--){
  	cin>>n;
   	if(n>10){
   	cout<<n-10<<" "<<"10"<<endl;
   	}
   	else{
   	cout<<"0"<<" "<<n<<endl;
   	}
 	}
	return 0;
}
