#ifndef __QUICK_SORT_H__
#define __QUICK_SORT_H__

template <class ElemType>
void QuickSort0(ElemType elem[], int low, int high, int n)
// �������:������elem[low .. high]�е�Ԫ�ؽ��п�������
{
    ElemType e = elem[low];				// ȡ����Ԫ��
    int i = low, j = high;
    while (i < j)	{
        while (i < j && elem[j] >= e)	// ʹj�ұߵ�Ԫ�ز�С������Ԫ��
            j--;
        if (i < j)
            elem[i++] = elem[j];

        while (i < j && elem[i] <= e)	// ʹi��ߵ�Ԫ�ز���������Ԫ��
            i++;
        if (i < j)
            elem[j--] = elem[i];
    }
    elem[i] = e;
    cout << "�������䣺" << low << "--" << high << ";����λ��Ϊ��" << i << endl;
    Display(elem, n);
    cout << endl;
    if (low < i-1)	QuickSort0(elem, low, i - 1, n);		// ���ӱ�elem[low, i - 1]�ݹ�����
    if (i + 1 < high) QuickSort0(elem, i + 1, high, n);	// ���ӱ�elem[i + 1, high]�ݹ�����
}

template <class ElemType>
void QuickSort1(ElemType elem[], int low, int high, int n)
// ����ȡ�С�
// �������:������elem[low .. high]�е�Ԫ�ؽ��п�������
{
    int m = low + (high - low);
    if (elem[low] > elem[high])
        swap(elem[low], elem[high]);
    if (elem[m] > elem[high])
        swap(elem[m], elem[high]);
    if (elem[m] > elem[low])
        swap(elem[m], elem[low]);

    ElemType e = elem[low];				// ȡ����Ԫ�� 
    int i = low, j = high;
	while (i < j)	{
		while (i < j && elem[j] >= e)	// ʹj�ұߵ�Ԫ�ز�С������Ԫ��
			j--;
		if (i < j)
            elem[i++] = elem[j];

		while (i < j && elem[i] <= e)	// ʹi��ߵ�Ԫ�ز���������Ԫ��
			i++;
		if (i < j)
            elem[j--] = elem[i];
	}

	elem[i] = e;
    cout << "�������䣺" << low << "--" << high << ";����λ��Ϊ��" << i << endl; 
    Display(elem, n);
    cout << endl;
    if (low < i-1)	QuickSort1(elem, low, i - 1, n);		// ���ӱ�elem[low, i - 1]�ݹ�����
	if (i + 1 < high) QuickSort1(elem, i + 1, high, n);	// ���ӱ�elem[i + 1, high]�ݹ�����
}

template <class ElemType>
void QuickSort2(ElemType elem[], int low, int high, int n)
// �������:������elem[low .. high]�е�Ԫ�ؽ��п�������
{
    int m = low + (high - low);
    if (elem[low] > elem[high])
        swap(elem[low], elem[high]);
    if (elem[m] > elem[high])
        swap(elem[m], elem[high]);
    if (elem[m] > elem[low])
        swap(elem[m], elem[low]);

    ElemType e = elem[low];				// ȡ����Ԫ��
    int i = low, j = high;
    while (i < j)	{
        while (i < j && elem[j] >= e)	// ʹj�ұߵ�Ԫ�ز�С������Ԫ��
            j--;
        if (i < j)
            elem[i++] = elem[j];

        while (i < j && elem[i] <= e)	// ʹi��ߵ�Ԫ�ز���������Ԫ��
            i++;
        if (i < j)
            elem[j--] = elem[i];
    }

    elem[i] = e;
    cout << "�������䣺" << low << "--" << high << ";����λ��Ϊ��" << i << endl;
    Display(elem, n);
    cout << endl;
    if (low < i-1)	QuickSort2(elem, low, i - 1, n);		// ���ӱ�elem[low, i - 1]�ݹ�����
    if (i + 1 < high) QuickSort2(elem, i + 1, high, n);	// ���ӱ�elem[i + 1, high]�ݹ�����
}

#endif

