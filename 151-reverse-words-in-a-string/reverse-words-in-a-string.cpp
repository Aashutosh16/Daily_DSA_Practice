// #include<iostream>
// using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        std::istringstream iss(s);
        std::string word;
        std::vector<std::string>words;
        //split th string into words 
        while(iss >> word){
            words.push_back(word);
        }

        std::reverse(words.begin(),words.end());
        std::string result;
        for (size_t i = 0;i< words.size();++i){
            result +=words[i];
            if (i != words.size()-1){
                result +=" ";
            }
        }
        return result;
    }
};