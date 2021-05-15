/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, Case = 0;
	string n;
	cin>>T;
	while(T--){
		cin>>n;
		bool is_pali = true;
		for(int i = 0, j = n.size() - 1; i < n.size()-1; i++, j--){
			if(n[i] != n[j]){
				is_pali = false;
			}
		}
		cout<<"Case "<<++Case<<": "<<(is_pali ? "Yes" : "No")<<endl;
	}
	return 0;
}
