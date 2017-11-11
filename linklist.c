#include "stdlib.h"  
#include "stdio.h"  
  
#define NULL 0  
#define LEN sizeof(struct student)  
  
struct student  
{  
    int num;              //学号   
    float score;          //分数，其他信息可以继续在下面增加字段  
    struct student *next;       //指向下一节点的指针  
};  
  
int n;  //节点总数   