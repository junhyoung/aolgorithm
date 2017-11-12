/***********************************************
국민대학교 20123425 최준형
2017_11_2_목요일
백준 1475 방번호
************************************************/
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main() {
	string roomNumber;
	cin >> roomNumber;
	int countNumber[10] = { 0 };
	for (int i = 0; roomNumber[i]; i++) {
		char ATOI = roomNumber[i]-'0';
		if (ATOI == 9)
			countNumber[6]++;
		else
			countNumber[ATOI]++;
	}
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (i == 6) {
			countNumber[i] % 2 == 1 ? countNumber[i]++ : 0;
			countNumber[i] /= 2;
		}
		max = max < countNumber[i] ? countNumber[i] : max;
	}
	cout << max;


	return 0;
}
