class Solution{
public:
	bool fascinating(int n) {
	    // code here
	    int firstHalf = n * 2;
	    int secondHalf = n * 3;
	    string f = to_string(n);
	    string fHalf = to_string(firstHalf);
	    string sHalf = to_string(secondHalf);
	    f = f + fHalf + sHalf;

	    int facinating[9] = {0};
	    for(int i = 0; i < f.size(); i++) {
	        facinating[f[i] - '1']++;
	    }
	    
	    for(int i = 0; i < 9; i++) {
	        if(facinating[i] != 1) {
	            return false;
	        }
	    }
	    return true;
	}
};