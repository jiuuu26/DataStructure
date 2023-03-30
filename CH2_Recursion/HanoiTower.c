#define CRT_SESCURE_NO_WARNINGS
#include <stdio.h>

//from�� �����ִ� num���� ������ by�� ���� to�� �̵� 
void Hanoi(int num, char from, char by, char to) {

	if (num != 1) {
		Hanoi(num - 1, from, to, by);	//�� �Ʒ� ���� �����ϰ� �߰����� �ű��
	    printf("���� %d�� %c���� %c�� �̵�\n", num, from, to);	//�� �Ʒ� ���� ���� ��ġ��
		Hanoi(num - 1, by, from, to);	//�������� ���� ��ġ��
	}
	else printf("���� 1�� %c���� %c�� �̵�\n", from, to);

}

int main(void) {
	//���� A�� ���� 3���� ���� B�� �����Ͽ� ���� C�� �ű��
	Hanoi(3, 'A','B','C');
	return 0;
}