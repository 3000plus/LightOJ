/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;

int T;
long long A, B;

long long nums_divisible_3(int n){
	if(n == 0){
		return 0;
	}
	int subs;
	if(n % 3 == 0){
		subs = n / 3;
	}
	else{
		subs = (n / 3) + 1;
	}
	return n - subs;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>T;
	int Case = 0;
	while(T--){
		cin>>A>>B;
		cout<<"Case "<<++Case<<": "<<nums_divisible_3(B) - nums_divisible_3(A - 1)<<endl;
	}
	return 0;
}
