//to determine if one can borrow books or not
#include<stdio.h>
void main()
{
   char role;
   int borowed,borrowing;
   printf("enter your role('a' for administrator and 's' for student):");
   fflush(stdin);
   scanf("%c",&role);
   switch (role)
   {
    case 'a':
        printf("you can borrow books");
        break;
    case 's':
        printf("enter number of books borrowed:");
        scanf("%d",&borowed);
        printf("enter the number of books you want to borrow:");
        scanf("%d",borrowing);
        if (borrowing + borowed > 10)
        {
            printf("you can't borrow %d books, you can only borrow %d books now",borrowing,borrowing-(borowed+borrowing-10));
        }
        else
        {
            printf("you can borrow books");
        }
        break
   }
}
