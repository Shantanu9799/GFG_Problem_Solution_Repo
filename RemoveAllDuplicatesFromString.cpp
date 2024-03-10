class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string s;
	    unordered_map<char, int> isPresent;
	    for(int i = 0; i < str.size(); i++) {
	        if(isPresent[str[i]] == 0) {
	            s += str[i];
	            isPresent[str[i]] = 1;
	        }
	    }
	    return s;
	}
};