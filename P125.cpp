#include <stdio.h>

void factorial(int n, char *pout)
{
    if(pout == NULL)
    {
        return;
    }

    int arr[256];
    int idx = 1;
    arr[0] = 1;
    //�˴�Ҫע�⡡i�ӣ���ʼ
    for(int i = 1; i <= n; i++)
    {
        //cry������¼��λ
        int cry = 0;
        // idx��¼�����ж���λ���������
        for(int j = 0; j < idx; j++)
        {
            arr[j] = arr[j] * i + cry;
            //�˴��õ���洢
            cry = arr[j] / 10;
            arr[j] %= 10;
        }
        //�����λ���ڣ�����Ҫ����
        while(cry > 10)
        {
            arr[idx++] = cry % 10;
            cry /= 10;
        }
        //��λ��������������ڡ�����֤��λ��Ҫ�ӣ�
        if(cry > 0)
            arr[idx++] = cry;
    }
    //�����鵹��ֵ���ַ���
    for(int i = idx - 1; i >= 0; i--)
    {
        *pout++ = arr[i] + '0';
    }
    *pout = '\0';
    return;
}

int main()
{
    char buff[255] ={};
    int n = 0;
    printf("input n:");
    scanf("%d",&n);
    factorial(n,buff);
    puts(buff);
    return 0;
}

