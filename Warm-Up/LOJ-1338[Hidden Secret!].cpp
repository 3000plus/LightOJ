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
	string one, two;
	cin>>T;
	getline(cin, one);
	while(T--){
		getline(cin, one);
		transform(one.begin(), one.end(), one.begin(), ::tolower);
		getline(cin, two);
		transform(two.begin(), two.end(), two.begin(), ::tolower);
		sort(one.begin(), one.end());
		one.erase(remove(one.begin(), one.end(), ' '), one.end());
		sort(two.begin(), two.end());
		two.erase(remove(two.begin(), two.end(), ' '), two.end());	
		if(one == two){
			cout<<"Case "<<++Case<<": Yes"<<endl;
		}
		else{
			cout<<"Case "<<++Case<<": No"<<endl;
		}
		
	}
	return 0;
}
