#include <iostream>

using namespace std;

enum FoodStyle {
	KOREAN,		// 0 -> 0�� ����Ʈ ��, ���� �ְ� ������ KOREAN = 0���� �Ѵ�.
	JAPANESE,	// 1
	CHINESE		// 2
};

void main(void)
{
	FoodStyle style = KOREAN;

	switch (style)
	{
		// �������� ����ϸ� �������� ��������, �߰��� ���� �����ϰ� �߰��� �� �ִ�.
		case KOREAN:
			cout << "��ġ, ��, �����" << endl;
			break;
		case JAPANESE:
			cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
			break;
		case CHINESE:
			cout << "������, ������, ���ķ�" << endl;
			break;
		default:
			break;
	}
} 