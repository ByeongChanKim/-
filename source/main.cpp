
#include"../header/SharedCalendarManager.h"

#include"../header/input/menuInput.h"

#include<string>

#include"../header/ReadFile.h"

using namespace std;

#include"../header/type/Users.h"

int main(){

    Users users = Users("ansrms", "1234");

    Calendar<Schedule, User, Date> cal = Calendar<Schedule, User, Date> (users);

    cal.select_Schedules_option(users);

    return 0;
}