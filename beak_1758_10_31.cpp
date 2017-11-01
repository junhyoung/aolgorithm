/***********************************************
국민대학교 20123425 최준형
2017_10_31_화요일
백준 1758 강호 팁
************************************************/
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int comp(int a, int b) {
	return a > b;
}

int main() {
	int numPeople;
	long long *tips;
	cin >> numPeople;
	tips = new long long[numPeople];

	for (int i = 0; i < numPeople; i++) 
		cin >> tips[i];
	sort(tips, tips + numPeople,comp);

	long long res = 0;

	for (int i = 0; i < numPeople; i++) {
		if (tips[i] - i >= 0)
			res += (tips[i] - i);
		else
			break;
	}
	cout << res << endl;
	return 0;
}
