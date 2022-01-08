import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/*
 * @lc app=leetcode.cn id=15 lang=java
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        // nums元素个数小于3，则不存在解
        if(nums.length < 3){
            return ans;
        }

        // 对数组进行排序
        Arrays.sort(nums);

        for(int i = 0; i < nums.length - 2; ++i){
            //对i进行去重
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            // i后使用双指针
            int left = i + 1;
            int right = nums.length - 1;
            while(left < right)
            {   
                if(nums[i] + nums[left] + nums[right] < 0){
                    // 三数之和小于0，left向右移动
                    left++;
                }else if(nums[i] + nums[left] + nums[right] > 0){
                    // 三数之和小于0，left向右移动
                    right--;
                }else{
                    //保存结果
                    List<Integer> a = new ArrayList<>();
                    a.add(nums[i]);
                    a.add(nums[left]);
                    a.add(nums[right]);
                    ans.add(a);
                    // 对left去重
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    // 对right去重
                    while(left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
}
// @lc code=end

