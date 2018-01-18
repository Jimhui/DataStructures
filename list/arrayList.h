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

/*******************基本操作*********************/ 
int InitList( pArrayList_t *list,int length );	//链表初始化 
int DestroyList( arrayList_t *list );	//销毁表
int ClearList( arrayList_t *list );	//清空表 
int IsEmpty( arrayList_t list );	//是否为空表 
int ListLength( arrayList_t list );	//链表长度 
int Insert( arrayList_t *list,int i,Element e );	//插入 
int Delete( arrayList_t *list,int i );	//删除 
int Find( arrayList_t list,Element data );	//查找元素位置 
Element FindKth( arrayList_t list,int i );	// 由位置查找元素 
/************************************************/



#endif


