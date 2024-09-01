#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max_question 500
#define max_answer 500
#define total_questions 11

typedef struct {
char question[max_question];
char answerA[max_answer];
char answerB[max_answer];
char answerC[max_answer];
char answerD[max_answer];
char correct_answer;
} quiz_question;

int main(void)
{
quiz_question quiz[total_questions];
strcpy(quiz[0].question, "what does the ++ operator do?");
strcpy(quiz[0].answerA, "add one to a number");
strcpy(quiz[0].answerB, "add two to a number");
strcpy(quiz[0].answerC, "subtract one from a number");
strcpy(quiz[0].answerD, "subtract two from a number");
quiz[0].correct_answer = 'A';


strcpy(quiz[1].question,"who is the founder of c language?");
strcpy(quiz[1].answerA,"steve jobs");
strcpy(quiz[1].answerB,"james gostling");
strcpy(quiz[1].answerC,"denis rechie");
strcpy(quiz[1].answerD,"ramus lerdorf");
quiz[1].correct_answer='C';


strcpy(quiz[2].question,"which is not a valid c datatype?");
strcpy(quiz[2].answerA,"float");
strcpy(quiz[2].answerB,"character");
strcpy(quiz[2].answerC,"boolian");
strcpy(quiz[2].answerD,"interger");
quiz[2].correct_answer='C';  


strcpy(quiz[3].question,"which operator is used to access the value stored in a variable at a specific memory address in c?");
strcpy(quiz[3].answerA,"&(address of operator)");
strcpy(quiz[3].answerB,"*(indirection operator)");
strcpy(quiz[3].answerC,"%(modulus operator)");
strcpy(quiz[3].answerD,"|(bitwise operator)");
quiz[3].correct_answer='B';


strcpy(quiz[4].question,"what will be the result of expression 10%3 in c?");
strcpy(quiz[4].answerA,"0");
strcpy(quiz[4].answerB,"1");
strcpy(quiz[4].answerC,"2");
strcpy(quiz[4].answerD,"3");
quiz[4].correct_answer='B';


strcpy(quiz[5].question,"which loop in c allows the code to be executed at least once?");
strcpy(quiz[5].answerA,"for loop");
strcpy(quiz[5].answerB,"if loop");
strcpy(quiz[5].answerC,"while loop");
strcpy(quiz[5].answerD,"do-while loop");
quiz[5].correct_answer='D';


strcpy(quiz[6].question,"what is the correct way to declare an array in c?");
strcpy(quiz[6].answerA,"int array[10];");
strcpy(quiz[6].answerB,"array int[10];");
strcpy(quiz[6].answerC,"int[] array=10;");
strcpy(quiz[6].answerD,"array[10]int;");
quiz[6].correct_answer='A';


strcpy(quiz[7].question,"what is the result of the expression x=(a++,b++,c++) if a=5,b=10,c=15?");
strcpy(quiz[7].answerA,"x=5");
strcpy(quiz[7].answerB,"x=10");
strcpy(quiz[7].answerC,"x=15");
strcpy(quiz[7].answerD,"x=16");
quiz[7].correct_answer='D';


strcpy(quiz[8].question,"which of the following data structure follow the hierarchical structure?");
strcpy(quiz[8].answerA,"array");
strcpy(quiz[8].answerB,"stack");
strcpy(quiz[8].answerC,"queue");
strcpy(quiz[8].answerD,"tree");
quiz[8].correct_answer='D';
  
    
strcpy(quiz[9].question,"which traversal strategy is used in binary tree?");
strcpy(quiz[9].answerA,"depth traversal");
strcpy(quiz[9].answerB,"priority traversal");
strcpy(quiz[9].answerC,"random traversal");
strcpy(quiz[9].answerD,"breadth first traversal");
quiz[9].correct_answer='D';


strcpy(quiz[10].question,"which statement about tree is false?");
strcpy(quiz[10].answerA,"a tree consists of nodes");
strcpy(quiz[10].answerB,"tree consists cycles");
strcpy(quiz[10].answerC,"tree is a conected graph");
strcpy(quiz[10].answerD,"tree is a bipartite graph");
quiz[10].correct_answer='B';

 
strcpy(quiz[11].question,"DFS uses which structure for its implementation?");
strcpy(quiz[11].answerA,"deque");
strcpy(quiz[11].answerB,"stack");
strcpy(quiz[11].answerC,"queue");
strcpy(quiz[11].answerD,"tree");
quiz[11].correct_answer='B';

double total_correct = 0;
char answer;
    
for (int i = 0; i < total_questions; i++) {
printf("Question %d: %s\n\n", (i + 1), quiz[i].question);
printf("A) %s\n", quiz[i].answerA);
printf("B) %s\n", quiz[i].answerB);
printf("C) %s\n", quiz[i].answerC);
printf("D) %s\n", quiz[i].answerD);
printf("\nEnter answer: ");
scanf(" %c", &answer);
        
if (toupper(answer) == quiz[i].correct_answer) {
total_correct++;
printf("\nCorrect answer!");
}
 else
{
printf("\nIncorrect answer!");
printf("\nCorrect answer was %c.", quiz[i].correct_answer);
}
printf("\n");
}
printf("%d/%d questions answered correctly", (int)total_correct, total_questions);
printf(" (%.2f%%)\n", ((total_correct / total_questions) * 100));

return 0;
}

