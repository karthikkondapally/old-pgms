#include<stdio.h>
#include"prehead.h"
#include"opeartions.h"
#include"looplist.h"
struct node **head;
main()
{

head = createlinkedlist();
print(&(*head));

head=createlooplinkedlist();
checkforloop(&(*head));

}
