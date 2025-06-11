//C Practice - Print Name, DOB, and mobile number
#include <stdio.h>

int main() {
    char firstName[30];
    char lastName[30];
    char birthMonth[10];
    int birthDay;
    int birthYear;
    int mobileNum;
    
    // Asks for the name details
    
    printf("Enter your first name: ");
    scanf("%s",firstName);
    printf("Enter your last name: ");
    scanf("%s",lastName);
    
    
    // Asks for the date of birth
    
    printf("Enter the month you were born in text: ");
    scanf("%s",birthMonth);
    printf("Enter the day you were born: ");
    scanf("%d",&birthDay);
    printf("Enter the year you were born: ");
    scanf("%d",&birthYear);
    
    
    printf("Enter your mobile number: ");
    scanf("%d",&mobileNum);
    
    // Will output the users details.
    printf("Name\t: %s %s\n",firstName, lastName);
    printf("DOB\t\t: %s %d, %d\n",birthMonth, birthDay, birthYear);
    printf("Mobile\t: %d",mobileNum);

    return 0;
}
