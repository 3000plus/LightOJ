/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, Case = 0;
	string s;
	cin>>T;
	while(T--){
		cin>>n;
		s = bitset<32>(n).to_string();
		int count = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '1'){
				++count;
			}
		}
		cout<<"Case "<<++Case<<": ";
		(count % 2 == 0) ? cout<<"even"<<endl : cout<<"odd"<<endl;	
	}
	
	return 0;
}
