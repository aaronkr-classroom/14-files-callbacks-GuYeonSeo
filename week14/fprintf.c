#include <stdio.h>

int main(void) {
	char* string = "Hello, world";
	short int data = 0xAEFC; //16진수

	// 쓰레기 모드로 텍스트 파일을 오픈
	FILE* p_file = fopen("hello.txt", "wt");

	if (NULL != p_file) { //파일 열기에 성공한 경우
		fprintf(p_file, "%s\n", string);
		fprintf(p_file, "%x\n", data);

		printf("파일 내용을 이렇게 썻어요!~");

		while (fgets(line, MAX_LINE, p_file)) {

		}

		fclose(p_file);
	}
	return 0;
}