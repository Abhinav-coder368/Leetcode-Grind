class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
    deque<int> q;
    q.push_back(0);
    visited.insert(0);
    while (!q.empty()) {
        int room = q.front();
        q.pop_front();
        for (int key : rooms[room]) {
            if (visited.count(key) == 0) {
                visited.insert(key);
                q.push_back(key);
            }
        }
    }
    return visited.size() == rooms.size();
    }
};