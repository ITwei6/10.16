#include <iostream>

using namespace std;


class parent
{
	int i;
protected:
	int x;
public:
	parent()
	{
		x = 0; i = 0;
	}
	void change()
	{
		x++; i++;
	}
	void display();
};

class son : public parent
{
public:
	void modify();
};

void parent::display()
{
	cout << "x" << x << endl;
}
void son::modify()
{
	x++;
}

//
//int main()
//{
//	son A;
//	parent B;
//	A.display();
//	A.change();
//	A.modify();
//	A.display();
//	B.change();
//	B.display();
//}
//
//
//
#include <iostream>
using namespace std;
#include  <string>
#include <vector>
//int main()
//{
//    string str;
//    int pos = 0;
//    vector<string> vs;
//    while (getline(cin, str))
//    {
//        for (int i = 0; i <= str.size(); i++)
//        {
//            if (str[i] == ' ' || i==str.size())
//            {
//                //substrÇÐ¸î×Ö·û
//
//                vs.push_back(str.substr(pos, i-pos));
//                pos = i + 1;
//            }
//            if (str[i] == '"')
//            {
//                int ret = str.find('"', i);
//
//            }
//        }
//        cout << vs.size() << endl;
//        for (auto& x : vs)
//        {
//            cout << x << endl;
//        }
//    }
//
//}
// 64 Î»Êä³öÇëÓÃ printf("%lld")
int main()
{
    string str;
    int pos = 0;
    vector<string> vs;
    while (getline(cin, str))
    {
        for (int i = 0; i <= str.size(); i++)
        {

            if (str[i] == '"' && i != str.size() - 1)
            {
                int ret = str.find('"', i + 1);
                vs.push_back(str.substr(i + 1, ret-1-i));
                i = ret+1;
                pos = i;
                continue;
            }

            if (str[i] == ' ' || i == str.size())
            {
                
                //substrÇÐ¸î×Ö·û

                vs.push_back(str.substr(pos, i - pos));
                pos = i + 1;
            }


        }
        cout << vs.size() << endl;
        for (auto& x : vs)
        {
            cout << x << endl;
        }
    }

}
//int main()
//{
//
//	int n, m;
//	cin >> n >> m;
//	int count = 0;
//	int num = n;
//	int len = 0, pace = 0;
//	while (n != m)
//	{
//		for (int i = n - 1; i > 1; i--)
//		{
//			if (n % i == 0)//¿ÉÒÔÕû³ý
//			{
//				pace = max(pace, i);
//			}
//		}
//		n += pace;
//		count++;
//		if (n > m)
//		{
//			break;
//		}
//	}
//	if (n > m)cout << -1 << endl;
//	else
//		cout << count << endl;
//
//
//}