bool isBinary(string str)
{
   // Your code here
   for(int i = 0; i < str.size(); i++) {
       if(str[i]!='0' && str[i]!='1') return false;
   }
   return true;
}