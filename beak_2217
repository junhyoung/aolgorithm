/***********************************************
국민대학교 20123425 최준형
2017_11_12_화요일
백준 2217 로프
그리드 어프로치
************************************************/
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a, int b) {
	return a > b;
}

int main() {
	int num;
	cin >> num;
	int* maxWeight = new int[num];
	for (int i = 0; i < num; i++)
		cin >> maxWeight[i];
	sort(maxWeight, maxWeight + num, comp);
	int max = 0;
	int k = 1;
	for (int i = 0; i < num; i++, k++) {
		
		max = max < k * maxWeight[i] ? k * maxWeight[i] : max;
	}

	cout << max;
	return 0;
}
