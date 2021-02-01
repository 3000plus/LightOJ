/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;

int findDigits(int n, int b) 
{ 
	if (n < 0) 
		return 0; 
	if (n <= 1) 
		return 1; 

	// Use Kamenetsky formula to calculate 
	// the number of digits 
	double x = ((n * log10(n / exp(1.0)) + 
				log10(2 * acos(-1) * n) / 
				2.0)) / (log10(b)); 
				
	return floor(x) + 1; 
}  

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n, base, Case = 0;
	cin>>T;
	while(T--){
		cin>>n>>base;
		cout<<"Case "<<++Case<<": "<<findDigits(n, base)<<endl;
	}
	return 0;
}
