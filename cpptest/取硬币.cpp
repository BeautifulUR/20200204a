#include<iostream>
#include<Windows.h>
#include<stdio.h>
using namespace std;
int  main(VOID)
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

        Sleep(2000);     //ռ��cpu�ĵȴ� --����    wait��ռ��  ����

    if (!CreateProcess(NULL, "C:\\Windows\\notepad.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
        //����ΪFALSE������̳о����
    {
        fprintf(stderr, "Createprocess Failed ");
    }

    int x;
    while(true)
    {
        cout << "������Ҫѡ��Ĳ�����\n0:���ٽ���\n1:�������\n2:�������\n3:�˳�\n";
        cin >> x;
        switch (x)
        {
        case 0:
            if (TerminateProcess(pi.hProcess, 0))      //��ֹ���̵ľ�����˳�����
                cout << "���ٽ��̳ɹ�" << endl;
            else
                cout << "����ʧ��" << endl;
            break;
        case 1:
            if (SuspendThread(pi.hThread))
                cout << "������̳ɹ�" << endl;
            else
                cout << "����ʧ��" << endl;
            break;
        case 2:
            if (ResumeThread(pi.hThread))
                cout << "������̳ɹ�" << endl;
            else
                cout << "����ʧ��" << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "ѡ���ȷ" << endl;
        }
        system("pause");
        system("cls");
    }
    system("pause");
}
