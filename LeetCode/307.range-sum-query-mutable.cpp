/*
 * @lc app=leetcode id=307 lang=cpp
 *
 * [307] Range Sum Query - Mutable
 */

// @lc code=start
class NumArray {
private:
    vector<int> segment_tree;
    vector<int> array;
    int construct_segment_tree(vector<int>& nums , vector<int>& segment_tree , int start , int end , int index){
        if(start == end){
            segment_tree[index] = nums[start];
            return nums[start];
        }
        int mid = start + (end - start)/2;
        segment_tree[index] = construct_segment_tree(nums , segment_tree , start , mid , 2*index + 1) + 
                              construct_segment_tree(nums , segment_tree , mid + 1 , end , 2*index + 2);
        return segment_tree[index];
    }
    int get_range_sum(int start , int end , int left , int right , int index){
        if(left <= start && right >= end){
            return segment_tree[index];
        }
        if(left > end || right < start){
            return 0;
        }
        int mid = start + (end - start)/2;
        return get_range_sum(start , mid , left , right , 2*index + 1) + get_range_sum(mid + 1 , end , left , right , 2*index + 2);
    }
    void update_value(int start , int end , int index , int difference , int start_index){
        if(index < start || index > end){
            return;
        }
        segment_tree[start_index] += difference;
        if(end != start){
            int mid = start + (end - start)/2;
            update_value(start , mid , index , difference , 2*start_index + 1);
            update_value(mid + 1 , end , index , difference , 2*start_index + 2);
        }
    }
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        array = nums;
        int height = (int)ceil(log2(n));
        int max_size = 2*(int)pow(2 , height) - 1;
        segment_tree = vector<int>(max_size);
        construct_segment_tree(nums , segment_tree , 0 , n - 1 , 0);
    }
    
    void update(int index, int val) {
        int difference = val - array[index];
        array[index] = val;
        update_value(0 , array.size() - 1 , index , difference , 0);
    }
    
    int sumRange(int left, int right) {
        return get_range_sum(0 , array.size() - 1 , left , right , 0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
// @lc code=end

