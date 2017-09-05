//this is version I coded ,since this O(n^2), very common solutions, not efficient.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        ret.clear();
        
        int n = nums.size();
        for(int i = 0 ; i < n; i++
        {

                for(int j=i+1; j<n; j++)
                {
                    if(nums[j] + nums[i] == target ) 
                    {
                        ret.push_back(i);
                        ret.push_back(j);
                        return ret;
                    }
                        
                }
       }

    }
};

/*            
Complexity Analysis above
Brute Force:
Time complexity : O(n^2) For each element, we try to find its complement by looping through the rest of array which takes O(n) time. 
                  Therefore, the time complexity is O(n^2)
Space complexity : O(1).
*/
            
//hash: O(n) from leetcode
vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
            //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);			
			return result;
		}

        //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}
            
/*            
Complexity Analysis:
One-pass Hash Table
Time complexity : O(n). We traverse the list containing nn elements only once. Each look up in the table costs only O(1) time.
Space complexity :O(n). The extra space required depends on the number of items stored in the hash table, which stores at most n elements.
*/    
            
            
//what can I learn
/*
We reduce the look up time from O(n) to O(1) by trading space for speed. A hash table is built exactly for this purpose, 
it supports fast look up in near constant time. I say "near" because if a collision occurred, 
a look up could degenerate to O(n)time. But look up in hash table should be amortized O(1) time 
as long as the hash function was chosen carefully. 

reference about hash_map/map

unordered_map 查找效率快五倍，插入更快，节省一定内存。如果没有必要排序的话，尽量使用 hash_map(unordered_map 就是 boost 里面的 hash_map 实现)。
in C++11,unordered_map
运行效率方面：unordered_map最高，而map效率较低但 提供了稳定效率和有序的序列。
占用内存方面：map内存占用略低，unordered_map内存占用略高,而且是线性成比例的。
需要无序容器，快速查找删除，不担心略高的内存时用unordered_map；有序容器稳定查找删除效率，内存很在意时候用map。

http://blog.csdn.net/blues1021/article/details/45054159

*/
