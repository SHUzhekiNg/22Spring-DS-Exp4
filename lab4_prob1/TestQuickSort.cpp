#include "Assistance.h"			// ���������
#include "QuickSort.h"			// ���������㷨

int main(void)
{
	int a[] = {55, 63, 38, 21, 63, 92, 16, 46, 87, 72};
	int b[] = {55, 63, 38, 21, 63, 92, 16, 46, 87, 72};
    int n = 10;
	cout << "����ǰ:";
	Display(a, n);				 
	QuickSort0(a, 0, n - 1, n);
	cout << "�����:";
	Display(a, n);

    cout << "����ǰ:";
    Display(b, n);
    QuickSort1(b, 0, n - 1, n);
    cout << "�����:";
    Display(b, n);

	system("PAUSE");			
	return 0;					
}
