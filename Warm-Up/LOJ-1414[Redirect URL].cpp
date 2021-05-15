/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	string url;
	cin>>T;
	for(int i = 1; i <= T; i++){
		cin>>url;
		if(url[4] == 's'){
			cout<<"Case "<<i<<": "<<url<<endl;
		}
		else{
			cout<<"Case "<<i<<": "<<url.substr(0,4)<<"s"<<url.substr(4)<<endl;
		}
	}
	return 0;
}
