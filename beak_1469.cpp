/***********************************************
국민대학교 20123425 최준형
2017_11_16_목요일
백준 1469 1만들기
************************************************/
#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int *DPTable = new int[num+1];
	DPTable[0] = 0;
	for (int i = 1; i <= num; i++) {
		bool isTwoTime = false;
		bool isThreeTime = false;

		if (i % 2 == 0) {
			isTwoTime = true;
			DPTable[i] = DPTable[i / 2];
		}
		if (i % 3 == 0) {
			if (isTwoTime)
				DPTable[i] = DPTable[i / 2] < DPTable[i / 3] ? DPTable[i / 2] : DPTable[i / 3];
			else
				DPTable[i] = DPTable[i / 3];
			isThreeTime = true;
		}
		if (!isThreeTime && !isTwoTime)
			DPTable[i] = DPTable[i - 1];
		else 
			DPTable[i] = DPTable[i] < DPTable[i - 1] ? DPTable[i] : DPTable[i - 1];
		
		DPTable[i]++;
	}
	cout << DPTable[num] - 1;

	return 0;
}
