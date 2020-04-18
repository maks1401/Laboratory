#include "Error_2.h"
error::error(void) {
    str = "";
}
error::error(string a) {
    str = a;
}
void error::what() {
    cout << str << endl;
}
