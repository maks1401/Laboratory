//Трегубов Максим, лаб. №25 (8к)
#include <iostream>
#include "Dialog.hpp"
#include<Windows.h>

int main() 
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
    Dialog dialog;
    dialog.execute();
}
