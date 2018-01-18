#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__

#include <stdlib.h>

typedef int Element; 

typedef struct arrayList
{
	Element *data;
	int length;
	int size;
}arrayList_t;
typedef arrayList_t* pArrayList_t;

/*******************��������*********************/ 
int InitList( pArrayList_t *list,int length );	//�����ʼ�� 
int DestroyList( arrayList_t *list );	//���ٱ�
int ClearList( arrayList_t *list );	//��ձ� 
int IsEmpty( arrayList_t list );	//�Ƿ�Ϊ�ձ� 
int ListLength( arrayList_t list );	//������ 
int Insert( arrayList_t *list,int i,Element e );	//���� 
int Delete( arrayList_t *list,int i );	//ɾ�� 
int Find( arrayList_t list,Element data );	//����Ԫ��λ�� 
Element FindKth( arrayList_t list,int i );	// ��λ�ò���Ԫ�� 
/************************************************/



#endif


