/*#include<stdio.h>
struct Node
{
    int i;
    char c;
    struct Node *ptr;
};
int main()
{
    struct Node var1;
    struct Node var2;

    var1.i=65;
    var1.c='A';
    var1.ptr=NULL;

    var2.i=66;
    var2.c='B';
    var2.ptr=NULL;

    var1.ptr=&var2;
    printf("\n %d",var1.i);
    printf("\n %d",var2.i);
    printf("\n %d",var1.ptr->i);
}*/
#include<stdio.h>
struct Node
{
        int i;
        char c;
        struct Node *ptr;
};
int main()
{
    struct Node var1;
    struct Node var2;
    struct Node var3;
    struct Node var4;
    var1.i=65;
    var1.c='A';
    var1.ptr=NULL;

    var2.i=66;
    var2.c='B';
    var2.ptr=NULL;

    var3.i=67;
    var3.c='C';
    var3.ptr=NULL;

    var4.i=68;
    var4.c='D';
    var4.ptr=NULL;

    var1.ptr=&var2;
    printf("\n %d",var1.i);
    printf("\n %d",var2.i);
    printf("\n %c-%d",var1.ptr->c,var1.ptr->i);

    var2.ptr=&var3;
    printf("\n %d",var2.i);
    printf("\n %d",var3.i);
    printf("\n %c -%d",var2.ptr->c,var2.ptr->i);

    var3.ptr=&var4;
    printf("\n %d",var3.i);
    printf("\n %d",var4.i);
    printf("\n %c -%d",var3.ptr->c,var3.ptr->i);

}
/*//  Self refrefial Node ...... Linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int n;
    char p;
    struct node *ptr;
};
int main()
{
    struct node a,b,c,d,e,f;
    a.n = 65;
    a.p = 'A';
    a.ptr = NULL;
    b.n = 66;
    b.p = 'B';
    b.ptr = NULL;
    c.n = 67;
    c.p = 'C';
    c.ptr = NULL;
    d.n = 68;
    d.p = 'D';
    d.ptr = NULL;
    e.n = 69;
    e.p = 'E';
    e.ptr = NULL;
    f.n = 70;
    f.p = 'F';
    f.ptr = NULL;
    
    printf("Var1 : %d\t%c\t",a.n,a.p); 
    printf("\nVar2 : %d\t%c",b.n,b.p);
    printf("\nVar3 : %d\t%c",c.n,c.p);
    printf("\nVar3 : %d\t%c",d.n,d.p);
    printf("\nVar3 : %d\t%c",e.n,e.p);
    printf("\nVar3 : %d\t%c",f.n,f.p);
    printf("\n");
    
    a.ptr = &b;
    printf("\nPointer A is link with pointer B");
    printf("\nVar1 : %d\t%c",a.ptr->n,a.ptr->p);
    
    b.ptr = &c;
    printf("\nPointer b is link with pointer c");
    printf("\nVar2 : %d\t%c",b.ptr->n,b.ptr->p);
    
    c.ptr = &d;
    printf("\nPointer c is link with pointer d");
    printf("\nVar3 : %d\t%c",c.ptr->n,c.ptr->p);

    d.ptr = &e;
    printf("\nPointer d is link with pointer e");
    printf("\nVar4 : %d\t%c",d.ptr->n,d.ptr->p);

    e.ptr = &f;
    printf("\nPointer e is link with pointer f");
    printf("\nVar5 : %d\t%c",e.ptr->n,e.ptr->p);

    f.ptr = &a;
    printf("\nPointer f is link with pointer a");
    printf("\nVar6 : %d\t%c",f.ptr->n,f.ptr->p);
}*/