//第 5 章 数组和广义表
#include <stdio.h>

//数组的顺序存储结构

//稀疏矩阵的三元组存储结构
typedef struct
{
    int val;    //值   //如果考试题目中要求使用其他类型，则将int替换为题目要求的类型
    int i,j;    //i:行下标 j:列下标
}Trimat;

//十字链表存储结构
//普通结点结构定义
typedef struct OLNode
{
    int row,col;                 //行号和列号
    struct OLNode *right,*down;  //指向右边结点和下方结点的指针
    float val;                   //值
}OLNode;

//头结点结构定义
typedef struct
{
    OLNode *rhead,*chead;      //指向两头结点数组的指针
    int m,n,k;                 //矩阵行数、列数以及非零结点总数
}CrossList;

//掌握广义表的存储结构


int main() {
    printf("Hello, World!\n");
    return 0;
}