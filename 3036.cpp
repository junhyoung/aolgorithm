/***********************************************
국민대학교 20123425 최준형
2017_11_25_토요일
백준 3036 링
************************************************/
#include<iostream>
using namespace std;

int gcd(int, int);
int main() {
	int num;
	cin >> num;
	int* rings = new int[num];
	for (int i = 0; i < num; i++)
		cin >> rings[i];
	for (int i = 1; i < num; i++) {
		int gcd1 = gcd(rings[0], rings[i]);
		cout << rings[0] / gcd1 << '/' << rings[i] / gcd1<<endl;
	}
	return 0;

}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}
