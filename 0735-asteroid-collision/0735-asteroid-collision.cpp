class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;

        for (int num : asteroids) {
            bool alive = true;
            while (alive && num < 0 && !result.empty() && result.back() > 0) {
                if (result.back() < abs(num)) {
                    result.pop_back();
                }
                else if (result.back() == abs(num)) {
                    result.pop_back();
                    alive = false;
                }
                else {
                    alive = false;
                }
            }
            if (alive) {
                result.push_back(num);
            }
        }
        return result;
    }
};