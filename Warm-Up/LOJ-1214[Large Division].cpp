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
	string a; long long b;
	cin>>T;
	while(T--){
		cin>>a>>b;
		long long init, dividend = 0;
		a[0] == '-' ? init = 1 : init = 0;
		
		for(int i = init; i < a.size() ; i++){
			if(dividend < abs(b)){
				dividend = (dividend * 10) + a[i] - '0';
			}
			else{	
				dividend = (dividend % b) * 10 + a[i] - '0';
			}
		}
		cout<<"Case "<<++Case<<": ";
		dividend % b == 0 ? cout<<"divisible"<<endl : cout<<"not divisible"<<endl;
	}
	return 0;
}
