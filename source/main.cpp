
#include"../header/SharedCalendarManager.h"

#include"../header/input/menuInput.h"

#include<string>

#include"../header/ReadFile.h"

using namespace std;

#include"../header/type/Users.h"

int main(){

    string a = "ans", b = "123";

    User user = User(a, b);
    
    SharedCalendarManager<Schedule, User, Date> scm = SharedCalendarManager<Schedule, User, Date>();

    MenuInput mi = MenuInput(user, scm);

    mi.mainMenu();

    // cout << (int)L'가' << endl;

    return 0;
}