
template<typename S, typename U, typename D>
Calendar<S, U, D>::Calendar(U user)
 :administrator(user), calendarID(user.getUserId()) { }

template<typename S, typename U, typename D>
Calendar<S, U, D>::Calendar(U user, int sharedCalendarId)
 :administrator(user), calendarID(sharedCalendarId) { }

template<typename S, typename U, typename D>
int Calendar<S, U, D>::getCalendarID(){
    return calendarID;
}

template<typename S, typename U, typename D>
U Calendar<S, U, D>::getCalendarAdministrator(){
    return administrator;
}

/*************************일정 파트********************************/
template<typename S, typename U, typename D>
void Calendar<S, U, D>::show_Schedules(){

}

template<typename S, typename U, typename D>
void Calendar<S, U, D>::addSchedule(D startDate, D endDate, string content){
    scheduleList.push_back(S(startDate, endDate, content));
}

template<typename S, typename U, typename D>
void Calendar<S, U, D>::modifySchedule(){

}

template<typename S, typename U, typename D>
void Calendar<S, U, D>::deleteSchedule(string keyword){

}

template<typename S, typename U, typename D>
S& Calendar<S, U, D>::searchSchedule(string keyword){

}

template<typename S, typename U, typename D>
void Calendar<S, U, D>::showNextMonthSchedules(){

}

template<typename S, typename U, typename D>
void Calendar<S, U, D>::showPrevMonthSchedules(){

}




