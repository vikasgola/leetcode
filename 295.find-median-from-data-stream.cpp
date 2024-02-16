class MedianFinder {
public:
    priority_queue<int> p;
    priority_queue<int, vector<int>, greater<int>> q;

    MedianFinder() {
    }

    void balance(int ps, int qs){
        while(ps-qs > 1){
            q.push(p.top()); p.pop();
            ps--; qs++;
        }
        while(qs - ps > 1){
            p.push(q.top()); q.pop();
            ps++; qs--;
        }
    }

    void addNum(int num) {
        if(p.size() == 0 || p.top() > num) p.push(num);
        else q.push(num);
        balance(p.size(), q.size());
    }

    double findMedian() {
        int psize = p.size(), qsize = q.size();
        if(psize+qsize == 0) return NULL;
        else if((psize+qsize)%2 == 0) return (double)(p.top()+q.top())/2.0;
        else if(psize > qsize) return p.top();
        else return q.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */