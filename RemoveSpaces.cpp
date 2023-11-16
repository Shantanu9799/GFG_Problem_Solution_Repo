class Solution
{
  public:
    string modify(string s)
    {
        //code here.
        string Modified = "";
        for(int i = 0; i < s.length(); i++) {
            if(!isspace(s[i])) Modified += s[i];
        }
        return Modified;
    }
};