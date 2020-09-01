#include <string>
#include <vector>

using namespace std;

vector <string> sort(vector <string> s) {
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size() - i - 1; j++) {
			if (s[j].size() > s[j + 1].size()) {
				string tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
	return s;
}

vector<int> solution(string s) {
	vector<int> answer;

	vector <string> ss;
	int n = 1, tmp = 0;
	while (1) {
		int a = s.find("{", n);
		int b = s.find("}", n + 1);
		n = b;
		ss.push_back(s.substr(a + 1, b - a));
		if (s.at(n + 1) == '}') break;
	}
	ss = sort(ss);

	for (int i = 0; i < ss[0].size(); i++) { //첫번째 값
		if ('0' <= ss[0][i] && ss[0][i] <= '9') {
			tmp = tmp * 10 + (int)ss[0][i] - '0';
		}
		else {
			answer.push_back(tmp);
			tmp = 0;
		}
	}
	for (int i = 1; i < ss.size(); i++) { //두번째 이후 answer에 저장된 것과 중복되지 않는 수 저장
		for (int j = 0; j < ss[i].size(); j++) {
			bool flag = true;
			if ('0' <= ss[i][j] && ss[i][j] <= '9') {
				tmp = tmp * 10 + (int)ss[i][j] - '0';
			}
			else if (ss[i][j] == ',' || ss[i][j] == '}') {
				for (int k = 0; k < answer.size(); k++) {
					if (answer[k] == tmp) {
						flag = false;
						break;
					}
				}
				if (flag) {
					answer.push_back(tmp);
				}
				tmp = 0;
			}
		}
	}
	return answer;
}
