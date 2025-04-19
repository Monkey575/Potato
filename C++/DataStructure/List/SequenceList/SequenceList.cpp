//线性表长度可变
//数组长度不可变
//用一变量表示顺序表的长度属性

#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;
typedef char ElemType;

//定义顺序表类型
    #define MAXSIZE 1000    //顺序表可能达到的最大长度
    typedef struct
    {
        ElemType *elem;    //顺序表的基地址
        Status length;     //顺序表的当前长度
    }SqList;       //顺序表的数据类型

//线性表L的初始化
    Status InitList_Sq(SqList &L)   //构建一个空的顺序表
    {
        L.elem = new ElemType[MAXSIZE];     //为顺序表分配最大存储空间
        if(!L.elem)
            exit(-2);   //分配失败
        else
            L.length = 0;   //空表长度为0
        return 1;

    }

//销毁线性表L
    void DestoryList(SqList &L)
    {
        if(L.elem)
            delete L.elem;  //释放存储空间
    }

//清空线性表L
    void ClearList(SqList &L)
    {
        L.length = 0;
    }

//求线性表的长度
    int GetLength(SqList &L)
    {
        return L.length;
    }

//判断线性表是否为空
    int IsEmpty(SqList &L)
    {
        if (L.length = 0)
            return 0;
        else 
            return 1;
        
    }

//顺序表的取值(根据位置i获取相应位置数据元素的内容)
    int GetElem(SqList L, int i, ElemType &e)
    {
        if( i<1 || i>L.length)
            return -1;
        else
            e = L.elem[i-1];
        return 0; 
    }

//顺序表的按值查找(在线性表中查找值为e的数据元素，返回其序号（是第几个元素）)
    int LocateElem(SqList &L, ElemType e)
    {
        for( int i = 0; i < L.length; i++)
        {
            if (L.elem[i] = e)
                return i+1;
        }
    }   

//顺序表的插入
    bool ListInsert(SqList &L, ElemType e, int i)
    {
        if( i <= 0 || i > L.length)
            return false;
        if( L.length > MAXSIZE)
            return false;

        for( int j=L.length ; j>=i ; j-- )
        {
            L.elem[j] = L.elem[j-1];
        }
        L.elem[i-1] = e;
        L.length++;
        return true;
    }

//顺序表的删除
    bool ListDelete(SqList &L, int i, ElemType &e)
    {
         if( i <= 0 || i > L.length)
            return false;

        fot ( int j = i ; j<L.length ; j++)
        {
            L.elem[j-1] = L.elem[j];
        }
        L.length--;
        return true;
    }

    int main()
    {
        SqList L;
        InitList_Sq(L);
    
        return 0;
    }