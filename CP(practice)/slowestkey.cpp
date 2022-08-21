#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     char slowestKey(vector<int> &releaseTimes, string keysPressed)
//     {
//         // making a pair
//         pair<int, int> p;
//         p.first = releaseTimes[0]; // 9
//         p.second = 0;              // 0

//         for (int i = 1; i < releaseTimes.size(); i++)
//         {
//             if((releaseTimes[i] - releaseTimes[i-1]) >= p.first){
//                 if (releaseTimes[i] - releaseTimes[i - 1] == p.first)
//                 {
//                     if (keysPressed[p.second] < keysPressed[i]))
//                         { // 29 - 9  = 20 > 9
//                             p.first = releaseTimes[i] - releaseTimes[i - 1];
//                             p.second = i;
//                         }
//                 }
//                 else if ((releaseTimes[i] - releaseTimes[i - 1]) > p.first)
//                 {
//                     p.first = releaseTimes[i] - releaseTimes[i - 1];
//                     p.second = i;
//                 }
//         }
//         }
//         return keysPressed[p.second];
//     }
// };
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        pair<int,int> p;
        p.first = releaseTimes[0];
        p.second = 0;
        for (int i = 1 ; i < releaseTimes.size() ; i++)
        {
            if ((releaseTimes[i]-releaseTimes[i-1]) >= p.first){
                if ((releaseTimes[i]-releaseTimes[i-1]) == p.first){
                    if (keysPressed[p.second]< keysPressed[i]){
                        p.first = releaseTimes[i]-releaseTimes[i-1];
                        p.second = i;
                    }
                }else if ((releaseTimes[i]-releaseTimes[i-1]) > p.first){
                    p.first = releaseTimes[i]-releaseTimes[i-1];
                    p.second = i;
                }
            }

        }

        return keysPressed[p.second];
    }
};
int main()
{
    I = Solution();
    I.slowestKey();
    return 0;
}