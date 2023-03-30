#define CRT_SESCURE_NO_WARNINGS
#include <stdio.h>

//from에 꽂혀있는 num개의 원반을 by를 거쳐 to로 이동 
void Hanoi(int num, char from, char by, char to) {

	if (num != 1) {
		Hanoi(num - 1, from, to, by);	//맨 아래 것을 제외하고 중간으로 옮기기
	    printf("원반 %d을 %c에서 %c로 이동\n", num, from, to);	//맨 아래 것을 최종 위치로
		Hanoi(num - 1, by, from, to);	//나머지를 최종 위치로
	}
	else printf("원반 1을 %c에서 %c로 이동\n", from, to);

}

int main(void) {
	//막대 A의 원반 3개를 막대 B를 경유하여 막대 C로 옮기기
	Hanoi(3, 'A','B','C');
	return 0;
}