// winhex.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#define LPLONGLONG PLONGLONG

typedef int (WINAPI* WHX_Init) (int APIVersion);
WHX_Init Init = NULL;

typedef BOOL(WINAPI * WHX_Done) ();
WHX_Done Init = NULL;

typedef BOOL(WINAPI * WHX_Open) (LPCSTR lpResName);
WHX_Open open = NULL;

typedef BOOL(WINAPI * WHX_Create) (LPCSTR lpPathName, int size);
WHX_Create Create = NULL;

typedef BOOL(WINAPI * WHX_Close)();
WHX_Close Close = NULL;

typedef BOOL(WINAPI * WHX_CloseAll)();
WHX_CloseAll CloseAll = NULL;

typedef BOOL(WINAPI * WHX_NextObj)();
WHX_NextObj NextObj = NULL;

typedef BOOL(WINAPI * WHX_Save)();
WHX_Save Save = NULL;

typedef BOOL(WINAPI * WHX_SaveAs) (LPCSTR lpNewFileName);
WHX_SaveAs SaveAs = NULL;

typedef BOOL(WINAPI * WHX_SaveAll)();
WHX_SaveAll SaveAll = NULL;

typedef BOOL(WINAPI * WHX_OpenEx) (LPCSTR lpResName, int Param);
WHX_OpenEx OpenEx = NULL;

typedef BOOL(WINAPI * WHX_Read) (LPVOID lpBuffer, int Bytes);
WHX_Read Read = NULL;





typedef BOOL (WINAPT)


int main()
{
    return 0;
}

