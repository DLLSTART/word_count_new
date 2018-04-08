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
//定义一个存放结构体的容器
vector<struct file_info_> file_info_cahr;

void wordcount(FILE *, int word);
//结构体中的元素不为空，需要遍历
//设置一个变量，如果有元素则为真
bool exist = false;
for (int j = 0; j<file_info_cahr.size(); j++)
{//如果不相等，就将变量设置为false
	if (strcmp(file_info_cahr[j].name, current_char) != 0) exist = false;
	else
	{
		//相等需要将对应结构体的出现次数加1，同时跳出循环
		file_info_cahr[j].num_appear++;
		exist = true;
		break;
	}
}
//循环结束之后，假设没有遇见相等的就需要重新创建一个结构体，加入结构体数组
if (exist == false)
{
	file_info_ file__;

	file__.name = new char[sizeof(current_char)];
	strcpy(file__.name, current_char);
	//将出现次数设置为1；
	file__.num_appear = 1;
	file_info_cahr.push_back(file__);
}
			}


		}//之后还需要将这些信息记录在结构体数组之中
		charc = fgetc(file);
	}
	//记录完成之后拥有一张表格，直接对容器进行排序，然后输出使用一个输出函数来编写、
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