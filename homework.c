#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define task2


#ifdef task1

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


#endif // task1

#ifdef task2
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

#endif // task2

#ifdef task3
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


#endif // task3

#ifdef task4

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




#endif // task4

#ifdef task5

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
#endif // task5

#ifdef test


int main() 
{
	
	printf("Привет, мир!\n");
	return 0;
}


#endif // test
