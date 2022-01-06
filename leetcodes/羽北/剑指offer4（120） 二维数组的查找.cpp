////�鿴��άvector�Ĵ�С
//
//#include <iostream>
//#include <vector>
//
//int main() 
//{
//	using namespace std;
//	
//	vector <vector <int> > nums;
//	nums[0].push_back(1);
//	nums[0].push_back(2);
//	nums[1].push_back(3);
//	nums[1].push_back(4);
//	
//	cout << nums[0].size() << endl;
//	
//	return 0;
//}


//�Լ��Ľ�� 
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    //�о���ʼ��naive��˼·�������к����϶����ж��֣�����������.
    //����һ�£����ֶ��ֺ���ֻ����һ������ȥ��������ֻ���ų��г������ĸ�С���������һ��. //������⣬��Ҫʹ�ñ�־λ����������ų�
    //����ʹ�ñ����ⷨ��������Ĺ�ģ���Ҳ����1million�����Ա�������forѭ��.
    //�����ǲ��ǿ���ʹ�����ķ�ʽȥ����.
    //�������ķ����������Բ��ң����ǳ�ʼ���ѡȡ���н�����Ӧ��ѡ���½ǻ������Ͻ�.���������Ͻ�Ϊ���������.����֮�⻹�й��ѣ����������ֽⷨ. 
    bool is_have = false;
    int up = 0;
    int down = matrix.size(); //�õ��ж�����. 
    if (down == 0)
    {
        return is_have;
    }
    int left = 0;
    int right = matrix[0].size(); //�õ��ж����У����￪ʼ��ʱ��û��-1�Ƿ�ֹ����ֱ��Խ��.
    int i = 0;

    right = right - 1; 
    while (right >= 0 && up < down) //������ж������Ƿ�ֹ����������е���һ����Խ��.
    {
        if (matrix[up][right] > target)  //ǧ��ע��up��right��Ҫд�������bug����һ���磡����
            right--;
        else if (matrix[up][right] < target)
            up++;
        else
        {
            is_have = true;
            break;
        }
    }
    return is_have;
    }
};
