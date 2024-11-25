#include <stdio.h>
#include <string.h>

#define  SIZE  100

#define  INSERT  1
#define  DELETE  2
#define  STATUS  3
#define  SEARCH  4
#define  QUIT  5

struct element{
    char name[20];
    char sid[10];
    double score;
};

void show_menu();
void show_menu();
int get_command();
void insert_element(struct element list[], int* n);
void delete_element(struct element list[], int* n);
void search_score(struct element list[], int n);
void show_status(struct element list[], int n);

void show_menu(){
    printf("\n\n - -  MENU - - \n");
    printf(" 1. Insert an element\n");
    printf(" 2. delete the last element \n");
    printf(" 3. show the current status\n");
    printf(" 4. Search the score by student number\n");
    printf(" 5. quit \n");
    printf("\n      Select a Command: ");
}

int get_command(){
    int tcmd;

    show_menu();
    scanf("%d", &tcmd);
    return tcmd;
}

void insert_element(struct element list[], int* n){

    if (*n >= SIZE)
    {
        printf("The array is full : No more elements can be added.\n\n");
        return;
    }

    printf(" Enter the student name : ");
    scanf("%s", list[*n].name);
    
    printf(" Enter the student number : ");
    scanf("%s", list[*n].sid);

    printf(" Enter the student %s 's score : ", list[*n].sid);
    scanf("%lf", &list[*n].score);
    (*n)++;
    printf("\nAn element has been inserted.\n");
}

void delete_element(struct element list[], int* n){
    if (*n == 0)
    {
        printf("The array is empty : There are no elements to delete\n\n");
        return;
    }

    printf(" The last element has been deleted.\n");
    (*n)--;
}

void search_score(struct element list[], int n){
    char s_num[10];
    int i;

    printf("Enter the student number you want to search for : ");
    scanf("%s", s_num);

    for(i=0; i<n; i++){
        if(strcmp(s_num, list[i].sid)==0){
            printf("The student %s 's score : %.2f\n", list[i].sid, list[i].score);
        }
    }
}

void show_status(struct element list[], int n){
    int k;
    double max, min, sum, average;

    if (n == 0){
        printf("There are no elements in the array. \n\n");
        return;
    }
    sum = max = min = list[0].score;
    for (k = 1; k < n; k++){
        if (list[k].score > max)  max = list[k].score;
        if (list[k].score < min)  min = list[k].score;
        sum += list[k].score;
    }
    average = (double) sum / (double) n;
    printf("\n\n  The current status: \n\n");
    printf("        - The number of elements : %d\n", n);
    printf("        - The maximum of the elemments : %.2f\n", max);
    printf("        - The minimum of the elemments : %.2f\n", min);
    printf("        - The average : %6.2f\n", average);
}

int main(){
    struct element thelist[SIZE];
    int n = 0;  /* the number of elements */
    int cmd;

        do {
            cmd = get_command();
            switch (cmd) {
                case INSERT: insert_element(thelist, &n);
                    break;
                case DELETE: delete_element(thelist, &n);
                    break;
                case STATUS: show_status(thelist, n);
                    break;
                case SEARCH: search_score(thelist, n);
                    break;
                case QUIT: printf(" Bye.\n");
                    break;
                default: printf("\n\n Invalid command, try again, please. \n\n\n");
                    break;
            }
        } while (cmd != QUIT);

    return 0;
}

