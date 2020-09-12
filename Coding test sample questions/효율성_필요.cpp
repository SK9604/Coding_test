#include <string>
#include <vector>

using namespace std;
int count(vector <string> query, vector <vector<string> > info) {
	int cnt = 0;
	vector<int> flag(info.size(),1);

	int query5 = 0;
	for (int i = 0; i < query[5].size(); i++) {
		query5 = query5 * 10 + (int)query[5][i] - '0';
	}

	for (int i = 1; i < 5; i++) {
		for (int k = 0; k < info.size(); k++) {
			if (flag[k]!=0 && query[i] != info[k][i] && query[i] != "-") {
				flag[k] = 0;
			}
		}
	}
	for (int i = 0; i < info.size(); i++) {
		int info5 = 0;
		for (int j = 0; j < info[i][5].size(); j++) {
			info5 = info5 * 10 + (int)info[i][5][j] - '0';
		}
		if (flag[i] != 0 && query5 > info5 && query[5] != "-") {
			flag[i] = 0;
		}
	}
	for (int i = 0; i < flag.size(); i++) {
		cnt += flag[i];
	}
	return cnt;
}
vector<int> solution(vector<string> info, vector<string> query) {
	vector<int> answer;
	vector<vector <string> > tquery (query.size(),vector <string>(1));
	vector<vector <string> > tinfo (info.size(), vector <string>(1));
	for (int i = 0; i < query.size(); i++) {
		string tmp = "";
		for (int j = 0; j < query[i].size(); j++) {
			if (query[i][j] == ' ') {
				if (tmp != "and") {
					tquery[i].push_back(tmp);
				}
				tmp = "";
			}
			else {
				tmp += query[i][j];
			}
		}
		tquery[i].push_back(tmp);
	}
	for (int i = 0; i < info.size(); i++) {
		string tmp;
		for (int j = 0; j < info[i].size(); j++) {
			if (info[i][j] == ' ') {
				tinfo[i].push_back(tmp);
				tmp = "";
			}
			else {
				tmp += info[i][j];
			}
		}
		tinfo[i].push_back(tmp);
	}
	for (int i = 0; i < tquery.size(); i++) {
		answer.push_back(count(tquery[i], tinfo));
	}
	return answer;
}
