//#include <iostream>
////#include <cstring>
//int main()
//{
//	using namespace std;
//	
//	string s = "b?";
//	int n = s.length();
//    if (n == 1)
//    {
//        s[0] = 'a';
//        cout << s;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (s[i] == '?')
//        {
//            for (char c = 'a'; c < 'z'; c++)
//            {
//                if (i == 0 && c != s[i+1])
//                {
//                    s[i] = c;
//                    break;
//                }
//                else if (i == n-1 && c != s[i-1])
//                {
//                    s[i] = c;
//                    break;
//                }
//                else if (c != s[i+1] && c != s[i-1])
//                {
//                    s[i] = c;
//                    break;
//                }
//            }
//        }
//    }
//    cout << s;
//}


//AC���� 
class Solution {
public:
    string modifyString(string s) {
        int n = s.length();
        //���������ַ�������Ϊ1���������ֹԽ�硣 
        if (n == 1)
        {
            s[0] = 'a';
            return s;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                for (char c = 'a'; c < 'z'; c++)
                {
                    //���������ʺ��ڿ�ͷ���������ֹ�Ƚ��ظ��ַ���ʱindexԽ�硣 
					if (i == 0 && c != s[i+1])
                    {
                        s[i] = c;
                        break;
                    }
                    //���������ʺ��ڽ�β���������ֹ�Ƚ��ظ��ַ���ʱindexԽ�� 
                    else if (i == n-1 && c != s[i-1])
                    {
                        s[i] = c;
                        break;
                    }
                    //general case: 
                    else if (c != s[i+1] && c != s[i-1])
                    {
                        s[i] = c;
                        break;
                    }
                }
            }
        }
        return s;
    }
};

//�������Ƚ�������ڿ�ͷ���߽�β�����������ʹ�ü�ͷ��β�ķ�ʽ����ֹԽ�磬�о�����a-z�������ַ����ɣ�����ٳ�ȥ����ʱ�����дһ�¡� 

