#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Student ID  Name  Honor code
// 22400176 김준혁 나 김준혁은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다

#define SIZE 50
char genre_name[10][20] = {"","Drama","Action","Romance","Sci-Fi","Horror","Comedy"};

// Functions completed
void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index);
void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);
void random_pick(int result[3], int size);
void list_genre(int result[7]);

// Functions you need to implement
void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);
void random_list(char title[][100], int genre[], int pickup[3]);
void count_genre(int genre[], int size, int result[7]);
int find_max(int num_array[], int size);

// You can't change the main() function.
int main(){
	/*
	Write down your understanding of the code for this function.
	1. 스캔할 영화의 개수를 받고, 그 개수 만큼 영화의 제목을 받고, 끝값을 NULL문자로 바꿔준다.
	2. 그리고 이 영화의 개봉 년도, 장르, 상영시간, 관객수를 받는다.
	3. While문을 통해 메뉴를 받고
	4. 0일 경우 탈출
	5. 1일 경우 list 함수를 모든 영화의 정보를 차례대로 출력
	6. 2일 경우 search 함수를 통해 검색어를 입력 받고 그 단어를 포함한 영화의 정보 출력
	7. 3일 경우 random_pick 함수로 임의로 영화 3개를 고르고 random_list 함수를 통해서 정해진 영화를 출력한다.
	8. 4일 경우 count_genre 함수를 통해서 장르별개수를 측정하고 list_genre 함수를 통해 출력한다.
	9. 그리고 find_max 함수를 통해서 가장 긴 상영시간을 가진 영화와 가장 많은 관객수를 가진 영화를 출력한다.
	*/

	char title[SIZE][100];
	int year[SIZE], genre[SIZE], playtime[SIZE], viewers[SIZE];
	int size, menu;
	int pick[3], top, count[10];

	srand(1000);
	scanf("%d", &size);
	for (int i=0; i<size; i++){
		getchar();
		fgets(title[i], 100, stdin);
		if(title[i][strlen(title[i])-1] == '\n') 
			title[i][strlen(title[i])-1] = '\0';
		scanf("%d %d %d %d", &year[i], &genre[i], &playtime[i], &viewers[i]);
	}

	printf("%d records saved.\n", size);
	while(1){
		printf("\nMenu (1:List 2:Search 3:Random 4:Report 0:Exit) > ");
		scanf("%d", &menu);
		if(menu==0) break;
		if(menu == 1) list(title, year, genre, playtime, viewers, size);
		else if(menu == 2) search(title, year, genre, playtime, viewers, size);
		else if(menu == 3) {
			random_pick(pick, size);
			random_list(title, genre, pick);
		}
		else if(menu == 4){
			printf("1. Number of movies by genre\n");
			count_genre(genre, size, count);
			list_genre(count);
			
			top = find_max(playtime, size);
			printf("2. Longest Playtime\n>>>");
			list_record(title, year, genre, playtime, viewers, top);
			
			top = find_max(viewers, size);
			printf("3. Most viewers\n>>>");
			list_record(title, year, genre, playtime, viewers, top);
		}
	}
	return 0;
}

void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index){
	/*
	Write down your understanding of the code for this function.
	find_max 함수를 통해서 구한 top 값을 파라미터로 받아서 이에 해당하는 영화를 출력한다.
	*/
	printf("%s [%d, %s] ", title[index], year[index], genre_name[genre[index]]);
	printf("Playtime %dmin, Viewers %d\n", playtime[index], viewers[index]);
}

void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size){
	/*
	Write down your understanding of the code for this function.
	menu에 1이 저장되었을떄 size개의 영화에 대한 정보를 모두 출력한다.
	*/
	for(int i=0; i<size; i++){
		printf("%2d. ", i+1);
		list_record(title, year, genre, playtime, viewers, i);
	}
}

void random_pick(int result[3], int size){
	/*
	Write down your understanding of the code for this function.
	1. size개의 영화중 3개의 랜덤한 수를 저장하고,
	2. 이미 나왔던 수라면 다른 수를 저장하고,
	3. 아니라면 result에 값을 저장한다.
	*/
	int duplicated, count=0;
	while(count<3){
		int number = rand()%size;
		duplicated = 0;
		for(int i=0; i<count; i++){
			if(number == result[i]) duplicated = 1;
		}
		if(duplicated == 0){
			result[count] = number; 
			count++;
		} 
	}
}

void list_genre(int result[7]){
	/*
	Write down your understanding of the code for this function.
	1. count_genre에서 구한 장르별 개수를 출력한다
	*/
	for(int i=1; i<=6; i++){
		printf("%s \t %d movies \n", genre_name[i], result[i]);
	}
}

////////////////////////////////////

void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size){
	char keyword[50];
	int count=0;
	printf("Enter a keyword > ");
	scanf("%s", keyword);

	// Your thought and code here!	
	/*
	1. for문으로 size번 반복시켜 
	2. strstr함수로 keyword가 title에 포함되는지 검사
	3. title에 포함되면 list_record를 통해 영화 정보 출력.
	*/
	for(int i=0; i<size; i++){
		if(strstr(title[i], keyword)!=0){
			printf("%2d. ", i+1);
			list_record(title, year, genre, playtime, viewers, i);
			count++;
		}
	}
	
	printf("%d found.\n", count);
}

void random_list(char title[][100], int genre[], int pickup[3]){
	// Your thought and code here!	
	/*
	1. random_pick에서 정해진 랜덤한 수를 파라미터로 하는 pickup을 이용해
	2. pickup에 해당하는 영화 정보를 출력
	*/
	for(int i=0; i<3; i++){
		printf("%2d. ", i+1);
		printf("%s [%s]\n", title[pickup[i]], genre_name[genre[pickup[i]]]);
	}
}

void count_genre(int genre[], int size, int result[7]){
	// Your thought and code here!	
	/*
	1. count를 파라미터로 받는 result의 값을 0으로 초기화하고
	2. for문을 통해서 genre번호에 따라 result에 1씩 더한다. 
	*/
	int i;
	for(i=0; i<7; i++)  result[i]=0;
	for(i=0; i<size; i++)  result[genre[i]]++;
}

int find_max(int num_array[], int size){
	int max=0, max_index;
	// Your thought and code here!
	/*
	1. for문을 통해서 상영시간과 관객수를 받는 num_array의 값이 max값보다 크다면 max값으로 바꾸고 
	2. 해당하는 i를 max_index에 넣고, return한다.
	*/
	for(int i=0; i<size; i++){
		if(max<num_array[i]){
			max=num_array[i];
			max_index=i;
		}
	}
	return max_index;
}

