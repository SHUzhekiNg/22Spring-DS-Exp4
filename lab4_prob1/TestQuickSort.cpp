#include "Assistance.h"			// 辅助软件包
#include "QuickSort.h"			// 快速排序算法

int main(void)
{
	int a[] = {55, 63, 38, 21, 63, 92, 16, 46, 87, 72};
	int b[] = {55, 63, 38, 21, 63, 92, 16, 46, 87, 72};
    int n = 10;
	cout << "排序前:";
	Display(a, n);				 
	QuickSort0(a, 0, n - 1, n);
	cout << "排序后:";
	Display(a, n);

    cout << "排序前:";
    Display(b, n);
    QuickSort1(b, 0, n - 1, n);
    cout << "排序后:";
    Display(b, n);

	system("PAUSE");			
	return 0;					
}
