/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;

long long int factorial(long long int n){
	if(n==0){
		return 1;
	}
	return n * factorial(n-1);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> v;
	int T, Case = 0;
	long long int n, fact_arr[21];
	for(int i=0; i<21; i++){
		fact_arr[i]=factorial(i);
	}
	cin>>T;
	while(T--){
		v.clear();
		cin>>n;
		for(int i=20; i>=0; i--){
			if(fact_arr[i] <= n && n > 0){
				n -= fact_arr[i];
				v.push_back(i);
			}
		}
		cout<<"Case "<<++Case<<": ";
		if(n==0){
			for(int i=v.size()-1; i>=0; i--){
				i==v.size()-1 ? cout<<v[i]<<"!" : cout<<"+"<<v[i]<<"!";
			}
			cout<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}
