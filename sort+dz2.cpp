#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstring> 
#include <vector>

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

void dz2_3(){
    double x, y, b, z;
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Введите b" << endl;
    cin >> b;
    if (((b-y) > 0) && (b-x) > 0){
        z = (log(b-y) * sqrt(b-x));
        cout << "Ответ: " << z << endl;
    }
    else{
        cout << "Ошибка" << endl;
    }
}

void dz2_4(){
    int n;
    int a = 1;
    cout << "Введите произвольное число N" << endl;
    cin >> n;
    if (n <= 0){
        cout << "N не натуральное"  << endl;
        } 
    else{
        for(int i = 0; i<10; i++){
            cout << "Ответ: " << n+i << endl;
        }
    }
}

void dz2_5(){
    double y, x;
    for (x = -4; x <= 4; x = x + 0.5){
        if (x == 1){
            cout << "Для x = " << x << "\t => \t" << "нет решений" << endl;
        }
        else{
            cout << "Для x = " << x << "\t => \t" << "y =" << (x*x - 2*x + 2)/(x-1) << endl;
        }
    }
}

void dz2_2(){
    double x, a, w1, w2;
    cout << "Введите переменную х: " << endl;
    cin >> x;
    cout << "Введите переменную a: " << endl;
    cin >> a;
    if (fabs(x) < 1 && (x != 0)){
        w1 = a*log(abs(x));
        cout << "Ответ: " << w1 << endl;
    }
    else if(x == 0){
        cout << "Нет решений" << endl;
    }
    else if((a-x*x)<0){
        cout << "Ошибка" << endl;
    }
    else if(abs(x) >= 1){
        cout << "Ответ: " << w2 << endl;
        w2 = sqrt(a - x*x);
    }
    else{
        cout << "Ошибка" << endl;
    }
}

void dz2_1(){
    const double PI = 3.14;
    double S, V, R, r, l, h;
    cout << "Введите радиус большего основания: " << "\n";
    cin >> R;
    cout << "Введите радиус меньшего основания: " << "\n";
    cin >> r;
    cout << "Введите высоту конуса" << "\n";
    cin >> h;
    if ((R > 0) && (r > 0) && (h > 0)){
        l = sqrt(pow((R-r), 2) +h*h);
        V = (PI*h*(R*R + R*r + r*r)/3);
        S = (PI * (R*R + l*(R+r) + r*r));
        cout << "Ответ: " << "\n" << "Образующая конуса1: " << l << "\n" << "Площадь полной поверхности конуса: " << S << "\n" << "Объем усеченного конуса: " << V << endl;

    }
    else{
        cout << "Значения не могут быть <= 0" << endl;
    }
}

void dz1_4(){
    int time;
    int lampa, shtora;
    cout << "Сейчас ссветлое или темное время суток?" << "\n" << "Достаточно ввести 1 или 0, где 1 - светлое время суток" << endl;
    cin >> time;
    cout << "В комнате раздвинуты шторы?" << "\n" << "где 1 - да, раздвинуты" << endl;
    cin >> shtora;
    cout << "В комнате включена лампа?" << "\n" << "где 1 - да, включена" << endl;
    cin >> lampa;
    if ((time == 1 && shtora == 1) || (lampa == 1)){
        cout << "В комнате светло" << endl;
    }
    else{
        cout << "В комнате темно" << endl;
    }
}

void dz1_1(){
    int a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;
    double c = a + b;
    double d = a - b;
    double e = a * b;
    if (a % b == 0){
        cout << "Число делится нацело: " << (a/b) << endl;
    }
    else{
        cout << "Остаток от деления: " << (a % b) << endl;
    }
    cout << "Ответы: " << "\n" << "Сложение: " << c << "\n" << "Вычитание: " << d << "\n" << "Умножение: " << e << endl;
}  

void dz1_2(){
    double b,c;
    cout << "Введите C: " << endl;
    cin >> c;
    cout << "Введите b: " << endl;
    cin >> b;
    if (b == 0 && c == 0){
        cout << "Ответом будет 0" << endl;
    }
    else if(b == 0){
        cout << "Ответом будет число С:" << c << endl;
    }
    else if (b != 0){
        cout << "Ответ:" << (-c)/b << endl;
    }
    else{
        cout << "Ошибка" << endl;
    }
}

void dz1_3(){
    int a, b, c, x1, x2;
    cout << "Введите коэф a: " << endl;
    cin >> a;
    cout << "Введите коэф b: " << endl;
    cin >> b;
    cout << "Введите коэф c: " << endl;
    cin >> c;
    double D = b*b - 4*a*c;
    if ((a == 0) && (b == 0) && (c == 0)){
        cout << "Ответом будет 0" << endl;
    }
    if ((a == 0) && (b == 0)){
        cout << "Решений нет" << endl;
    }
    else if (a == 0){
        cout << "Ответ: " << (-c)/b << endl;
    }
    else if ((b == 0) && (c == 0)){
        cout << "Ответом будет 0" << endl;
    }
    else if (D == 0){
        x1 = ((-b)/(2*a));
        cout << "Ответ: " << x1 << endl;
    }
    else if (D<0){
        cout << "Решений нет" << endl;
    }
    else{
        x1 = (((-b) + sqrt(D)) / (2*a));
        x2 = (((-b) - sqrt(D)) / (2*a));
        if (x1 == x2){
            cout << "Ответ: " << x1 << endl;
        }
        cout << "Ответ: " << "\n" << x1 << "\n" << x2 << endl;
    }
}

void dz3_1(){
    double m, p;
    int s, n;
    cout << "Срок выплаты(лет): " << endl;
    cin >> n;
    cout << "какой процент?" << endl;
    cin >> p;
    cout << "Сумма кредита (рублей)?" << endl;
    cin >> s;
    if(p == 0){
        cout << "Ответ: " << s/(n*12) << endl;
    }
    else if(s > 0 && p > 0 && n > 0){
        m = ((s * (p/100)*(pow((1 + (p/100)), n)))/(12 * ((pow((1 + (p/100)), n) - 1))));
        cout << "Ответ: " << m << endl;
    }
    else{
        cout << "Ошибка" << endl;
    }
}

void dz3_2(){

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

if(S <= 0 || n <= 0 || m0 <= 0)
    {
        cout << "Ошибка" << endl;
}
else{
    while(((left - right) <= eps) && (flag != true)){

        mid = (left + right)/2;
        m = ((S * (mid/100)*(pow((1 + (mid/100)), n)))/(12 * ((pow((1 + (mid/100)), n) - 1))));

        cout << "m is: \t" << m << "\t" << "mid is: \t" << mid << endl;

            if(fabs(m-m0) < eps) flag = true;
            if(m > m0) right = mid - 0.00001;
            else left = mid + 0.00001;
        }
        
        if(fabs(m-m0) > 0.0001) cout << "Ответ: " << mid << "%" << endl;
        else cout << "false" << endl;
}
}
    
void dz3_3(){
    string str;
    cout << "Введите строку: " << endl;
    cin >> str;

    ofstream fout("cpp.txt");
    fout << str;
    fout.close();

    char buff[70];

    ifstream fin("cpp.txt");
    if(fin.is_open()){
        fin.getline(buff, 70);
        cout << "string is: " << buff << endl;
        fin.close();
    }
    
}

void dz3_4(){
    char space = 32;
    char buff[255];

    ifstream fin;
    fin.open("cpp.txt");
    fin.getline(buff, 255);

    vector<char> v;

    cout << "buff: " << "\t" << buff << endl;
    
    if(fin.is_open()){
        for(int i = 0; i < sizeof(buff); i++){
            if(buff[i] > 48 && buff[i] < 58){
               v.push_back(buff[i]);
            }
            else if(buff[i] == 32){
                v.push_back(space);
            }
        }
    }

    for(int i = 0; i < size(buff); i++){
        cout << v[i];
    }
    fin.close();
} 

void dz3_5()
{
    string letters1;
    cout << "Введите строку, которую нужно отсортировать :)" << endl;
    cin >> letters1;
    //string letters = "QWERTYUIOPASDFGHJKLZXCVBNM";
    cout << "Сортирую... " << endl;
	for (int i = 0; i < letters1.length(); i++){
		for (int j = 0; j < letters1.length() - 1; j++)
		{
			int a = int(letters1[j]);
			int b = int(letters1[j+1]);
			if (a > b){
				char buff = letters1[j];
				letters1[j] = letters1[j+1];
				letters1[j+1] = buff;
			}
		}
    }

	cout <<"Answer is: " << letters1 << endl;
};

void binary_search(){
    int array[10];
    int sortarr;

    cout << "Введите числа для заполнения массива " << endl;
    for(int i = 0; i < 10; i++){
        cin >> array[i];
    }

    sort(array, array + 10);
    for( int i  = 0; i < 10; i++){
        cout << "Элемент массива" << array[i] << endl;
    }

    int key;
    cout << "Введите искомое число" << endl;
    cin >> key;

    int left = 0;
    int right = 9;
    int mid;
    bool flag = false;

    while((left <= right) && (flag != true)){
        mid = (left + right)/2;
        
        if (array[mid] == key) flag = true;

        if(array[mid] > key) right = mid - 1;
        else left = mid + 1;
    }

    if(flag == true) cout << "Индекс элемента " << mid << endl;
    else cout << "Ошибка" << endl;
}

void dz4_1(){

    double arr[10];
    double sum;

    cout << "Введите числа, которые хотите записать в файлик :)" << endl;

    for(int i = 0; i < 10; i++){ // записываю числа в файл
        cin >> arr[i];
    }

    fstream write;
    write.open("dz4.txt"); // открываю файл и проверяю откроется ли он
    if(!write.is_open()){
        cout << "Файл не может быть открыт :(" << endl;
    }

    for(int i = 0; i < 10; i++){ // записываю числа в массив
        write << arr[i] << "\t" << endl;
    }

    double buff[10];
    int j, temp;

    fstream fin;
    fin.open("dz4.txt"); // записываю числа из файла в массив
    for(int i = 0; i < 10; i++){
        fin >> buff[i];
    }

    for(int i = 0; i < 10; i++){ // нахожу сумму чисел массива
        sum = sum + buff[i];
    }
    
    cout << "sum is: \t" << sum << endl; // вывод и закрытие файла
    write.close();
}

void dz3_5a(){
    string str0;
    cout << "Введите строку, которую нужно отсортировать :)" << endl;
    cin >> str0;

    vector<string> str;
    str.push_back(str0);

    cout << "Сортирую... " << endl;

    for(int i = 0; i < size(str); i++){
        for(int j = 0; j < size(str) - 1; j++){
            if(str[j] > str[j+1]){
                string ch = (str[j]);
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout << "answer is " << "\n";
    for(int i = 0; i < size(str); i++){
        cout << str[i];
    }
}

void dz3_5b(){
    string str;
    char para[2];
    cout << "Введите строку \n";
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

    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < str.length() - 1; j++){
            if(tolower(str[j]) > tolower(str[j+1])){
                swap(str[j+1], str[j]);
            }
        }
    }
    cout << str << endl;
}

double rectangle(double  rectangleA, double  rectangleB){
    double S1 =  rectangleA *  rectangleB; 
    return S1;
}

double triangle(double triangleA, double triangleB, double triangleC){
    double p = (triangleA + triangleB + triangleC) / 2;
    double S2 = sqrt(p * (p - triangleA) * (p - triangleB) * (p - triangleC));
    return S2;
}

double mihail_circle(double R){
    double S3 = 3.14*R*R;
    return S3;
}

void squares(string square){
    int a;
    if(square == "прямоугольник" || square == "Прямоугольник") a = 1;
    if(square == "треугольник" || square == "Треугольник") a = 2;
    if(square == "круг" || square == "Круг" || square == "Окружность" || square == "окружность") a = 3;

    switch(a){ // использую новую перменную а, т.к. оператор принимает только исчисляемые переменные
        case 1:{
            cout << "Введите стороны" << endl;
            
            double rectangleA;
            double rectangleB;
            cin >> rectangleA;
            cin >> rectangleB;

            rectangle(rectangleA, rectangleB);
            double S1 = rectangle(rectangleA, rectangleB);
            cout << "answer is \t" <<  S1 << endl;
        break;
        }
        case 2:{
            cout << "Введите стороны" << endl;

            double triangleA;
            double triangleB;
            double triangleC;
            cin >> triangleA;
            cin >> triangleB;
            cin >> triangleC;

            double S2 = triangle(triangleA, triangleB, triangleC);
            cout << "answer is \t" <<  S2 << endl;
        break;
        }
        case 3:{
            cout << "Введите радиус" << endl;

            double R;
            cin >> R;

            double S3 = mihail_circle(R);
            cout << "answer is: " <<  S3 << endl;
        break;
        }
    }
}

void USA(){
    bool flag = false;
    string underscore = "______________________________";
    string underscore1 = "________________________";
    string stars = "************"; 
    for(int i = 0; i < 4; i++){ // число строк
        for(int j = 0; j < 12; j++){ // количество звездочек символов в строке
            cout << "*";
        }
        cout << underscore <<endl;
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 42; j++){
            cout << "_";
        }
        cout << endl;
    }
}

string sign_check(double sign){
    string zero = "Число является нулём";
    string plus = "Число положительное";
    string minus = "Число отрицательное";
    if(sign == 0){
        return zero;
    }
    else if(sign > 0){
        return plus;
    }
    else{
        return minus;
    }
}

double sign(double sign){
    string answer = sign_check(sign);
    cout << "answer is \t" << answer << endl;
    return 0;
}

int main(){
    setlocale(LC_ALL, "rus");
    dz3_4();
}

