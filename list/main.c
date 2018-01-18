#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

int main()
{
	char c;
	int i = 0;
	int j = 0;
	pArrayList_t list;
	if (!InitList(&list, 100))
	{
		printf("链表初始化失败！\n");
	}
	while (1)
	{
		printf("请输入i或d或f或F进行插入或删除或查找元素或查找位置操作：");
		c = getchar();
		getchar();
		if (c == 'i')
		{
			printf("请输入插入的数据：");
			scanf("%d", &i);
			getchar();
			Insert(list, list->length + 1 , i);
		}
		else if (c == 'd')
		{
			Delete(list, list->length);
		}
		else if (c == 'f')
		{
			printf("请输入查找的数据：");
			scanf("%d", &i);
			getchar();
			int num;
			if (num = Find(*list, i))
			{
				printf("%d %d\n", num, i);
			}
			else
			{
				printf("找不到数据\n");
			}
		}
		else if (c == 'F')
		{
			printf("请输入查找的位置：");
			scanf("%d", &i);
			getchar();
			int num;
			if (num = FindKth(*list, i))
			{
				printf("%d %d\n", i, num);
			}
			else
			{
				printf("输入的位置大于了表长度\n");
			}
		}
		if (c == 'i' || c == 'd')
		{
			for (j = 0; j < list->length; j++)
				printf("%d ", list->data[j]);
			printf("\n");
		}
	}
	return 0;
	return 0;
}

