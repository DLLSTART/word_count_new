#include<stdio.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
void order(vector<struct file_info_>);
struct file_info_
{
	char *name = NULL;
	int num_appear;
};
bool comp(file_info_ a, file_info_ b) { return a.num_appear>b.num_appear; }
vector<char> v_char;
//����һ����Žṹ�������
vector<struct file_info_> file_info_cahr;

void wordcount(FILE *, int word);
//�ṹ���е�Ԫ�ز�Ϊ�գ���Ҫ����
//����һ�������������Ԫ����Ϊ��
bool exist = false;
for (int j = 0; j<file_info_cahr.size(); j++)
{//�������ȣ��ͽ���������Ϊfalse
	if (strcmp(file_info_cahr[j].name, current_char) != 0) exist = false;
	else
	{
		//�����Ҫ����Ӧ�ṹ��ĳ��ִ�����1��ͬʱ����ѭ��
		file_info_cahr[j].num_appear++;
		exist = true;
		break;
	}
}
//ѭ������֮�󣬼���û��������ȵľ���Ҫ���´���һ���ṹ�壬����ṹ������
if (exist == false)
{
	file_info_ file__;

	file__.name = new char[sizeof(current_char)];
	strcpy(file__.name, current_char);
	//�����ִ�������Ϊ1��
	file__.num_appear = 1;
	file_info_cahr.push_back(file__);
}
			}


		}//֮����Ҫ����Щ��Ϣ��¼�ڽṹ������֮��
		charc = fgetc(file);
	}
	//��¼���֮��ӵ��һ�ű��ֱ�Ӷ�������������Ȼ�����ʹ��һ�������������д��
	order(file_info_cahr);
}
int main()
{
	FILE *file = NULL;
	file = fopen("result.txt", "r");
	int word = 0;
	wordcount(file,word);
	return 0;
}