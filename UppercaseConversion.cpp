
string transform(string s)
{
    // code here
    string converted = "";
    converted += toupper(s[0]);
    for(int i = 1; i < s.size(); i++) {
        if(isspace(s[i-1])) converted += toupper(s[i]);
        else converted += s[i];
    }
    return converted;
}