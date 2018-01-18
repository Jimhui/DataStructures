#include "arrayList.h"

int InitList(pArrayList_t *list,int length )
{
	*list = (arrayList_t *)malloc(sizeof(arrayList_t));
	if(!list)
		return 0;
	(*list)->data = (Element *)malloc(sizeof(Element)*length);
	if(!(*list)->data)
		return 0;
	(*list)->size = length ;
	(*list)->length = 0;
	return 1;
}

int DestroyList( arrayList_t *list )
{
	free(list->data);
	free(list);
	return 1; 
}

int ClearList( arrayList_t *list )
{
	list->length = 0;
	return 1;
}

int IsEmpty( arrayList_t list )
{
	if( list.length == 0 )
		return 1;
	else
		return 0;
}

int ListLength( arrayList_t list )
{
	return list.length;
}

int Insert( arrayList_t *list,int i,Element e )
{
	if( list->length == list->size || i > list->length + 1)
		return 0;
	int len = list->length ;
	for( ;len > i - 1;len-- )
	{
		list->data[len + 1] = list->data[len];
	}
	list->data[len] = e;
	list->length++;
	return i;
}

int Delete( arrayList_t *list,int i )
{
	if( list->length == 0 || i > list->length)
		return 0;
	Element temp = list->data[i - 1];
	for( ;i < list->length;i++ )
	{
		list->data[i - 1] = list->data[i];
	}
	list->length--;
	return temp;
}

int Find( arrayList_t list,Element data )
{
	int i = 0;
	for( ;i < list.length ;i++ )
	{
		if(list.data[i] == data)
			return i + 1;
	}
	return 0;
}

Element FindKth( arrayList_t list,int i )
{
	if( !list.length || i > list.length)
		return 0;
	return list.data[i - 1];
}


