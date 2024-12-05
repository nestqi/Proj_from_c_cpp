#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define task5_06


#ifdef task1_08

/// 1. Строка состоит всего из одного какого-то слова. В слово входят буквы и цифры. 
/// Длина строки не более 10000. Ваша задача переместить все цифры в конец строки. Порядок цифр и букв необходимо сохранить
///ghj77kl8dd ==> ghjkldd778

void string(char* input, char* output)
{
	int i = 0, bukv = 0, cifr = 0;
	
	while (input[i] != '\0')
	{
		if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))
		{
			output[bukv] = input[i];
			bukv++;
		}
		i++;
	}
	
	i = 0;
	
	while (input[i] != '\0')
	{
		if (input[i] >= '0' && input[i] <= '9')
		{
			output[cifr + bukv] = input[i];
			cifr++;
		}
		i++;
	}

	output[cifr + bukv] = '\0';
}

int main()
{
	char input[10001];
	char output[10001];

	scanf("%s", input);

	string(input, output);
	printf("%s\n", output);

	return 0;
}


#endif // task1_08

#ifdef task2_08
int main() {
	char team1[20], team2[20];
	int team_1_round, team_2_round, team_1_final, team_2_final;
	int team_1_len = 0, team_2_len = 0;
	char elem;

	// Считываем название первой команды
	scanf("%c", &elem);
	while (elem != ' ') {
		team1[team_1_len++] = elem;
		scanf("%c", &elem);
	}
	team1[team_1_len] = '\0'; // Завершаем строку символом конца строки

	// Пропускаем " - "
	scanf("%c", &elem); // Пропускаем '-'
	scanf("%c", &elem); // Пропускаем пробел

	// Считываем название второй команды
	scanf("%c", &elem);
	while (elem != ' ') {
		team2[team_2_len++] = elem;
		scanf("%c", &elem);
	}
	team2[team_2_len] = '\0'; // Завершаем строку символом конца строки

	// Считываем общий счет и счет первого тайма
	scanf("%d:%d (%d:%d)", &team_1_final, &team_2_final, &team_1_round, &team_2_round);

	// Первый тайм
	printf("First half winner: ");
	if (team_1_round > team_2_round) {
		printf("%s", team1);
	}
	else if (team_1_round < team_2_round) {
		printf("%s", team2);
	}
	else {
		printf("draw");
	}
	printf("\n");

	// Второй тайм
	printf("Second half winner: ");
	if (team_1_final - team_1_round > team_2_final - team_2_round) {
		printf("%s", team1);
	}
	else if (team_1_final - team_1_round < team_2_final - team_2_round) {
		printf("%s", team2);
	}
	else {
		printf("draw");
	}
	printf("\n");

	// Общая победа
	printf("Overall winner: ");
	if (team_1_final > team_2_final) {
		printf("%s", team1);
	}
	else if (team_1_final < team_2_final) {
		printf("%s", team2);
	}
	else {
		printf("draw");
	}
	printf("\n");

	return 0;
}

#endif // task2_08

#ifdef task3_08
void chet_nechet(char* input, char* output)
{
	int i = 0, chet = 0;

	while (input[i] != '\0')
	{
		if (i % 2 == 0)
		{
			output[chet++] = input[i];
		}
		i++;
	}

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 != 0)
		{
			output[chet++] = input[i];
		}
		i++;
	}
	output[chet] = '\0';
}

int main()
{
	char input[10001], output[10001];
	scanf("%s", input);
	chet_nechet(input, output);
	printf("%s\n", output);

	return 0;
}


#endif // task3_08

#ifdef task4_08

int calc(const char* ex)
{
	int res = 0, num = 0;
	char znak = '+';

	for (int i = 0; ex[i] != '\0'; i++)
	{
		if (ex[i] >= '0' && ex[i] <= '9')
		{
			num = num * 10 + (ex[i] - '0');
		}

		if (ex[i] == '-' || ex[i] == '+' || ex[i + 1] == '\0')
		{
			if (znak == '+')
			{
				res += num;
			}
			else if (znak == '-')
			{
				res -= num;
			}

			znak = ex[i];
			num = 0;
		}
	}
	return res;
}


int main()
{
	char ex[10001];
	scanf("%s", ex);
	int result = calc(ex);
	printf("%d\n", result);
	return 0;
}




#endif // task4_08

#ifdef task5_08

int palidrome(const char* str) 
{
	int start = 0, end = 0;
	while (str[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		if (str[start] == ' ')
		{
			start++;
			continue;
		}
		if (str[end] == ' ')
		{
			end--;
			continue;
		}
		if (str[start] != str[end])
		{
			return 0;
		}
		start++;
		end--;

	}

	return 1;
}


int main() {
	char str[100];

	scanf("%[^\n]", str);

	if (palidrome(str)) {
		printf("a palindrome.\n");
	}
	else {
		printf("not a palindrome.\n");
	}

	return 0;
}
#endif // task5_08

#ifdef task1_06

int islocalmin(int** mat, int n, int i, int j)
{
	int current = mat[i][j], sosedi[8], k = 0;

	sosedi[k++] = mat[(i - 1 + n) % n][j];
	sosedi[k++] = mat[(i + 1) % n][j];
	sosedi[k++] = mat[i][(j - 1 + n) % n];
	sosedi[k++] = mat[i][(j + 1) % n];
	sosedi[k++] = mat[(i - 1 + n) % n][(j - 1 + n) % n];
	sosedi[k++] = mat[(i - 1 + n) % n][(j + 1) % n];
	sosedi[k++] = mat[(i + 1) % n][(j - 1 + n) % n];
	sosedi[k++] = mat[(i + 1) % n][(j + 1) % n];

	for (int l = 0; l < k; l++) {
		if (current >= sosedi[l]) {
			return 0;
		}
	}
	return 1;

}

void findlocalmin(int** mat, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (islocalmin(mat, n, i, j))
			{
				printf("local min (%d, %d)", i, j);
			}
		}
	}
}

int main()
{
	int n;
	scanf('%d', &n);

	int** mat = malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) 
	{
		mat[i] = malloc(n * sizeof(int));
	}
	printf("Введите элементы матрицы %dx%d:\n", n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf('%d', &mat[i][j]);
		}
	}

	findlocalmin(mat, n);

	for (int i = 0; i < n; i++) {
		free(mat[i]);
	}
	free(mat);
	return 0;
}




#endif // task1_06

#ifdef task2_06

void finding(int mat[3][3])
{
	for (int j = 0; j < 3; j++)
	{
		int flag = 1;
		for (int i = 1; i < 3; i++)
		{
			if (mat[i][j] <= mat[i-1][j])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf(" stolbec %d", j);
		}

	}
}

int main()
{
	int mat[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	finding(mat);
	return 0;
}

#endif // task2_06

#ifdef task3_06


void finding(int mat[3][3]) {
	int found;
	for (int i = 0; i < 3; i++) 
	{
		found = 1;
		for (int j = 0; j < 3; j++) 
		{
			int isFoundInRow = 0;
			for (int k = 0; k < 3; k++) 
			{
				if (mat[j][k] == mat[0][i]) 
				{
					isFoundInRow = 1;
					break;
				}
			}
			if (!isFoundInRow) 
			{
				found = 0;
				break;
			}
		}
		if (found) 
		{
			printf(" chislo %d ", mat[0][i]);
		}
	}
}

int main() {
	int mat[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	finding(mat);

	return 0;
}


#endif // task3_06

#ifdef task4_06
int main() {
	int mat[3][3];
	int Points[3], Count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int Point = 1;

			for (int k = 0; k < 3; k++) {
				if (mat[i][k] < mat[i][j]) {
					Point = 0;
					break;
				}
			}

			if (Point) {
				for (int k = 0; k < 3; k++) {
					if (mat[k][j] > mat[i][j]) {
						Point = 0;
						break;
					}
				}
			}

			if (Point) {
				Points[Count++] = mat[i][j];
				printf("(%d, %d)", i, j);
			}
		}
	}

	if (Count == 0) {
		printf("net.\n");
	}

	return 0;
}


#endif // task4_06

#ifdef task5_06

void swapRows(int matrix[3][3], int row1, int row2) {
	for (int i = 0; i < 3; i++) {
		int temp = matrix[row1][i];
		matrix[row1][i] = matrix[row2][i];
		matrix[row2][i] = temp;
	}
}

int main() {
	int matrix[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		int zeroRow = -1;
		for (int j = i; j < 3; j++) {
			if (matrix[j][i] == 0) {
				zeroRow = j;
				break;
			}
		}

		if (zeroRow != -1) {
			swapRows(matrix, i, zeroRow);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}


#endif // task5_06



#ifdef test


int main() 
{
	
	printf("Привет, мир!\n");
	return 0;
}


#endif // test
