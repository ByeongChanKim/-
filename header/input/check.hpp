
// �����ٶ�,,,�R = true ��ȯ
// �������� �� ,, �� ,,,�� = false ��ȯ
// bool check::hangeulCheck(string& s){
//     // cout << s << endl;
//     string r = "��";
//     string h = "��";
//     for(char c : s)
//         if(c >= r[0] && c <= h[0])
//             return false;
//     for(int i = 0; i < s.size(); ++i){
//         if(bool(s[i]&0x80) != 1)
//             return false; 
//     }
//     return true;
// }
#include<iostream>

bool check::hangeulCheck(char& c1, char& c2){
    // cout << s << endl;
    char* jaum = "�����������������������������������������������������������������äŤǤˤ̤ФѤӤ��¤ĤƤȤɤʤͤΤϤ�";
    // string r = "��";
    // string h = "��";
    
    // std::cout << "r[0] : " << r[0] << std::endl;
    // std::cout << "h[0] : " << h[0] << std::endl;
    // std::cout << "s : " << s << std::endl;
    for(int i = 0; i < sizeof(jaum); i+=2)
    {
        if(c1 == jaum[i] && c2 == jaum[i+1])
            return false;
    }
    
    if((bool(c1&0x80) == 1) && (bool(c2&0x80) == 1)) return true; 
    
    return true;
}