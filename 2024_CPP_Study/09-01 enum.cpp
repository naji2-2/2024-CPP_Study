#include <iostream>

using namespace std;

enum FoodStyle {
	KOREAN,		// 0 -> 0�� ����Ʈ ��, ���� �ְ� ������ KOREAN = 0���� �Ѵ�.
	JAPANESE,	// 1
	CHINESE		// 2
};

void main(void)
{
	int style = FoodStyle::KOREAN;

	switch (style)
	{
		// �������� ����ϸ� �������� ��������, �߰��� ���� �����ϰ� �߰��� �� �ִ�.
		case FoodStyle::KOREAN:
			cout << "��ġ, ��, �����" << endl;
			break;
		case FoodStyle::JAPANESE:
			cout << "�ʹ�, �쵿, Ÿ�ھ߳�" << endl;
			break;
		case FoodStyle::CHINESE:
			cout << "������, ������, ���ķ�" << endl;
			break;
		default:
			break;
	}
} 