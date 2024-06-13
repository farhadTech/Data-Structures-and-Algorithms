#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
	int n, choice, pos, new_val, s_val, i, flag,size=10,length;
	printf("Enter the size of array: ");
	scanf("%d", &n);

	int arr[n];

	///Remember that you'll have to insert elements first, before printing, updating, searching and deleting.
	///Check the SAL.exe file to get an idea on how your finished code will run like.

    while(1)
    {
       err:
       printf("\n1.Print \n2.Update\n3.Search\n4.Insert\n5.Delete (bonus)\n0.EXIT");
       printf("\n\nEnter choice: ");
       scanf("%d", &choice);


       if(choice==1)
       {
            printf("\nEnter the index to print: ");
            scanf("%d", &pos);
            printf("\nThe val at index %d: %d", pos, arr[pos]);
       }


       else if(choice==2)
       {
            printf("\nEnter the index to update: ");
            scanf("%d", &pos);
            printf("\nEnter the new value: ");
            scanf("%d", &new_val);
            arr[pos]=new_val;
            printf("The new val at index %d: %d", pos, arr[pos]);
       }


       else if(choice==3)
       {
            ///WRITE CODE OF LINEAR SEARCH

       }

       else if(choice==4)
       {
            printf("\nEnter element to insert: ");
            scanf("%d", &new_val);
            printf("\nEnter index position to insert (current array length is:%d,so choose an index between %d and %d)"):
            scanf("%d", &pos);


            ///WRITE CODE OF INSERTION
            for(int i= n; i>pos; i--){
                arr[i]= arr[i-1];
            }
            arr[pos]= new_val;

       }

       else if(choice==5)
       {
           printf("\nEnter the position (index) to delete from: ");
            scanf("%d", &pos);

            ///WRITE CODE FOR DELETION (OPTIONAL, BUT YOU'LL GET BONUS MARKS)

       }
       else if(choice==0)
            break;
        else
        {
            printf("\nWrong Choice. Enter again.\n\n");
            goto err;
        }

    }
    return 0;
}

int main() {
    while(true) {
        int arr[SIZE];

        puts("Enter element to insert: ");
        int element;
        scanf("%d", &element);

        int left = 0, right = 0, length = 0;
        printf("Enter index position to insert (current array length is: %d, so choose an index between %d and %d)", length, left, right);
        scanf("%d %d", &left, &right);

        arr[length] = element;
        printf("%d inserted at index %d", element, length);
        length++;
    }

    return 0;
}
