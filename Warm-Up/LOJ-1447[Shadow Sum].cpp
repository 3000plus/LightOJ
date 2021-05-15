/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, value, sum;
	int N[20001];
	cin>>T;
	for(int i = 1; i <= T; i++){
		memset(N,0,sizeof(N));
		sum = 0;
		cin>>n;
		for(int j = 0; j < n; j++){
			cin>>value;
			N[abs(value)] = value;
		}
		for(int k = 0; k < 20001; k++){
			sum += N[k];
		}
		cout<<"Case "<<i<<": "<<sum<<endl;
	}
	return 0;
}
