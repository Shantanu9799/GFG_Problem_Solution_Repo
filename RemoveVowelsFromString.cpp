class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string withoutVowel = "";
	    for(int i = 0; i < S.size(); i++) {
	        if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u') withoutVowel += S[i];
	    }
	    return withoutVowel;
	}
};