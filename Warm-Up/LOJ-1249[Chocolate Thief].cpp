/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, l, w, h, Case = 0;
	string name;
	cin>>T;
	while(T--){
		pair<string, int> cthief[2];
		int mn = 10000001, mx = 0;
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>name>>l>>w>>h;
			if(l * w * h > mx){
				cthief[0].first = name;
				cthief[0].second = l * w * h;
				mx = l * w * h; 
			}
			if(l * w * h < mn){
				cthief[1].first = name;
				cthief[1].second = l * w * h;
				mn = l * w * h; 
			}
		}
		cout<<"Case "<<++Case<<": ";
		if(cthief[0].second == cthief[1].second){
			cout<<"no thief"<<endl;
		}
		else{
			cout<<cthief[0].first<<" took chocolate from "<<cthief[1].first<<endl;
		}
	}
	return 0;
}
