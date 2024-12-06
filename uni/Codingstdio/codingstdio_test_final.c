#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student ID  Name  Honor code
/*

*/

// Your thoughts here!
/*

*/
#define SIZE 50
#define GENRES 8

const char* genre_name[] = {
    "Sci-Fi",
    "Thriller",
    "Action",
    "Romance",
    "Musical",
    "Drama",
    "Animation",
    "War"
};

typedef struct st_movie{
    char title[100];
    int year, genre, playtime, viewers;
    char description[255];
} MOVIE;

// menu functions
int load_movies(MOVIE* list[], char filename[]);
void print_record(MOVIE* list[], int index);
void print_all(MOVIE* list[], int size);
void search(MOVIE* list[], int size);
int add_movie(MOVIE* list[], int size);
void edit_movie(MOVIE* list[], int size);
int remove_movie(MOVIE* list[], int size);
void print_random(MOVIE* list[], int size);
void print_report(MOVIE* list[], int size);
void save_movies(MOVIE* list[], int size);

// utility functions
int index_genre(char* name);
int ask_menu();
void random_pick(int count, int result[], int size);
void count_genre(MOVIE* list[], int size, int result[]);
void print_count_genre(int result[]);
int find_max_viewers(MOVIE* list[], int size);
int find_max_playtime(MOVIE* list[], int size);
int find_next_max_viewers(MOVIE* list[], int size, int max);
int find_next_max_playtime(MOVIE* list[], int size, int max);

int main() {
    MOVIE* mlist[SIZE];
    int size, menu, stop=0;
    srand(1000);
    size = load_movies(mlist, "movies.txt");	
    while(!stop){
        menu = ask_menu();
        switch(menu){
        case 0 : stop = 1;
            break;
        case 1 : print_all(mlist, size);
            break;
        case 2 : search(mlist, size);
            break;
        case 3 : size = add_movie(mlist, size);
            break;
        case 4 : edit_movie(mlist, size);
            break;
        case 5 : size = remove_movie(mlist, size);
            break;
        case 6 : print_random(mlist, size);
            break;
        case 7 : print_report(mlist, size);
            break;
        case 8 : save_movies(mlist, size);
            break;
        }
    }
    return 0;
}

int load_movies(MOVIE* list[], char filename[]){
    int count=0;
    FILE* fp = fopen(filename, "r");
    char title[100], desc[255], genre[50];
    int year, playtime, viewers;
    while(!feof(fp)){
        if(!fgets(title, 100, fp)) break;
        if(title[strlen(title)-1] == '\n') title[strlen(title)-1] = '\0';
        fgets(desc, 255, fp);
        if(desc[strlen(desc)-1] == '\n') desc[strlen(desc)-1] = '\0';
        fscanf(fp, "%d %s %d %d", &year, genre, &playtime, &viewers);
        fgetc(fp);
        //printf("[%d] %s / %s\n", count, title, desc);
        list[count] = (MOVIE*) malloc(sizeof(MOVIE));
        strcpy(list[count]->title, title);
        strcpy(list[count]->description, desc);
        list[count]->year = year;
        list[count]->genre = index_genre(genre);
        list[count]->playtime = playtime;
        list[count]->viewers = viewers;
        count++;
    }
    printf("%d records loaded.\n", count);
    fclose(fp);
    return count;
}

void print_record(MOVIE* list[], int index){
    printf("%s [%d, %s, ", list[index]->title, list[index]->year, genre_name[list[index]->genre]);
    printf("%dmin, Viewers %d]\n", list[index]->playtime, list[index]->viewers);
    printf(">>> %s\n", list[index]->description);
}

void print_all(MOVIE* list[], int size){
    for(int i=0; i<size; i++){
        printf("%2d. %s [%d, %s]\n", i+1, list[i]->title, list[i]->year, genre_name[list[i]->genre]);
    }
}

void search(MOVIE* list[], int size){
    char keyword[50];
    int count=0;
    printf("Enter a keyword > ");
    scanf("%s", keyword);
    printf("\n[Search in the movie title]\n\n");
    for(int i=0; i<size; i++){
        if(strstr(list[i]->title, keyword)){
        print_record(list, i);
        printf("\n");
        count++;
        }
    }
    printf(">%d found.\n", count);
    count = 0;
    printf("\n[Search in the movie description]\n\n");
    for(int i=0; i<size; i++){
        if(strstr(list[i]->description, keyword)){
        print_record(list, i);
        printf("\n");
        count++;
        }
    }
    printf(">%d found.\n", count);
}

int add_movie(MOVIE* list[], int size){
    // Your Code Here!

}

void edit_movie(MOVIE* list[], int size){
    int no;
    printf("Enter a number of list > ");
    scanf("%d", &no);
    if(no > size) {
        printf("Wrong number!\n");
        return;
    }
    // Your Code Here!

}

int remove_movie(MOVIE* list[], int size){
    int no;
    printf("Enter a number of list > ");
    scanf("%d", &no);
    if(no > size) {
        printf("Wrong number!\n");
        return;
    }
    // Your Code Here!
}

void print_random(MOVIE* list[], int size){
    int count, pick[10];
    printf("Enter numbers of movies you want (max 10) > ");
    scanf("%d", &count);
    // Your Code Here!
}


void print_report(MOVIE* list[], int size){
    int top, count[GENRES];
    printf("\n1. Number of movies by genre\n");
    count_genre(list, size, count);
    print_count_genre(count);
    // Your Code Here!
}

void save_movies(MOVIE* list[], int size){
    FILE* fp = fopen("movies.txt", "w");
    // Your Code Here!

    fclose(fp);
}

// Utility Functions
int index_genre(char* name){
    for(int i=0; i<GENRES; i++)
        if(strcmp(genre_name[i], name)==0) return i;
    return -1;
}

int ask_menu(){
    int menu;
    printf("\nMenu (1:List 2:Search 3:Add 4:Edit 5:Remove 6:Random 7:Report 8.Save 0:Exit) > ");
    scanf("%d", &menu);
    return menu;
}

void random_pick(int count, int result[], int size){
    int duplicated, picked=0;
    while(picked < count){
        int number = rand()%size;
        duplicated = 0;
        for(int i=0; i<picked; i++){
            if(number == result[i]) duplicated = 1;
        }
        if(duplicated == 0){
            result[picked] = number; picked++;
        } 
    }
}

void count_genre(MOVIE* list[], int size, int result[]){
    for(int i=0; i<GENRES; i++){
        result[i] = 0;
    }
    // Your Code Here!
}

void print_count_genre(int result[]){
    for(int i=0; i<GENRES; i++){
        printf("[%d] %-10s %d movies\n", i+1, genre_name[i], result[i]);
    }
}

int find_max_viewers(MOVIE* list[], int size){
    int max_index=0;
    for(int i=1; i<size; i++)
        if(list[max_index]->viewers < list[i]->viewers) 
            max_index = i;
    return max_index;
}

int find_max_playtime(MOVIE* list[], int size){
    int max_index=0;
    for(int i=1; i<size; i++)
        if(list[max_index]->playtime < list[i]->playtime) 
            max_index = i;
    return max_index;
}

int find_next_max_viewers(MOVIE* list[], int size, int max){
    int max_index=0;
    for(int i=1; i<size; i++)
        if(list[max_index]->viewers < list[i]->viewers && max > list[i]->viewers) 
            max_index = i;
    return max_index;
}

int find_next_max_playtime(MOVIE* list[], int size, int max){
    int max_index=0;
    for(int i=1; i<size; i++)
        if(list[max_index]->playtime < list[i]->playtime && max > list[i]->playtime) 
            max_index = i;
    return max_index;
}
