#pragma once
struct MyStruct
{
	int id;
	char name[50];
} student[10] = { {1,"小李"},{2,"小菜"},{3,"小晓"} };

void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

