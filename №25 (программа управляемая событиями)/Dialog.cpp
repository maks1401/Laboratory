#include "Dialog.hpp"
#include "iostream"

using namespace std;

Dialog::Dialog():Vector() {
    endState = 0;
}

Dialog::~Dialog() {}

void Dialog::getEvent(TEvent& event) {
    string opInt = "m+-szq"; // Cтрока содержит коды операций
    string s, parameter;
    char code;
    cout << "> "; cin >> s;
    code = s[0]; // Первый символ команды
    
    if(opInt.find(code) >= 0) {
        event.what = evMessage;
        
        switch(code) {
        case 'm': event.command = cmMake; break;
        case '+': event.command = cmAdd; break;
        case 'z': event.command = cmGet; break;
        case '-': event.command = cmRemove; break;
        case 's': event.command = cmShow; break;
        case'q': event.command = cmQuit; break;
        }

        //выделяем параметры команды, если они есть
        if(s.length() > 1) {
            parameter = s.substr(1, s.length()-1);
            int intParameter = atoi(parameter.c_str()); // Преобразуем парметр в число
            event.parameter = intParameter; // Записываем в сообщение
        }
    } else {
        event.what = evNothing; // Пустое событие
    }
}

int Dialog::execute() {
    TEvent event;
    do {
        endState = 0;
        getEvent(event); // Получить событие
        handleEvent(event); // Обработать событие
    } while(!valid());
    return endState;
}

int Dialog::valid() {
    if (endState == 0) return 0;
    else return 1;
}

void Dialog::clearEvent(TEvent& event) {
    event.what = evNothing;
}

void Dialog::endExecute() {
    endState = 1;
}

void Dialog::handleEvent(TEvent& event) {
    if( event.what == evMessage) {
        switch(event.command) {
        case cmMake: // Cоздание группы
            size = event.parameter; // Размер группы
            beg = new Object*[size]; // Выделяем память под массив указателей
            current = 0; // Текущая позиция
            clearEvent(event);
            break;
                
        case cmAdd:
            add();
            clearEvent(event);
            break;

        case cmRemove:
            remove();
            clearEvent( event );
            break;
                
        case cmShow:
            show();
            clearEvent(event);
            break;
                
        case cmQuit:
            endExecute();
            clearEvent(event);
            break;
        
        case cmGet:
            Vector::handleEvent(event);
            clearEvent(event);
            break;
                
        default:
            Vector::handleEvent(event);
        };
    }
}
