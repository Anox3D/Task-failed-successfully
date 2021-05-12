#include <windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	
	MessageBox(0, "Task failed successfully.", "Windows XP", MB_ICONINFORMATION);
}
