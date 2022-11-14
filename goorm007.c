#include <stdio.h>
void inputArray(int a[], int size);
void outputArray(int a[], int size);
int insertArray(int a[], int num, int index, int size);
int deleteArray(int a[], int index, int size);

int main()
{
	int a[10], size = 0;
	size = insertArray(a, 10, 0, size);
	size = insertArray(a, 20, 1, size);
	size = insertArray(a, 30, 2, size);
	size = insertArray(a, 50, 2, size);
	outputArray(a, size);
	size = deleteArray(a, 1, size);
	outputArray(a, size);
	return 0;
}
void inputArray(int a[], int size)
{
	int i;
	// 배열에 크기 만큼 데이터 입력
}
void outputArray(int a[], int size)
{
	int i;
	// 배열 크기 만큼 데이터 출력
	printf("\n");
}
int insertArray(int a[], int num, int index, int size)
{
	 if( //여기에 배열 끝부분에 원소 삽입코드 작성
}
else
{ // 여기에 배열 중간에 원소 삽입 코드
}
return size;
}
int deleteArray(int a[], int index, int size)
{
  if( //여기에 배열 끝부분 원소 삭제 코드
}
else
{ // 여기에 배열 중간의 원소 삭제 코드
}
return size;
}