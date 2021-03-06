class Solution {
public:
//BFS
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        wordList.insert(endWord);
        queue<string> toVisit;  //this is an queue
        int dist = 2;
        addNeighbor(beginWord,wordList,toVisit);
        while(!toVisit.empty()){
            int size = toVisit.size();
            for(int i=0;i<size;i++){
                string word = toVisit.front();
                toVisit.pop();
                if(word==endWord) return dist;
                addNeighbor(word,wordList,toVisit);
            }
            dist++;
        }
    }
    
private:
    void addNeighbor(string word, unordered_set<string>& wordList, queue<string> &toVisit){
        wordList.erase(word);
        for(int i=0; i<(int)word.length();i++){
            char letter = word[i];
            for(int j=0;j<26;j++){
                word[i]='a'+j;
                if(wordList.find(word)!=wordList.end()){
                    toVisit.push(word);
                    wordList.erase(word);
                }
            }
            word[i]=letter;
        }
    }
};
