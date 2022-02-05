#include <iostream>
#include <random>
#include <urlmon.h>
#include <iostream>
#pragma comment(lib, "urlmon.lib")
#include <stdio.h>
#include <string>
#include <windows.h>
#include <Windows.h>
#include <tchar.h>
#include <Wininet.h>
#include <filesystem>
#include <Windows.h>

#include "cleaner.h"

void downlolad()
{
    HRESULT e = URLDownloadToFile(NULL, _T("HERE YOU PUT DRIVER DOWNLOAD LINK"), _T("C:/Windows/IME/driver_uwu.sys"), 0, NULL);

    HRESULT z = URLDownloadToFile(NULL, _T("HERE YOU PUT MAPPER DOWNLOAD LINK"), _T("C:/Windows/IME/kdmapper.exe"), 0, NULL);
}

void taskkill()
{
	system("taskkill /F /IM EpicGamesLauncher.exe >nul 2>&1");
	system("taskkill /F /IM EasyAntiCheatLauncher.exe >nul 2>&1");
	system("taskkill /F /IM BEService.exe >nul 2>&1");
	system("taskkill /F /IM Fortnite.exe >nul 2>&1");
	system("taskkill /F /IM BattleEyeLauncher.exe >nul 2>&1");
	system("taskkill /F /IM FortniteClient-Win64-Shipping.exe >nul 2>&1");
	system("sc stop BEService >nul 2>&1");
	system("sc stop BEDaisy >nul 2>&1");
	system("sc stop EasyAntiCheat >nul 2>&1");
	system("sc stop EasyAntiCheatSys >nul 2>&1");
}

void shitprotection()
{
    system("taskkill /f /im taskmgr.exe >nul 2>&1");
    system("taskkill /f /im notepad.exe >nul 2>&1");
    system("taskkill /f /im IDA.exe >nul 2>&1");
    system("taskkill /f /im IDA64.exe >nul 2>&1");
    system("taskkill /f /im CheatEngine.exe >nul 2>&1");
    system("taskkill /f /im cheatengine.exe >nul 2>&1");
    system("taskkill /f /im Cheat Engine.exe >nul 2>&1");
    system("taskkill /f /im x32dbg.exe >nul 2>&1");
    system("taskkill /f /im x64dbg.exe >nul 2>&1");
    system("taskkill /f /im Process Hacker.exe >nul 2>&1");
    system("taskkill /f /im HTTP Debugger.exe >nul 2>&1");
    system("taskkill /f /im FolderChangesView.exe >nul 2>&1");
    system("taskkill /f /im Xenos64.exe >nul 2>&1");
    system("taskkill /f /im lunarengine-x86.exe >nul 2>&1");
    system("taskkill /f /im lunarengine-x64.exe >nul 2>&1");
    system("taskkill /f /im WireShark.exe >nul 2>&1");
    system("taskkill /f /im KsDumper.exe >nul 2>&1");
    system("taskkill /f /im Procmon.exe >nul 2>&1");
    system("taskkill /f /im HTTP Debugger Windows Service (32 bit).exe >nul 2>&1");
    system("taskkill /f /im Fiddler.exe >nul 2>&1");
    system("taskkill /f /im dnSpy32.exe >nul 2>&1");
    system("taskkill /f /im dnSpy64.exe >nul 2>&1");
    system("taskkill /f /im PRWare.xyzPrv.exe >nul 2>&1");
    system("taskkill /f /im Costa.exe  >nul 2>&1");
    system("taskkill /f /im PRWare.xyz Private Changes Viewer.exe  >nul 2>&1");
    system("taskkill /f /im Costa.exe  >nul 2>&1"); // Taskkilling The Fucking Proceeses
}

void start()
{
    system("C:/Windows/IME/kdmapper.exe C:/Windows/IME/driver_uwu.sys"); // Spoofing...
}

int main()
{
    SetConsoleTitleA("Your First Pasted Woofer"); // Title.
    std::cout << "Welcome to YOURSPOOFERNAME Spoofer\n"; // Basic
    shitprotection(); // The Shit Protection
    Sleep(5000); // Going put an sleep cuz why not :)
    downlolad(); // Here its going to download the mapper / driver to spoof ur ass
    taskkill(); // Taskkilling EAC and Epic Games (And fortnite if its running)
    system("cls"); // Cleaning The Console
	std::cout << "We are spoofing ur shit ass serials\n"; // Basic Stuff like wtf
    shitprotection(); // The Shit Protection
    start(); // Starting to Spoof
    Sleep(5000); //We Do A Little Trolla:)
    system("cls"); // Cleaning The Console
    std::cout << "Cleaning..\n"; // Basic Shit
    cleaner_for_epic_launcher();
    cleaner_for_network();
    cleaner_for_anticheat();
    cleaner();
    deleteregs();
    Sleep(5000);
    system("cls"); // Cleaning The Console
    std::cout << "Done\n"; //Done of cleaning
    // * Thanks , For Trying It Out If You Have Any Questions Dm Me At : anticheese#1337 *
    system("cls"); // Cleaning The Console
}
