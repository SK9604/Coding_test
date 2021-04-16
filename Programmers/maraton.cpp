#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(vector<string> participant, vector<string> completion) {

    for(int j=0; j<completion.size(); j++){
        vector<string>::iterator it = find(participant.begin(), participant.end(), completion[j]);
        if (it != participant.end()) 
        {
            participant.erase(it);
            continue; 
        }
    }
    string answer = participant[0];
    return answer;
}
