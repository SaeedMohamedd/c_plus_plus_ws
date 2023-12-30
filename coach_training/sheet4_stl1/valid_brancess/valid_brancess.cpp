//for test code in leetcode class styel
// work in compolex input like [{()}]
// work well in seprated () {}  []  
class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(auto& ch :s)
        {
           if(ch == '[' ||ch=='(' || ch=='{') mystack.push(ch);

           else if(!mystack.empty())
           {
               if(mystack.top()=='[' && ch!=']') return false ;
                if(mystack.top()=='{' && ch!='}') return false ;
                 if(mystack.top()=='(' && ch!=')') return false ;
                 mystack.pop();
           }
           else return false ;
        }
        return mystack.empty() ;
    }
};