/*
 * Problem: Two Pairs with Same Sum
 * Source: GeeksforGeeks
 * URL: https://www.geeksforgeeks.org/problems/satisfy-the-equation5847/1?_gl=1*1vhi6el*_up*MQ..*_gs*MQ..&gclid=Cj0KCQiAiJXYBhD_ARIsAAx2AHkPji1wurkcNTUauL78qz86Mug3WLJSEf2_iMlqWy8LvClYcxkfkbgaArSaEALw_wcB&gbraid=0AAAAAC9yBkAOwPIIFWDhPeR_VfBYfu-vm
 * Difficulty: Medium
 * Language: C
 * Solved on: 2026-11-24 20:46:40 UTC
 * Created by Anunay Srivastava
 * Synced by: GFGHub v1.0
 */

class Solution:
    def findPairs(self, arr):
        n = len(arr)
        mp = {}
        ans = [-1, -1, -1, -1]

        for i in range(n):
            for j in range(i + 1, n):
                s = arr[i] + arr[j]

                if s in mp:
                    a, b = mp[s]

                    if a != i and a != j and b != i and b != j:
                        temp = [a, b, i, j]

                        if ans[0] == -1 or temp < ans:
                            ans = temp

                else:
                    mp[s] = (i, j)

        return ans