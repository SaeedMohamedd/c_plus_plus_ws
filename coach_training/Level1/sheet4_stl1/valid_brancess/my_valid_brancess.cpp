//for test code in leetcode class styel
// not work in compolex input like [{()}]
// work well in seprated () {}  []  
class Solution {
public:
    bool isValid(string s) {

for(int i=0;i<s.size();i++){
   if(s[i]=='[' )
   {
       if(s[i+1]==']')
       i++;
       else return false ;
   }
      if(s[i]=='(' )
   {
       if(s[i+1]==')')
       i++;
       else return false ;
   }
      if(s[i]=='{' )
   {
       if(s[i+1]=='}')
       i++;
       else return false ;
   }
}
 return true;       
    }
};