/**
 * @file c_structure.c
 * @author yongjule
 * @brief c structure to compare with cpp structure
 * @date 2022-02-15
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

struct Student {
	int num;
	// void Set(int tmp) { num = tmp; } // 1. c 에서는 멤버 함수 불가능 - compile error
	// Student(int x) { num = x; } // 2. c 에서는 생성자 불가능(애초에 함수가 불가)
	// static int x; // 3. c 에서는 static 불가능
	// int init = 10; // 4. c에서 선언과 동시에 초기화 불가
};


int main(int argc, char** argv) {
	struct Student s1; // 5. 앞에 struct를 붙여야함.
	// struct Student& s2 = s1; // 참조 불가능
	// s1.Set(1);
	printf("%d\n", s1.num);
	return 0;

}