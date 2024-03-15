#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstring> 
#include <vector>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <set>
#include <functional>
#include <conio.h>
using namespace std;

void sortirovka()
{
    const int N = 10;
    int a[N] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };

    int buff = 0;	// для хранения перемещаемого значения
    int i, j;		// для циклов		

    /************* Начало сортировки *******************/
    for (i = 1; i < N; i++)
    {
        buff = a[i]; // запомним обрабатываемый элемент
        // и начнем перемещение элементов слева от него
        // пока запомненный не окажется меньше чем перемещаемый
        for (j = i - 1; j >= 0 && a[j] > buff; j--)
            a[j + 1] = a[j];

        a[j + 1] = buff; // и поставим запомненный на его новое место	
    }

    for (int i = 0; i < N; i++) // вывод отсортированного массива
        cout << a[i] << '\t';
    cout << endl;
}

void dz2_3() {
    double x, y, b, z;
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Введите b" << endl;
    cin >> b;
    if (((b - y) > 0) && (b - x) > 0) {
        z = (log(b - y) * sqrt(b - x));
        cout << "Ответ: " << z << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }
}

void dz2_4() {
    int n;
    int a = 1;
    cout << "Введите произвольное число N" << endl;
    cin >> n;
    if (n <= 0) {
        cout << "N не натуральное" << endl;
    }
    else {
        for (int i = 0; i < 10; i++) {
            cout << "Ответ: " << n + i << endl;
        }
    }
}

void dz2_5() {
    double y, x;
    for (x = -4; x <= 4; x = x + 0.5) {
        if (x == 1) {
            cout << "Для x = " << x << "\t => \t" << "нет решений" << endl;
        }
        else {
            cout << "Для x = " << x << "\t => \t" << "y =" << (x * x - 2 * x + 2) / (x - 1) << endl;
        }
    }
}

void dz2_2() {
    double x, a, w1, w2;
    cout << "Введите переменную х: " << endl;
    cin >> x;
    cout << "Введите переменную a: " << endl;
    cin >> a;
    if (fabs(x) < 1 && (x != 0)) {
        w1 = a * log(abs(x));
        cout << "Ответ: " << w1 << endl;
    }
    else if (x == 0) {
        cout << "Нет решений" << endl;
    }
    else if ((a - x * x) < 0) {
        cout << "Ошибка" << endl;
    }
    else if (abs(x) >= 1) {
        w2 = sqrt(a - x * x);
        cout << "Ответ: " << w2 << endl;
        
    }
    else {
        cout << "Ошибка" << endl;
    }
}

void dz2_1() {
    const double PI = 3.14;
    double S, V, R, r, l, h;
    cout << "Введите радиус большего основания: " << "\n";
    cin >> R;
    cout << "Введите радиус меньшего основания: " << "\n";
    cin >> r;
    cout << "Введите высоту конуса" << "\n";
    cin >> h;
    if ((R > 0) && (r > 0) && (h > 0)) {
        l = sqrt(pow((R - r), 2) + h * h);
        V = (PI * h * (R * R + R * r + r * r) / 3);
        S = (PI * (R * R + l * (R + r) + r * r));
        cout << "Ответ: " << "\n" << "Образующая конуса1: " << l << "\n" << "Площадь полной поверхности конуса: " << S << "\n" << "Объем усеченного конуса: " << V << endl;

    }
    else {
        cout << "Значения не могут быть <= 0" << endl;
    }
}

void dz1_4() {
    int time;
    int lampa, shtora;
    cout << "Сейчас ссветлое или темное время суток?" << "\n" << "Достаточно ввести 1 или 0, где 1 - светлое время суток" << endl;
    cin >> time;
    cout << "В комнате раздвинуты шторы?" << "\n" << "где 1 - да, раздвинуты" << endl;
    cin >> shtora;
    cout << "В комнате включена лампа?" << "\n" << "где 1 - да, включена" << endl;
    cin >> lampa;
    if ((time == 1 && shtora == 1) || (lampa == 1)) {
        cout << "В комнате светло" << endl;
    }
    else {
        cout << "В комнате темно" << endl;
    }
}

void dz1_1() {
    int a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;
    double c = a + b;
    double d = a - b;
    double e = a * b;
    if (a % b == 0) {
        cout << "Число делится нацело: " << (a / b) << endl;
    }
    else {
        cout << "Остаток от деления: " << (a % b) << endl;
    }
    cout << "Ответы: " << "\n" << "Сложение: " << c << "\n" << "Вычитание: " << d << "\n" << "Умножение: " << e << endl;
}

void dz1_2() {
    double b, c;
    cout << "Введите C: " << endl;
    cin >> c;
    cout << "Введите b: " << endl;
    cin >> b;
    if (b == 0 && c == 0) {
        cout << "Ответом будет 0" << endl;
    }
    else if (b == 0) {
        cout << "Ответом будет число С:" << c << endl;
    }
    else if (b != 0) {
        cout << "Ответ:" << (-c) / b << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }
}

void dz1_3() {
    int a, b, c, x1, x2;
    cout << "Введите коэф a: " << endl;
    cin >> a;
    cout << "Введите коэф b: " << endl;
    cin >> b;
    cout << "Введите коэф c: " << endl;
    cin >> c;
    double D = b * b - 4 * a * c;
    if ((a == 0) && (b == 0) && (c == 0)) {
        cout << "Ответом будет 0" << endl;
    }
    if ((a == 0) && (b == 0)) {
        cout << "Решений нет" << endl;
    }
    else if (a == 0) {
        cout << "Ответ: " << (-c) / b << endl;
    }
    else if ((b == 0) && (c == 0)) {
        cout << "Ответом будет 0" << endl;
    }
    else if (D == 0) {
        x1 = ((-b) / (2 * a));
        cout << "Ответ: " << x1 << endl;
    }
    else if (D < 0) {
        cout << "Решений нет" << endl;
    }
    else {
        x1 = (((-b) + sqrt(D)) / (2 * a));
        x2 = (((-b) - sqrt(D)) / (2 * a));
        if (x1 == x2) {
            cout << "Ответ: " << x1 << endl;
        }
        cout << "Ответ: " << "\n" << x1 << "\n" << x2 << endl;
    }
}

void dz3_1() {
    double m, p;
    int s, n;
    cout << "Срок выплаты(лет): " << endl;
    cin >> n;
    cout << "какой процент?" << endl;
    cin >> p;
    cout << "Сумма кредита (рублей)?" << endl;
    cin >> s;
    if (p == 0) {
        cout << "Ответ: " << s / (n * 12) << endl;
    }
    else if (s > 0 && p > 0 && n > 0) {
        m = ((s * (p / 100) * (pow((1 + (p / 100)), n))) / (12 * ((pow((1 + (p / 100)), n) - 1))));
        cout << "Ответ: " << m << endl;
    }
    else {
        cout << "Ошибка" << endl;
    }
}

void dz3_2() {

    double S, n, m0, m, r, p;
    const double eps = 1e-12;

    cout << "Начальная сумма: " << endl;
    cin >> S;
    cout << "количество лет? " << endl;
    cin >> n;
    cout << "ежемесячная выплата: " << endl;
    cin >> m0;

    double left = eps;
    double right = 10000;
    double mid;
    bool flag = false;

    if (S <= 0 || n <= 0 || m0 <= 0)
    {
        cout << "Ошибка" << endl;
    }
    else {
        while (((left - right) <= eps) && (flag != true)) {

            mid = (left + right) / 2;
            m = ((S * (mid / 100) * (pow((1 + (mid / 100)), n))) / (12 * ((pow((1 + (mid / 100)), n) - 1))));

            cout << "m is: \t" << m << "\t" << "mid is: \t" << mid << endl;

            if (fabs(m - m0) < eps) flag = true;
            if (m > m0) right = mid - 0.00001;
            else left = mid + 0.00001;
        }

        if (fabs(m - m0) > 0.0001) cout << "Ответ: " << mid << "%" << endl;
        else cout << "false" << endl;
    }
}

void dz3_3() {
    string str;
    cout << "Введите строку: " << endl;
    cin >> str;

    ofstream fout("cpp.txt");
    fout << str;
    fout.close();

    char buff[70];

    ifstream fin("cpp.txt");
    if (fin.is_open()) {
        fin.getline(buff, 70);
        cout << "string is: " << buff << endl;
        fin.close();
    }

}

void dz3_4() {
    char space = 32;
    char buff[255];
    string str;
    ifstream fin;
    fin.open("C:\\cpp\\cpp.txt");
    fin.getline(buff, 255);

    vector<char> v;

    cout << "buff: " << "\t" << buff << endl;
    char last;
    if (fin.is_open()) {
        for (int i = 0; i < sizeof(buff); i++) {

            if (buff[i] > 48 && buff[i] < 58) {
                str = str + buff[i];
            }
            else if (!str.empty()) {
                cout << str << " ";
                str.clear();
            }
            fin.close();
        }
    }
}

void dz3_5()
{
    string letters1;
    cout << "Введите строку, которую нужно отсортировать :)" << endl;
    cin >> letters1;
    //string letters = "QWERTYUIOPASDFGHJKLZXCVBNM";
    cout << "Сортирую... " << endl;
    for (int i = 0; i < letters1.length(); i++) {
        for (int j = 0; j < letters1.length() - 1; j++)
        {
            int a = int(letters1[j]);
            int b = int(letters1[j + 1]);
            if (a > b) {
                char buff = letters1[j];
                letters1[j] = letters1[j + 1];
                letters1[j + 1] = buff;
            }
        }
    }

    cout << "Answer is: " << letters1 << endl;
};

void binary_search() {
    int array[10];
    int sortarr;

    cout << "Введите числа для заполнения массива " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    sort(array, array + 10);
    for (int i = 0; i < 10; i++) {
        cout << "Элемент массива" << array[i] << endl;
    }

    int key;
    cout << "Введите искомое число" << endl;
    cin >> key;

    int left = 0;
    int right = 9;
    int mid;
    bool flag = false;

    while ((left <= right) && (flag != true)) {
        mid = (left + right) / 2;

        if (array[mid] == key) flag = true;

        if (array[mid] > key) right = mid - 1;
        else left = mid + 1;
    }

    if (flag == true) cout << "Индекс элемента " << mid << endl;
    else cout << "Ошибка" << endl;
}

void dz4_1() {

    double arr[10];
    double sum = 0;

    cout << "Введите числа, которые хотите записать в файлик :)" << endl;

    for (int i = 0; i < 10; i++) { // записываю числа в файл
        cin >> arr[i];
    }

    fstream write; 
    write.open("dz4_1.txt"); // открываю файл и проверяю откроется ли он
    if (!write.is_open()) {
        cout << "Файл не может быть открыт :(" << endl;
    }
    else{
        for (int i = 0; i < 10; i++) { // записываю числа в массив
            write << arr[i] << "\t" << endl;
        }

        double buff[10];
        int j, temp;

        fstream fin;
        fin.open("dz4_1.txt"); // записываю числа из файла в массив
        for (int i = 0; i < 10; i++) {
            fin >> buff[i];
        }

        for (int i = 0; i < 10; i++) {
            sum+=buff[i]; // нахожу сумму чисел массива
        }
    }
    cout << "sum is: \t" << sum << endl; // вывод и закрытие файла
    write.close();
}

void dz3_5a() {
    string str0;
    cout << "Введите строку, которую нужно отсортировать :)" << endl;
    cin >> str0;

    vector<string> str;
    str.push_back(str0);

    cout << "Сортирую... " << endl;

    for (int i = 0; i < size(str); i++) {
        for (int j = 0; j < size(str) - 1; j++) {
            if (str[j] > str[j + 1]) {
                string ch = (str[j]);
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
    cout << "answer is " << "\n";
    for (int i = 0; i < size(str); i++) {
        cout << str[i];
    }
}

void dz3_5b() {
    string str;
    cout << "Введите строку1 \n";
    cin >> str;
    // for(int i = 0; i < str.length(); i++){
    //     for (int j = 0; j < str.length() - 1; j++){
    //         int a = int(str[j]);
    //         int b = int(str[j+1]);
    //         if(a > b){
    //             char buff = str[j];
    //             str[j] = str[j+1];
    //             str[j+1] = buff;
    //         }
    //     }
    // }

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < str.length() - 1; j++) {
            if (tolower(str[j]) > tolower(str[j + 1])) {
                swap(str[j + 1], str[j]);
            }
        }
    }
    cout << str << endl;
}

double rectangle(double  rectangleA, double  rectangleB) {
    double S1 = rectangleA * rectangleB;
    return S1;
}

double triangle(double triangleA, double triangleB, double triangleC) {

    double p = (triangleA + triangleB + triangleC) / 2;

    double S2 = sqrt(p * (p - triangleA) * (p - triangleB) * (p - triangleC));
    return S2;
}

double mihail_circle(double R) {
    double S3 = 3.14159265358979323846 * R * R;
    return S3;
}

void squares() {
    string square;
    cout << "Введите фигуру" << endl;
    cin >> square;
    int a;
    if (square == "rectangle") a = 1;
    if (square == "triangle") a = 2;
    if (square == "circle") a = 3;

    switch (a) { // использую новую перменную а, т.к. оператор принимает только исчисляемые переменные
    case 1: {
        cout << "Введите стороны" << endl;

        double rectangleA;
        double rectangleB;
        cin >> rectangleA;
        cin >> rectangleB;

        if (rectangleA > 0 && rectangleB > 0) {
            double S1 = rectangle(rectangleA, rectangleB);
            cout << "answer is \t" << S1 << endl;
        }
        else {
            cout << "Шляпа" << endl;
        }

        break;
    }
    case 2: {
        cout << "Введите стороны" << endl;

        double triangleA;
        double triangleB;
        double triangleC;
        cin >> triangleA;
        cin >> triangleB;
        cin >> triangleC;

        if (triangleA > 0 && triangleB > 0 && triangleC > 0) {
            if (((triangleA + triangleB) > triangleC) && ((triangleC + triangleB) > triangleA) && ((triangleC + triangleA) > triangleB)) {
                double S2 = triangle(triangleA, triangleB, triangleC);
                cout << "answer is \t" << S2 << endl;
            }
            else {
                cout << "Шляпа";
            }
        }
        else {
            cout << "Шляпа" << endl;
        }

        break;
    }
    case 3: {
        cout << "Введите радиус" << endl;

        double R;
        cin >> R;

        if (R > 0) {
            double S3 = mihail_circle(R);
            cout << "answer is: " << S3 << endl;
        }
        else {
            cout << "Шляпа" << endl;
        }
        break;
    }
    }
}

void USA() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    string underscore = "______________________________";
    string underscore1 = "________________________";
    string stars = "************";
    int counter = 0; 
    int counter1 = 0;
    for (int i = 0; i < 4; i++) { // число строк
        for (int j = 0; j < 12; j++) { // количество звездочек символов в строке
            SetConsoleTextAttribute(handle, BACKGROUND_BLUE);
            cout << "*";
        }
        if(counter % 2 == 0){
            SetConsoleTextAttribute(handle, BACKGROUND_RED);
            cout << underscore << endl;
        }
        else{
            SetConsoleTextAttribute(handle, 0xFF);
            cout << underscore << endl;
        }
        counter++;
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 42; j++) {
            if(counter % 2 == 0){
                SetConsoleTextAttribute(handle, BACKGROUND_RED);
                cout << "_";   
            }
            else{
                SetConsoleTextAttribute(handle, 0xFF);
                cout << "_";
            }  
        }
        cout << endl;
        counter++;
    }
    cout << endl;
    SetConsoleTextAttribute(handle, 0x00);
}

int sign_check(double sign) {
    if (sign == 0) {
        return 0;
    }
    else if (sign > 0) {
        return 1;
    }
    else {
        return -1;
    }
}

void sign() {
    cout << "Введите значение " << endl;
    double sign;
    cin >> sign;
    int answer = sign_check(sign);
    cout << "answer is \t" << answer << endl;
}

int decoder(char rim_num) {
    switch (rim_num) {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
    return 0;
}

int main_decoder(string str) {

    int i = 0;
    int a = 0;
    int num;
    int num0 = 0;
    int num00 = 0;
    int counter = 0;
    if (str.length() == 1) a = 1;
    else if (str.length() >= 2) a = 2;
    else a = 3;
    for(int i = 0; i < str.length(); i++){
        if(decoder(str[i]) == 0){
            cout << "false" << endl;
        }
    }
    bool exit = false;
    switch (a) {
    case 1: {
        for (str.length(); i >= 0; i--) {
            num = decoder(str[i]);
            cout << num << endl;
        }
        break;
    }
    case 2: {
        for (i = str.length(); i >= 0; i--) {
            if(decoder(str[i]) == 5 && decoder(str[i+1]) == 5){
                cout << "error" << endl;
                break;
            } 
            else if (decoder(str[i]) >= num0) {
                num00 += decoder(str[i]);
            }
            else if((decoder(str[i+1]) == 10 || decoder(str[i+1]) == 1 || decoder(str[i+1]) == 100) && (decoder(str[i]) <= decoder(str[i+1]))) cout << "Некорректная запись1" << endl;
            else if (decoder(str[i]) == 1 || decoder(str[i]) == 10 || decoder(str[i]) == 100) {
                num00 -= decoder(str[i]);
            }
            else if (decoder(str[i]) - decoder(str[i + 1]) == decoder(str[i])) {
                cout << "Некорректная запись2" << endl;
                break;
            }
            else {
                cout << "Некорректная запись3" << endl;
                break;
            }
            num0 = decoder(str[i]);
        }
    }
        return num00;

    case 3: {
        cout << "ВВооон он упыырь" << endl;
        break;
        }
    }
    return 0;
}

void sinx(short x, short y) {
    COORD p = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
    cout << "sinx";
}

void sinx_numbers() {
    short x, y;
    cout << "Введи координаты" << endl;
    cin >> x;
    cin >> y;
    const double PI = 3.14159265358979323846;
    for (double i = 0; i <= 2 * PI; i += 0.1) {
        COORD p = { x,y };
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
        cout << sin(i);
    }
}

void dz4_7() {
    int m1 = 37;
    int i1 = 3;
    int c1 = 64;
    int m2 = 25173;
    int i2 = 13849;
    int c2 = 65537;
    int S1, S2 = 1;
    for(int i = 0; i < 1000; i++){
        S1 = (m1*S1+i1) % c1;
        cout << S1 << " ";
    }
    for(int i = 0; i < 1000; i++){
        S2 = (m2*S2+i2) % c2;
        cout << S2 << " ";
    }
}

int ch_to_int(char SS_let) {
    switch (SS_let) {
    case '0': return 0; break;
    case '1': return 1; break;
    case '2': return 2; break;
    case '3': return 3; break;
    case '4': return 4; break;
    case '5': return 5; break;
    case '6': return 6; break;
    case '7': return 7; break;
    case '8': return 8; break;
    case '9': return 9; break;
    case 'A': return 10; break;
    case 'B': return 11; break;
    case 'C': return 12; break;
    case 'D': return 13; break;
    case 'E': return 14; break;
    case 'F': return 15; break;
    }
    return -1;
}

string int_to_ch(int result) {
    switch (result) {
    case 1: return "1"; break;
    case 2: return "2"; break;
    case 3: return "3"; break;
    case 4: return "4"; break;
    case 5: return "5"; break;
    case 6: return "6"; break;
    case 7: return "7"; break;
    case 8: return "8"; break;
    case 9: return "9"; break;
    case 10: return "A"; break;
    case 11: return "B"; break;
    case 12: return "C"; break;
    case 13: return "C"; break;
    case 14: return "E"; break;
    case 15: return "F"; break;
    }
    return "";
}

int convert_to_10(string str, int SS0) {
    int ss10 = 0;
    int length = size(str);
    for(int i = 0; i < length; i++){
        ss10 += ch_to_int(str[length-1-i]) * pow(SS0, i);
    }
    return ss10;
}

string more_10_SS(int num, int SS1 = 2) { // перевод в нужную с.с.
	string new_result = "";
    while(num > 0){
        new_result = int_to_ch(num % SS1) + new_result;
        num /= SS1;
    }
	return new_result;
}

int less_10_SS(int ss10, int SS1 = 2){
    int k = 1;
    int result = 0;
    while(ss10 != 0){
        result+= ss10 % SS1 * k;
        ss10 /= SS1;
        k *= 10;
    }
    return result;
}

void dz4_9() {
    cout << "Введите строку и потом систему счисления" << endl;
    string str;
    int ss10;
    int SS0;
    int SS1;
    int result = 0;
    int k = 1;
    
    int max_strindex = 0;

    cin >> str;
    cin >> SS0;
    cout << "В какую СС хотите перевести?" << endl;
    cin >> SS1;
    if (SS0 < 0 || str == " ") cout << "Error" << endl;
    else if(int_to_ch(ss10) == "" || ch_to_int(ss10) == -1){
        cout << "Ошибкаа" << endl;
    }
    else{
    ss10 = convert_to_10(str, SS0);
    cout << "в 10 сс: \t" << ss10 << endl;
        if (SS1 == 10) cout << "Ответ: " << str << endl;

        else if(SS1 < 10) cout << "answer 1: \t" << less_10_SS(ss10, SS1) << endl;

        else if(SS1 > 10) cout << "answer 2: \t" << more_10_SS(ss10, SS1) << endl;
    }
}

void sin(){
  int size = 80, height = 21;

  vector<string> chart(height, string(size, ' '));
  chart[height/2] = string(size, '-');

  for(int i = 0; i < size; i++) {
    chart[static_cast<int>(round(10 * sin(i / 4.5) + 10))][i] = '*';
  }

  for(auto &&s : chart) {
    cout << s << '\n';
  }
}

void dz4_8(){
    bool flag = false;
    short tableA[3][4] = {{5,2,0,10}, {3,5,2,5}, {20,0,0,0}};
    cout << "Table A: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << tableA[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    double tableB[4][2] = {{1.2, 0.5}, {2.8, 0.4}, {5, 1}, {2, 1.5}};
    cout << "Table B: " << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout << tableB[i][j] << "\t";
        }
        cout << endl;
    }

    double tableC[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            for(int y = 0; y < 4; y++){
                tableC[i][j] += tableA[i][y] * tableB[y][j];
            }
        }
    }

    cout << endl;

    cout << "Table C: " << endl; 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << tableC[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;

    for(int i = 0; i < 2; i++){
        if(tableC[i+1][0] > tableC[i][0]) cout << "Больше всего получил: \t" << tableC[i+1][0] << "\t" << "Индекс продавца:\t" << i+2 << endl;
        else cout << "Меньше всего получил: \t" << tableC[i+1][0] << "\t" << "Индекс продавца:\t" << i+2 << endl;
    } 
    int length = 3;
    cout << endl;
    cout << "Больше комиссионных: \t" << tableC[0][1] << "\t" << "Индекс продавца: \t"<< 1 << endl;
    cout << "Меньше комиссионных: \t" << tableC[length - 1][1] << "\t" << "индекс продавца: \t"<< length << endl;

    // считалово сумм
    double sum;
    double com;
    double fullSum;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            fullSum+=tableC[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i < 3; i++) com+=tableC[i][1];
    for(int i = 0; i < 3; i++) sum += tableC[i][0];

    cout << "Сумма денек: \t" << sum << endl;
    cout << endl;
    cout << "Комиссионные: \t" << com << endl;
    cout << endl;
    cout << "Полная сумма: \t" << fullSum << endl;
}

void dz5_1(){
    int a, b;
    cout << "Введите числа" << endl;
    cin >> a >> b;
    if(a > 0 && b > 0){
        while(a != 0 && b !=0){
            if(a > b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
    }

    cout << "Answer is: \t" << a+b << endl;
}

void resheto()
{
    int n;
    cout << "Введите число: \n";
    cin >> n;
    int* a = new int[n-1];
    if(n > 0){
        for (int i = 0; i < n + 1; i++) a[i] = i;
        for (int p = 2; p < n + 1; p++){
            if (a[p] != 0){
                cout << a[p] << endl;
                for (int j = p*p; j < n + 1; j += p)
                a[j] = 0;
            }
        }
        cin.get();
    }
    else cout << "Ошибка" << endl;
    delete[] a;

}

void findStr(){
    char subStr;
    cout << "Введите подстроку:" << endl;
    cin >> subStr;
    cout << endl;

    int counter = 0;
    char buff[255];

    ifstream read;
    read.open("C:\\cpp\\findStr.txt");

    if(read.is_open()){
        read.getline(buff, 255);
        for(int i = 0; i < 12; i++){
            if(buff[i] == subStr) counter+=1;
        }
        cout << "buff: \t" << buff << endl;
        cout << endl;
        cout << "counter is:\t" <<  counter << "\t";

        read.close();
    }
    else{
        cout << "Ошибка, Файл не открыт" << endl;
    }
}

void minWord(){
    fstream read;
    char buff[255];
    read.open("C:\\cpp\\minWord.txt");
    vector<char> min;
    int counter = 0;
    int max = 0;
    if(read.is_open()){
        read.getline(buff, 255);
        for(int i = 0; i < 25; i++){
            if(buff[i] != 32){
                counter += 1;
                min.push_back(buff[i]);
            }
            else min.push_back(32);
            if(buff[i-1] != 32 && buff[i] == 32) counter = 0;
            if(counter > max) max = counter;
        }
        cout << "Vector letters: \n";
        for(int i = 0; i < size(min); i++){
            cout << min[i];
        }
        bool flag = false;
        int new_max;
        for(int i = 0; i < size(min); i++){
            while(flag != true){
                if(new_max == max) flag = true; 
                if(min[i] != 32) new_max++;

            }
        }
        
        cout << endl;
        cout << "max: \t" << max;
        read.close();
    }
    else{
        cout << "Ошибка, файл не открыт :(" << endl;
    }
}

string sortLess(vector<int> nums){
    
    string answer;
    for (const auto& i : nums) {
        answer += to_string(i) + " ";
    }
    return answer;
}

int ez_num(int num){
    for(int i = 2; i <=sqrt(num); i++){ // проверка, является ли число простым
        if(num % i == 0) return 0;
    }
    return num;
}

string matrix4_4(){
    int matrix[4][4];
    int fakeMatrix[4][4]; // объявление матрицы
    cout << "Укажите, ввести числа с клавиатуры или заполнить матрицу случайными числами?\n 1 - ввести с клавиатуры, 0 - заполнить случайными числами" << endl;
    int a;
    string fail = "Ошибка ввода";
    while (!(cin >> a)){
        cin.clear();
        while (cin.get() != '\n');
        cout << "Неверный ввод. Повторите." << endl;
        cout << "Введите число";
    }

    if(a == 0 || a == 1){
        if(a == 0){ // если значение в переменной "а" равно нулю, то я заполняю матрицу случайными числами
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    matrix[i][j] = rand() % 100 + 1; //создание рандомного числа, от 1 до 100 и заполнение ими матрицы
                    cout << matrix[i][j] << "\t";
                }
                cout << endl;
            }
        }
        else if(a == 1){ // если значение в переменной "а" равно единице - то я заполняю матрицу с клавиатуры
            cout << "Заполните матрицу числами с клавиатуры: \n";
            
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 4; j++){
                    while (!(cin >> matrix[i][j])){
                    cin.clear();
                    while (cin.get() != '\n');
                    cout << "Неверный ввод. Повторите." << endl;
                    cout << "Введите число" << endl;
                    }
                }
            }
        }

        vector<int> answerV; // инициализирую вектор, который будет хранить в себе ответ на задачу

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(ez_num(matrix[i][j]) != 0) answerV.push_back(matrix[i][j]); // если число является простым, добавляю его в вектор answer
            }
        }


        // cout << "Ответ: " << sortLess(answerV);
        return sortLess(answerV);
    }
    else cout << "Вы ввели некорректное значение :9"; // проверка на ввёденное значение в переменной "а"
    return " ";
}





int convert_to_10_from_5(int start, int SS0){
    int ss10 = 0;
    ss10 = ch_to_int(start) * pow(SS0, 1);
    return ss10;
}


void dz5_4(){
    int n;
    cout << "Введите n: \n";
    cin >> n;
    string* a = new string[n];

    vector<int> v1;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < n; j++){
        v1.push_back(convert_to_10(a[j], 5));
    }
    for(int i = 0; i < n; i++){
        cout << v1[i] << " ";
    }
    cout << "\n \n";
    vector<int> v2;
    for(int i = 0; i < n; i++){
        v2.push_back(less_10_SS(v1[i], 2));
    }
    cout << "В двоичной системе: \n";
    for(int i = 0; i < n; i++){
        cout << v2[i] << " ";
    }
    delete[] a;
}
void dz5_5(){
    int n;
    cout << "Введите натуральное число: \n";
    cin >> n;
    int n1 = n*n;
    string n2 = to_string(n1);
    for(int i = 0; i < n2.length(); i++){
        if(n2[i] == '3'){
            cout << "В квадрате числа есть цифра 3" << endl;
            break;
        }
        else{
            cout << "В квадрате числа цифра 3 отсутствует" << endl;
            break;
        }
    }
}

void counter(){
    string n;
    cout << "введите число: \n";
    cin >> n;
    int len = n.length();
    int counter = 0;
    set<char> uniq;
    for(int i = 0; i < len; i++){
        uniq.insert(n[i]);
    }
    cout << "answer is: \t" << size(uniq) << endl;
}

bool checkRise(int n, char buff[]){
    if(buff[0] != '\0'){
        for(int i = 0; i < n; i++){
            if(buff[i] <= buff[i+1] && buff[i] != 32){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}

void readlines(){
    fstream read;
    string str;
    char buff[255];
    int counter = 0;
    int secounter = 0;
    read.open("C:\\cpp\\readlines.txt");
    if(read.is_open()){
        while(!read.eof()){
        read.getline(buff, 255);
        if((checkRise(20, buff)) == true){
            cout << buff << endl;
            counter ++;
            }
        }
        cout << counter ;
    }
    else{
        cout << "File is not open" << endl;
    }
    read.close();
}
void spinner(){
    int base, blade, maxPrice, N;
    const double eps = 0.5;
    cout << "Введите основание спиннера, стоимость одной одной лопасти и максимальную стоимость:" << endl;
    cin >> base;
    cin >> blade;
    cin >> maxPrice;
    N = ((maxPrice - base)/blade);
    if(N >= 0) cout << "answer is: \t" << N;
    int left = 0;
    int right = 1500000;
    int mid;
    int key;
    bool flag = false;
    cout << endl;
    while(left <= right && flag != true){
        mid = (left + right) / 2;
        key = base + blade * mid;
        if(key > maxPrice) right = mid - 1;
        else if(key < maxPrice) left = mid + 1;
        else if(key == maxPrice) flag = true;
    }
    cout << "answer after binary search: \t" << mid; 
}

void rectangles(){
    cout << "Введите N: \n";
    int n;
    cin >> n;
    cout << "Введите M: \n";
    int m;
    cin >> m;
    int x = 0;
    int y = 0;
    for(int i = 0; i  < n;i++){
        x += n - i;
    }
    for(int i = 0; i < m; i++){
        y += m - i;
    }
    cout << x*y;
}
int my_rand(){
    unsigned long seed = 1;
    seed = seed * 1103515245 + 12345;  // Линейный конгруэнтный метод
    return (seed / 65536) % 10;     // Вернуть значение в диапазоне 0-32767
}
int starsCounter(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int answer = 1989){
    int count = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
    if(count == answer){
        return count;
    }
    return 0;
}  
void dz80(){
    int num1 = 12894;
    int num2 = 4193;
    int num3 = 9510;
    int num4 = 8653;
    int num5 = 4381;
    int num6 = 2546;
    int num7 = 1158;
    int num8 = 8645;
    int num9 = 2587;
    int answer = 1989;
    for(int i = 0; i < 8; i++){

    }
}
#define N 9

bool checkSud1(int field[N][N], int col, int str, int el){
    for(int i = 0; i < 9; i++){
        if(field[str][i] == el) return false;
    }
    for(int i = 0; i < 9; i++){
        if(field[i][col] == el) return false;
    }
    int current_line = 0;
    int sec_field[9][9];
    const int subMatrixSize = 3;
    for(int i = 0; i < 9; i++){
        current_line = (i / subMatrixSize) * subMatrixSize;
        for(int j = 0; j < 9; j++){
            // cout << "current_line: " << current_line << " " << j % 3 << endl;
            if((j % subMatrixSize == 0) && (j != 0)) current_line++;
            int currentRow = (j % subMatrixSize) + ((i % subMatrixSize) * subMatrixSize);
            // cout << "cur line: \t" << current_line << "\t" << "cur row: \t" << currentRow << endl;
            // cout << field[current_line][currentRow] << " ";
            sec_field[i][j] = field[current_line][currentRow];
        }
        cout << endl;
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(sec_field[i][j] == el) return false;
        }
    }
    return true;
}

void sudoku(){
    int field[9][9];
    for(int i = 0; i < 11; i++){
        field[3][i] = ' ';
        field[7][i] = ' ';
        field[i][3] = ' ';
        field[i][7] = ' ';
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            field[i][j] = rand() % 9 + 1;
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9;j++){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "\n";
    int current_line = 0;
    string sec_field[9][9];
    const int subMatrixSize = 3;
    for(int i = 0; i < 9; i++){
        current_line = (i / subMatrixSize) * subMatrixSize;
        for(int j = 0; j < 9; j++){
            // cout << "current_line: " << current_line << " " << j % 3 << endl;
            if((j % subMatrixSize == 0) && (j != 0)) current_line++;
            int currentRow = (j % subMatrixSize) + ((i % subMatrixSize) * subMatrixSize);
            // cout << "cur line: \t" << current_line << "\t" << "cur row: \t" << currentRow << endl;
            // cout << field[current_line][currentRow] << " ";
            sec_field[i][j] = field[current_line][currentRow];
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    string num;


    // for(int i = 0; i < 9; i++){
    //     for(int j = 0; j < 9;j++){
    //         num = field[i][j];
    //         if(checkSud(field[i][j], j , i, num) == false) field[i][j] = " "; 
    //     }
    // }
}


int answer = 0;

void count(vector<int> mas, int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (mas[i - 1] == i) {
            count++;
            break;
        }
    }
    if (count > 0) {
        answer++;
    }
}

void perestanovka(vector<int> mas, int n) {
    do{
        count(mas, n);
        }while (next_permutation(mas.begin(), mas.end()));
}

void balls() {
    int n;
    vector<int> mas;
    cout << "Введите количество шариков" << endl;
    cin >> n;
    if (n > 0) {
        mas.reserve(n);
        for (int i = 0; i < n; ++i) {
            mas.push_back(i + 1);
        }
        perestanovka(mas, n);
        cout << answer << endl;
    }
    else {
        cout << "Ошибка";
    }
}




int numbers[] = {12894, 4193, 9510, 8653, 4381, 2546, 1158, 8645, 2587};
char ops[sizeof(numbers) / sizeof(numbers[0]) - 1];
char OPERATORS[] = {'+', '-'};
using namespace std;


void Solve(int idx)
{
    for (char op : OPERATORS)
    {
        ops[idx] = op;
        if (idx > 0)
            Solve(idx - 1);
        else
        {
            int result = numbers[0];
            for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]); i++)
            {
                int operand = numbers[i];
                if (ops[i - 1] == '+')
                    result += operand;
                else
                    result -= operand;
            }
            if (result == 1989)
            {
                cout << numbers[0];
                for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]); i++)
                {
                    cout << ops[i - 1] << numbers[i];
                }
                cout << endl;
            }
        }
    }
}



 
bool isSafe(int grid[N][N], int row, int col, int num)
{
    for (int x = 0; x <= 8; x++){
        if (grid[row][x] == num) return false;
    }
    for (int x = 0; x <= 8; x++){
        if (grid[x][col] == num) return false;
    }
    int startRow = row - row % 3, startCol = col - col % 3;
   
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (grid[i + startRow][j + startCol] == num) return false;
        }
    }
    return true;
}

bool solveSudoku(int grid[N][N], int row, int col)
{
    if (row == N - 1 && col == N) return true; 

    if (col == N) {
        row++;
        col = 0;
    }
   
    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);
 
    for (int num = 1; num <= N; num++) 
    {
        if (isSafe(grid, row, col, num)) 
        {
            grid[row][col] = num;
            if (solveSudoku(grid, row, col + 1))
                return true;
        }
        grid[row][col] = 0;
    }
    return false;
}

void sudoku1(){
    int field[N][N];
    for(int i = 0; i < 4;i++){
        for(int j = 0; j < 4; j++){
            field[i][j] = rand() % 10 + 0;
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(field[0][j] == field[0][i]) field[i][j] = 0;
            else if(field[i][0] == field[i][0]) field[i][j] = 0;
        }
    }
    for(int i = 0; i < 4;i++){
        for(int j = 0; j < 4; j++){
            cout << field[i][j] << " ";
        }
        cout << endl;
    }
    if (solveSudoku(field, 0, 0)){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << field[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "no solution";
    }
} 

void dz90(){
    int mainN;
    cout << "Введите число N: " << endl;
    cin >> mainN;
    cout << "Введите число K: " << endl;
    int K;
    cin >> K;
    vector<int> del;
    for(int i = 2; i < N; i++){
        if(mainN % i == 0) cout << mainN << "\t" << mainN / i << "\t" << i << endl;
        mainN = mainN / i;
    }
}


int main(){

}
