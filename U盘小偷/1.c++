
#include <windows.h>
//设置当前程序开机启动
void AutoPowerOn()
{
    HKEY hKey;
    //std::string strRegPath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run";
 
 
    //1、找到系统的启动项  
    if (RegOpenKeyEx(HKEY_CURRENT_USER, _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"), 0, KEY_ALL_ACCESS, &hKey) == ERROR_SUCCESS) ///打开启动项       
    {
        //2、得到本程序自身的全路径
        TCHAR strExeFullDir[MAX_PATH];
        GetModuleFileName(NULL, strExeFullDir, MAX_PATH);
 
 
        //3、判断注册表项是否已经存在
        TCHAR strDir[MAX_PATH] = {};
        DWORD nLength = MAX_PATH;
        long result = RegGetValue(hKey, nullptr, _T("GISRestart"), RRF_RT_REG_SZ, 0, strDir, &nLength);
 
 
        //4、已经存在
        if (result != ERROR_SUCCESS || _tcscmp(strExeFullDir, strDir) != 0)
        {
            //5、添加一个子Key,并设置值，"GISRestart"是应用程序名字（不加后缀.exe） 
            RegSetValueEx(hKey, _T("GISRestart"), 0, REG_SZ, (LPBYTE)strExeFullDir, (lstrlen(strExeFullDir) + 1)*sizeof(TCHAR));
 
 
            //6、关闭注册表
            RegCloseKey(hKey);
        }
    }
}