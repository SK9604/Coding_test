using namespace std;

long long solution(int w,int h) {
    long long answer = 1;
    int gcd;
	long long sum = (long long)w * (long long)h;
	
	for (int i = (w < h) ? w : h; i > 0; i--) {
		if ((w % i == 0) && (h % i == 0)) { 
			gcd = i;
			break;
		}
	}
    answer = sum - gcd * ((w / gcd) + (h / gcd) - 1);
	return answer;
}
