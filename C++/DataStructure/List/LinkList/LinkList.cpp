#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}LNode, *LinkList;

LinkList InitList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    return L;
}

//尾插法创建链表
LinkList CreateListByTail(LinkList &L,int n)
{
    InitList(L);// 初始化链表
    LNode *r,*p;// r指向链表尾节点的指针,p指向新节点的指针
    r = L;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a; // 输入数据
        p = new LNode;
        p->data = a;
        p->next = NULL;
        r->next = p;
        r = p;
    }
    return L;
}

//头插法创建链表
LinkList CreateListByHead(LinkList &L,int n)
{
    InitList(L);// 初始化链表
    LNode *p;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a; // 输入数据
        p = new LNode;
        p->data = a;
        p->next = L->next;//刚开始L->next为NULL
        L->next = p;
    }
    return L;
}

//打印链表
void PrintList(LinkList L)
{
    LNode *p = L->next;// p指向第一个节点
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

//查找值为x的元素
void FindList(LinkList L,int x)
{
    LNode *p = L->next;// p指向第一个节点
    for(int i = 0 ; p->next!=NULL ; i++)
    {
        if(p->data == x)
        {
            cout << "The index of " << x << " is " << i << endl;//输出元素的下标
            return;
        }
        else
        {
            p = p->next;
        }
    }
}

//在i位置插入元素e
void InsertList(LinkList &L,int i,int e )
{
    LNode *p = L->next;// p指向第一个节点
    for(int j = 0; j < i-1 ; j++)
    {
        p = p->next;
    }
    LNode *s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;//插入节点
}

//删除i位置的元素
void DeleteList(LinkList &L,int i)
{
    LNode *p = L->next;// p指向第一个节点
    for(int j = 0; j<i-1; j++)
    {
        p = p->next;
    }
    LNode *q = p->next;
    p->next = q->next;
    q->next = NULL;
    delete q;//删除节点
}

int main()
{
    LinkList L;
    CreateListByTail(L,5);
    PrintList(L);
    return 0;
}