class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
        int randomIndex = low + rand() % (high - low + 1);
        swap(nums[randomIndex], nums[high]);

        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] <= pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[i + 1], nums[high]);
        return i + 1;
    }

    void quickSort(vector<int>& nums, int low, int high) {
    if (low >= high)
        return;

    int pivot = nums[low + rand() % (high - low + 1)];

    int i = low;
    int j = high;

    while (i <= j) {
        while (nums[i] < pivot) i++;
        while (nums[j] > pivot) j--;

        if (i <= j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    quickSort(nums, low, j);
    quickSort(nums, i, high);
}

    vector<int> sortArray(vector<int>& nums) {
        srand(time(0));
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};