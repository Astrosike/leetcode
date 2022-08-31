#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int i, j;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if (result.size() == 2){
                break;
            }
        }
        return result;
    }
};


int main(){
    
    int numsSize, target, temp;
    vector<int> nums;
    Solution solution;
    // input array size
    cout << "Please input the size of array:" << endl;
    cin >> numsSize;
    // input array element
    cout << "Please input array elements:" << endl;
    for(int i =0; i < numsSize; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    // input target value
    cout << "Please input target:" << endl;
    cin >> target;

    vector<int> result = solution.twoSum(nums, target);
    if (result.size() != 0){
        cout << "[" << result[0] << "," << result[1] << "]" << endl;
    }
    else{
        cout << "No match" << endl;
    }

    return 0;
}
