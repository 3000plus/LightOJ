/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, myPos, liftPos, second, Case=0;
	cin>>T;
	while(T--){
		second = 0;
		cin>>myPos>>liftPos;
		myPos<=liftPos ? second = liftPos * 4 + 19 : second = (myPos -liftPos + myPos) * 4 + 19;
		cout<<"Case "<<++Case<<": "<<second<<endl;
	}
	return 0;
}
