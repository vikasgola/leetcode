class FreqStack {
public:
    // Sort based on freq, else when inserted
    // { freq, { time, element }}
    unordered_map<int,int> freq;
    unordered_map<int, vector<int>> groups;
    int maxfreq = 0;

    FreqStack() {
    }

    void push(int val) {
        freq[val]++;
        if(freq[val] > maxfreq) maxfreq = freq[val];
        groups[freq[val]].push_back(val);
    }

    int pop() {
        int ans = groups[maxfreq].back();
        groups[maxfreq].pop_back();
        freq[ans]--;
        if(groups[maxfreq].size() == 0) maxfreq--;
        return ans;
    }
};