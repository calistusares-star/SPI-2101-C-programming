/*
Name: Ian Henry Idalinya 
Reg no: CT100/G/26284/25
Description: Program to store book titles 
*/

#include<stdio.h>

int main(){
    FILE *file;
    char title[200];
    
    //Open file in append mode(to avoid deleting existing records)
    file = fopen("borrowed_books.txt","a");
    
    if (file == NULL){
    printf("Error opening file.\n");
    return 1;
    }
    
    printf("Enter book title borrowed today: ");
    fgets(title ,sizeof(title),stdin);
    
    //Write title to file
    fprintf(file,"%s",title);
    fclose(file);
    
    printf("Book title saved successfully to borrowed_books.txt\n");
    
    return 0;
}