class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
         long long n = tasks.size(), t = 0;
        for(int i = 0; i < n; i++)
            tasks[i].push_back(i);

        sort(tasks.begin(), tasks.end());
        vector<int> v;
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;

        for(int i = 0; i < n; i++)
        {
            while(!pq.empty() && t < tasks[i][0])
                t = max(t, pq.top()[2]) + pq.top()[0], v.push_back(pq.top()[1]), pq.pop();

            pq.push({tasks[i][1], tasks[i][2], tasks[i][0]});
        }
        
        while(!pq.empty())
            t = max(t, pq.top()[2]) + pq.top()[0], v.push_back(pq.top()[1]), pq.pop();

        return v;
    }
};