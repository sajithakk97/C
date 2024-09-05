/******************************************************************************
Write a C program using struct to manage a library's book records with a menu-driven interface.

Define a structure named Book with the following members:

int bookID: To store the unique ID of the book.
char title[100]: To store the title of the book.
char author[50]: To store the author of the book.
float price: To store the price of the book.
In the main function:

Create a menu-driven interface that allows the user to perform the following operations:
(a)Add a New Book: Input details (book ID, title, author, and price) for a new book. Ensure that the bookID is unique.
(b)Display All Books: Display the details of all books currently stored.
(c)Update Book Price: Input a bookID and update the price of the corresponding book.
(d)Display Book by ID: Input a bookID and display the details of the corresponding book.
(e)Find Book with Highest Price: Display the details of the book with the highest price.
(f)Exit: Exit the program.
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

static i=0;
struct Book{
    int bookId;
    char title[100];
    char author[100];
    float price;
}B[20];

void add_book();
void display_book();
void update_book_price(int);
void display_book_by_id(int);
void highest_price_book_details();

int main()
{
    int book_id,Book_id;
    printf("a:Add a new book\nb:Display all books\nc:Update book price\n"); 
    printf("d:Display book by id\ne:FInd book with highest price\nf:Exit\n");
    char op;
    do{
        printf("Enter your operation:\n");
        scanf(" %c",&op);
        switch(op){
            case 'a':
                add_book();
                break;
            case 'b':
                display_book();
                break;
            case 'c':
                printf("Enter the book id of price to be updated ");
                scanf("%d",&book_id);
                update_book_price(book_id);
                break;
            case 'd':
                printf("Enter the book id of details to be fetch ");
                scanf("%d",&Book_id);
                display_book_by_id(Book_id);
                break;
            case 'e':
                highest_price_book_details();
                break;
            
            case 'f':
                exit(0);
                break;
            default:
                printf("Enter a valid option\n");
                
        }
        
    }while(1);
    return 0;
}
void add_book(){
    int k,id;
    printf("Enter the book details\n");
    scanf("%d %s %s %f",&B[i].bookId, B[i].title, B[i].author, &B[i].price);
    for(k=0;k<i;k++){
        if (B[i].bookId==B[k].bookId && i!=k){
            printf("Already exist!Enter unique id\n");
            scanf("%d",&id);
            B[i].bookId=id;
        }
    }
    i++;
   
    printf("\n");
}
void display_book(){
    int j;
    printf("Book details are\n");
    for(j=0;j<i;j++){
        printf("book id:%d book title:%s book author:%s price:%f",B[j].bookId,B[j].title,B[j].author,B[j].price);
        printf("\n");
    }
    
}
void update_book_price(int book_id){
    float rate;
    int j;
    printf("Enter the updated price:");
    scanf("%f",&rate);
    for(j=0;j<i;j++){
        if(B[j].bookId==book_id){
            B[j].price=rate;
        }
    }
    printf("Successfully updated the price!");
}
void display_book_by_id(int Book_id){
    int j;
    printf("Printing details of book having id %d.......",Book_id);
    for(j=0;j<i;j++){
        if(B[j].bookId==Book_id){
            printf("book id:%d\nbook title:%s\nbook author:%s\nprice:%f",B[j].bookId,B[j].title,B[j].author,B[j].price);
        }
    }
}

void highest_price_book_details(){
    int j;
    float high=B[0].price;
    printf("printing details of book having highest price..\n");
    for(j=0;j<i;j++){
        if (B[j].price>high){
            high=B[j].price;
        }
    }
    for(j=0;j<i;j++){
        if (B[j].price==high){
            printf("book id:%d\nbook title:%s\nbook author:%s\nprice:%f",B[j].bookId,B[j].title,B[j].author,B[j].price);
        
        }
        
    }
}