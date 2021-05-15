/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, ax, ay, bx, by, cx, cy, dx, dy, a, Case = 0;
	cin>>T;
	while(T--){
		cin>>ax>>ay>>bx>>by>>cx>>cy;
		dx = ax + cx - bx;
        dy = ay + cy - by;
        a = 0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));
        if (a < 0){
        	a *= -1;
		}
        cout<<"Case "<<++Case<<": "<<dx<<" "<<dy<<" "<<a<<endl;
	}
	return 0;
}
