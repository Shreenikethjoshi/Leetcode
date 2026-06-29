class Solution {
public:
    string sortVowels(string s) {
        string vowels="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='I'){
                 vowels+=s[i];
            } 
        }
        sort(vowels.begin(),vowels.end());
        int i=0,j=0;
        while(i<s.length()){
            if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
                s[i]=vowels[j];
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return s;


    }
};