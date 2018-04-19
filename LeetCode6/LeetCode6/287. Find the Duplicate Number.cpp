


#include"common.h"
using namespace std;


class _287 {


	// ѧ����ѧ������д�������ִ��롣��ֱ�����㣬������Թ���
	int findDuplicate3(vector<int>& nums)
	{
		if (nums.size() > 1)
		{
			int slow = nums[0];
			int fast = nums[nums[0]];
			while (slow != fast)
			{
				slow = nums[slow];
				fast = nums[nums[fast]];
			}

			fast = 0;
			while (fast != slow)
			{
				fast = nums[fast];
				slow = nums[slow];
			}
			return slow;
		}
		return -1;
	}
};