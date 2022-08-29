#include <bits/stdc++.h>
using namespace std;
#define Max 100001
int n;
struct Arc{
	int a,b;
};

Arc arc[Max];


void input(){
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> arc[i].a;
		cin >> arc[i].b;
	}
}
void prin() {
	for(int i = 1 ; i <= n; i++) {
		cout <<"arc[" << i << "].a =" << arc[i].a << " ";
		cout <<"arc[" << i << "].b =" << arc[i].b << " ";
		cout << endl;
	}
}
bool cmp(Arc& arc1 , Arc& arc2) {
	return arc1.b < arc2.b;
}
void Solve() {
	sort(arc,arc+n,cmp);
	int ans = 1;
	int end = arc[1].b;
	for(int i = 2; i <= n; i++) {
		if(arc[i].a > end) {
			ans++;
			end = arc[i].b;
		}
	}
	cout << ans;
}


int main() {
	input();
	//prin();
	Solve();
	//prin();
	return 0;
}