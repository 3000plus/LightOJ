/*
**  Author - Md. Najmul Huda Hridoy
**  Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
    scanf("%d", &T);
    double v1,v2,v3,a1,a2,t1,t2,t3, bird, trains;
    for(int i = 1; i <= T; i++){
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        t1 = v1/a1;
        t2 = v2/a2;
        t3 = t1;
        if(t1 < t2)
            t3 = t2;
        bird = v3 * t3;
        trains = v1 * t1 - .5 * a1 * t1 * t1;
        trains += v2 * t2 - .5 * a2 * t2 * t2;
        printf("Case %d: %.10lf %.10lf\n", i, trains, bird);

    }
	return 0;
}
