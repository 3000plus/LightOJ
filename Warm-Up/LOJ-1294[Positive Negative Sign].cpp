/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int T, n, m, Case = 0;
	cin>>T;
	while(T--){
		cin>>n>>m;
		cout<<"Case "<<++Case<<": "<<(n / 2) * m<<endl; 
	}
	return 0;
}
