/*++
Copyright (c) Advanced Windows Debugging (ISBN 0321374460) from Addison-Wesley Professional.  All rights reserved.

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

--*/

#include <windows.h>
#include <strsafe.h>
#include <stdio.h>
#include <conio.h>

void __cdecl wmain ( )
{
    WCHAR* pszTitle=L"Advanced Windows Debugging";
    
    wprintf(L"Press any key to start\n");
    WCHAR* pBuffer=(WCHAR*) new WCHAR[wcslen(pszTitle)+1];
    if(pBuffer)
    {
        StringCchCopy(pBuffer, wcslen(pszTitle)+1, pszTitle);
        wprintf(L"Title: %s\n", pBuffer);

        pBuffer=NULL;
        *pBuffer='\0';
    }
    else
    {
        wprintf(L"Failed to allocate memory\n");
    }
    wprintf(L"Press any key to end\n");
    __getch();
}

