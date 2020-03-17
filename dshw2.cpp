#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;




int main() {
	// n = num arrays == "rows" , q= num queries == "what we collect"
	int n, q;
	cin >> n >> q;
	// 2D vector
	vector<vector<int>> a(n);
	int k;
	for (int i = 0; i < n; i++) {
		cin >> k;

		a[i].resize(k); //now we have n rows, k columns
		for (int j = 0; j < k; j++) {
			//add elements 
			cin >> a[i][j];
		}
	}

	//access and print element at position nth, kth
	int x, y;
	for (int i = 0; i < q; i++) {
		cin >> x >> y;
		cout << a[x][y] << '\n';
	}
		
	return 0; 
}








































