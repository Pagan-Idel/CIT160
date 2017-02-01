#include <stdio.h>

struct Subject{
    char name[45];
    char explanation[600];
};

struct Quiz{
    char quizName;
    char question;
    char correctAnswer;
    char reason;
    char score;
};

struct QuizScore{
    char quizName;
    char quizScore;
};

struct Subject openLearnVolley(int option){
    struct Subject aSubject;
    
    if (option == 1){
        
        FILE* subjectFile = fopen("rules.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);
        
    } else if (option == 2){
        FILE* subjectFile = fopen("serving.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);

        
    } else if (option == 3){
        FILE* subjectFile = fopen("passing.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);
    } else if (option == 4){
        FILE* subjectFile = fopen("setting.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);
    } else if (option == 5){
        FILE* subjectFile = fopen("hitting.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);
    } else if (option == 6) {
        FILE* subjectFile = fopen("blocking.txt", "r");
        fscanf(subjectFile, "%[^\n]\n%[^\n]", aSubject.name, aSubject.explanation);
        printf("\n%s\n\n%s\n", aSubject.name, aSubject.explanation);
        fclose(subjectFile);
    } else {
        printf("\nSorry an error occured!\n");
    }


}



int displayMenu(){
    //creating a variable that will accept integers. This variable is declared locally in the function displayMenu(). 
    int option;
    int input;


    //using Printf function which will display a welcome message and options for the user. 

    do{
        printf("\nPlease pick an option bellow:\n\n1) Learn Volleyball\n2) Take Quiz\n3) View Scores\n4) Quit\n\nPlease enter a number: ");

        //scanf allows us to read in input from the user. 
        input = scanf("%d", &option);


        if  (input != 1){
            while((getchar())!='\n');

            printf("\nSorry, that was not a correct option!\n");

        } else if (option <= 0 || option >= 5){
            printf("\nSorry, %d is not an option! \n", option);

        }else {
            return option;
        }

    } while (option <= 0 || option >= 5 || input != 1);
}

int displayLearnVolley(){

    while(1){

        printf("\nLet's learn some volleyball!\nPlease pick a subject to start learning:\n\n1) Rules\n2) Serving\n3) Passing\n4) Setting\n5) Hitting\n6) Blocking\n7) Go Back\n\nPlease enter a number: ");

        //scanf allows us to read in input from the user. 
        int option;
        int input = scanf("%d", &option);
        
       
        if  (input != 1){
            while((getchar())!='\n');

            printf("\nSorry, that was not a correct option!\n");

        } else if (option <= 0 || option >= 8){
            printf("\nSorry, %d is not an option! \n", option);

        }else if (option == 7){
          
            return 0;
        } else {
           
            openLearnVolley(option);
            
        }
       
    } 
}

int displayQuiz(){
   
    while(1){
        printf("\nLet's see what you know!\nPlease pick a subject to start quiz:\n\n1) Rules\n2) Serving\n3) Passing\n4) Setting\n5) Hitting\n6) Blocking\n7) Go Back\n\nPlease enter a number: ");

        //scanf allows us to read in input from the user. 
       
        int option;
        int input = scanf("%d", &option);


        if  (input != 1){
            while((getchar())!='\n');

            printf("\nSorry, that was not a correct option!\n");

        } else if (option <= 0 || option >= 8){
            printf("\nSorry, %d is not an option! \n", option);

        }else if (option == 7){
            return 0;
        } else {

        }

    } 


}

int displayScore(){

    
    while(1){
        printf("\nLet's see your highest scores!\nPlease pick a subject to know your quiz score:\n\n1) Rules\n2) Serving\n3) Passing\n4) Setting\n5) Hitting\n6) Blocking\n7) Go Back\n\nPlease enter a number: ");

        //scanf allows us to read in input from the user. 
        
        int option;
        int input = scanf("%d", &option);


        if  (input != 1){
            while((getchar())!='\n');

            printf("\nSorry, that was not a correct option!\n");

        } else if (option <= 0 || option >= 8){
            printf("\nSorry, %d is not an option! \n", option);

        }else if (option == 7){
            return 0;
        } else {
            //go to file
        }

    } 

}




int main(){
    //I can name this the same variable because it is not in the scope 
    int mainOption;

    printf("\nWelcome to Learn Volley.\nLearn Volley! Play Volley!\n");
    do{
        mainOption = displayMenu();
        if (mainOption == 1){
            displayLearnVolley();

        }else if (mainOption == 2){
            displayQuiz();

        }else if (mainOption == 3){
            displayScore();

        }else if (mainOption == 4){
            printf("\nThank you for using Learn Volley! Come back again!");
            return 0;
        } 
    } while (mainOption != 4);

}