/***********************************************
국민대학교 20123425 최준형
2017_11_2_목요일
백준 2839 설탕배달
************************************************/
#include<iostream>
using namespace std;
int main() {
	int num;
	int *DP;
	cin >> num;
	DP = new int[num+1];
	DP[3] = 1;
	DP[4] = -1;
	DP[5] = 1;
	for (int i = 6; i <= num; i++) {
		if (DP[i - 3] > 0) {
			if (DP[i - 5] > 0) {
				DP[i] = DP[i - 3] > DP[i - 5] ? DP[i - 5] + 1 : DP[i - 3] + 1;
			}
			else
				DP[i] = DP[i - 3] + 1;
		}
		else {
			if (DP[i - 5] > 0)
				DP[i] = DP[i - 5] + 1;
			else
				DP[i] = -1;
		}
	}

	cout << DP[num]<<endl;

	return 0;
}
