#pragma once
#include <Windows.h>

int oMian(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{


	//MessageBoxExA(NULL, "测试", "标题", MB_OK, 0);

	return oMian(hInstance, hPrevInstance, pCmdLine, nCmdShow);
}