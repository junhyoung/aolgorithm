/***********************************************
국민대학교 20123425 최준형
2017_11_2_목요일
백준 9933 민균이의 비밀번호
************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string* words=new string[N];
	string password;
	bool isCorrect = false;
	for (int i = 0; i < N; i++) 
		cin >> words[i];
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			isCorrect = false;
			if (words[i].length() == words[j].length()) {
				
				for (int k = 0; k < words[i].length(); k++) {
					if (words[i][k] == words[j][words[j].length() - k-1])
						isCorrect = true;
					else {
						isCorrect = false;
						break;
					}
				}
			}
			if (isCorrect) {
				password = words[i];
				break;
			}
		}
		if (isCorrect)
			break;
	}
	
	cout<<password.length()<< " " << password[password.length() / 2]<<endl;

	return 0;
}
