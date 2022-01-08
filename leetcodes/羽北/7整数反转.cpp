////������ת.cpp
//
//#include <iostream>
//#include <algorithm>
//
//int main() 
//{
//	using namespace std;
//	
//	int x = -321;
//	while (x % 10 != 0)
//	{
//		cout << abs(x % 10) << endl;
//		x = x / 10;
//	} 
//	
//	return 0;
//}


//AC���� 
class Solution {
public:
    int reverse(int x) {
        bool flag = true;
        long long reverse_num = 0;   //Ϊ�˷�ֹ��������ȷ��ص�����Ҫʹ��long long,�����㹻��. 
        if (x < 0)
        {
            flag = false;  //��¼�Ƿ��Ǹ���������Ϊfalse������Ϊtrue. 
            x = abs(x);    //��ǰȡ����ֵ������������ͬ�����������. 
        }
        while (x / 10 != 0 || x % 10 != 0)  //��һ�ֶ�Ӧĩβ��0������ȡ�����ǰ����ѭ����������ڶ��ֶ�Ӧ��λ��������/10����ǰ���������. 
        {
            reverse_num = 10 * reverse_num + x % 10;  
            x = x / 10;
        }

        if (flag == false)
            reverse_num = -1 * reverse_num;  //�ָ����� 

        if (reverse_num > pow(2, 31) || reverse_num < -pow(2, 31) - 1) //������ĿҪ������. 
            return 0;
        return reverse_num;
    }
};
