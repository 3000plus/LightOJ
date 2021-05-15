/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;

double area(double r , double angle)
{
    return 0.5*r*r*angle ;
}

double angle(double opp_A, double opp_B, double opp_C)
{
    return acos( ( (opp_B*opp_B)+(opp_C*opp_C)-(opp_A*opp_A) ) / (2*opp_B*opp_C) ) ;
}

void solve()
{
    double a,b,c ;
    cin >> a >> b >> c ;

    double s = (a+a+b+b+c+c)/2.0 ;
    double total_area =  sqrt(s*(s-a-b)*(s-b-c)*(s-c-a)) ;

    total_area-= area(a,angle(b+c,c+a,a+b)) ;
    total_area-= area(b,angle(c+a,a+b,b+c)) ;
    total_area-= area(c,angle(a+b,b+c,c+a)) ;

    cout << fixed << setprecision(10) << total_area << "\n" ;

}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T ;
    for (int i = 1; i <= T; i++){
        cout << "Case " << i << ": " ;
        solve() ;
    }
	return 0;
}