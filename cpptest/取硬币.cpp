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

        Sleep(2000);     //占用cpu的等待 --挂起    wait不占用  阻塞

    if (!CreateProcess(NULL, "C:\\Windows\\notepad.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
        //参数为FALSE，不会继承句柄，
    {
        fprintf(stderr, "Createprocess Failed ");
    }

    int x;
    while(true)
    {
        cout << "请输入要选择的操作：\n0:销毁进程\n1:挂起进程\n2:激活进程\n3:退出\n";
        cin >> x;
        switch (x)
        {
        case 0:
            if (TerminateProcess(pi.hProcess, 0))      //中止进程的句柄，退出代码
                cout << "销毁进程成功" << endl;
            else
                cout << "销毁失败" << endl;
            break;
        case 1:
            if (SuspendThread(pi.hThread))
                cout << "挂起进程成功" << endl;
            else
                cout << "挂起失败" << endl;
            break;
        case 2:
            if (ResumeThread(pi.hThread))
                cout << "激活进程成功" << endl;
            else
                cout << "激活失败" << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "选项不正确" << endl;
        }
        system("pause");
        system("cls");
    }
    system("pause");
}
