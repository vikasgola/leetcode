class Solution {
public:

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    queue<string> q;
    unordered_map<string, int> visited;
    unordered_set<string> exists(wordList.begin(), wordList.end());

    q.push(beginWord);
    visited[beginWord] = 1;

    while (!q.empty()) {
        string currWord = q.front();
        q.pop();

        for (int i = 0; i < currWord.size(); i++) {
            string temp = currWord;

            // Replace each character of the current word with all possible letters
            for (char j = 'a'; j <= 'z'; j++) {
                temp[i] = j;

                // Check if the new word is in the word list and has not been visited before
                if (exists.count(temp) && visited.count(temp) == 0) {
                    visited[temp] = visited[currWord] + 1;
                    q.push(temp);

                    // Stop BFS once we reach the end word
                    if (temp == endWord) {
                        return visited[temp];
                    }
                }
            }
        }
    }

    return 0; // If no path exists between beginWord and endWord
    }
};