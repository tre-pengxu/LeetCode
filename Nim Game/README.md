##Nim Game
>You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.  
Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.  
For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.  

**解题思路**：  
 
1. 我先放1～3个石头
2. 最后放的赢
3. 4个石头必输

|  1   |  2   |  3   |  4   |  5   |  6   | 
| ---- | ---- | ---- | ---- | ---- | ---- |
|win   |win   |win   | X    |win   |win   |

* 当n＝5，6，7时，我分别先取1，2，3个，对方就剩4个，必输  
* 当n＝8时，我取3，3，1个，对方剩5，6，7个，对方赢，我输  
* 总结：4的倍数必输

```
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4;
    }
};

```