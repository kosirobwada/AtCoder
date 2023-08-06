#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
	int N,K;cin >> N >> K;
	vector<int> b(K+1);
	for(int i=0; i<K+1; i++){
		cout << "? ";
		for(int j=0; j<K+1; j++){
			if(i==j)continue;
			cout << j%(K+1)+1  << " ";
		}
		cout << endl;
		int x;cin >> x;
		b[i] = x;
	}
	vector<int> c(K+1);
	for(int i=0; i<K+1; i++){
		int z = (i+1)%(K+1);
		int y = abs(b[z]-b[i]);
		if(c[i]==0){
			if(y==0)c[z] = 0;
			else c[z] = 1;
		}
		else{
			if(y==0)c[z] = 1;
			else c[z] = 0;
		}
	}
	/*for(auto v: c){
		cout << v << " ";
	}
	cout << endl;*/
	int sum = 0;
	for(int i=1; i<K+1; i++){
		sum += c[i];
	}
	sum %= 2;
	if(sum != b[0]){
		vector<int> d(K+1);
		for(int i=0; i<K+1; i++){
			d[i] = abs(1-c[i]);
		}
		c = d;
	}
	//cout << sum << " " << b[0] << endl;
	vector<int> ans(N);
	for(int i=0; i<K+1; i++){
		ans[i] = c[i];
	}
	/*for(auto v: ans){
		cout << v << " ";
	}
	cout << endl;*/
	for(int i=2; i<=N-K; i++){
		cout << "? ";
		sum = 0;
		for(int j=0; j<K; j++){
			cout << (i+j)%N+1 << " ";
			sum += ans[(i+j)%N];
		}
		cout << endl;
		int x;cin >> x;
		sum %= 2;
		int t = i+K-1;
		if(sum==x)ans[t] = 0;
		else ans[t] = 1;
	}
	cout << "! ";
	for(int i=0; i<N; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}