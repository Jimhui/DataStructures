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
		printf("�����ʼ��ʧ�ܣ�\n");
	}
	while (1)
	{
		printf("������i��d��f��F���в����ɾ�������Ԫ�ػ����λ�ò�����");
		c = getchar();
		getchar();
		if (c == 'i')
		{
			printf("�������������ݣ�");
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
			printf("��������ҵ����ݣ�");
			scanf("%d", &i);
			getchar();
			int num;
			if (num = Find(*list, i))
			{
				printf("%d %d\n", num, i);
			}
			else
			{
				printf("�Ҳ�������\n");
			}
		}
		else if (c == 'F')
		{
			printf("��������ҵ�λ�ã�");
			scanf("%d", &i);
			getchar();
			int num;
			if (num = FindKth(*list, i))
			{
				printf("%d %d\n", i, num);
			}
			else
			{
				printf("�����λ�ô����˱���\n");
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

