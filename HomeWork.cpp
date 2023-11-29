//1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
#include <iostream>
#include <math.h>

//Указываю, какие функции будут использованы
void square();
void circle();
void triangle();
void four();
void coordinates_pol_to_dec();
void coordinates_dec_to_pol();
void kvadr_urov();
void mediani();
void seconds();
void ravnobedreny();
void pokupka();
void pohudenie();
void umnojenie();
void peregovory();
void data();
void happiness();
void kopeika();
void paliandrom();
void nineteen();
void pramougolnik();
void dannye();




int main() {
    while (true) {
        //Для удобства проверки задания по номеру:

        int numb;
        std::cout << "Enter the number of task: ";
        std::cin >> numb;

        if (numb == 1) {
            square();
        }
        if (numb == 2) {
            circle();
        }
        if (numb == 3) {
            triangle();
        }
        if (numb == 4) {
            four();
        }
        if (numb == 5) {
            coordinates_dec_to_pol();
        }
        if (numb == 6) {
            coordinates_pol_to_dec();
        }
        if (numb == 7) {
            kvadr_urov();
        }
        if (numb == 8) {
            mediani();
        }
        if (numb == 9) {
            seconds();
        }
        if (numb == 10) {
            ravnobedreny();
        }
        if (numb == 11) {
            pokupka();
        }
        if (numb == 12) {
            pohudenie();
        }
        if (numb == 13) {
            umnojenie();
        }
        if (numb == 14) {
            peregovory();
        }
        if (numb == 15) {
            data();
        }
        if (numb == 16) {
            happiness();
        }
        if (numb == 17) {
            kopeika();
        }
        if (numb == 18) {
            paliandrom();
        }
        if (numb == 19) {
            nineteen();
        }
        if (numb == 20) {
            pramougolnik();
        }
        if (numb == 21) {
            dannye();
        }
      
    }

}


// Задача 1
void square() {
    int a;
    int b;
    int h;
    std::cout << "Enter the base of the trapezoid a: ";
    std::cin >> a;
    std::cout << "Enter the base of the trapezoid b: ";
    std::cin >> b;
    std::cout << "Enter the height of the trapezoid h: ";
    std::cin >> h;
    // Вычисляю площадь трапеции по формуле
    if ((a <= 0) || (b <= 0) || (h <= 0)) {
        std::cout << "Impossible to count the square!" << std::endl;
    }
    else {
        std::cout << "Square of trapezoid: " << (a + b) * h / 2 << std::endl;
    }

}
// Задача 2
void circle() {
    int r;
    double pi = 3.1415926535;
    std::cout << "Enter the radius of circle: ";
    std::cin >> r;
    // Вычисляю площадь круга и длину окружности по формуле
    if (r > 0) {
        std::cout << "Square of circle: " << pi * r * r << std::endl;
        std::cout << "Circumference lenght: " << 2 * pi * r << std::endl;
    }
    else {
        std::cout << "Impossible to complete the task!" << std::endl;
    }
}
// Задача 3
void triangle() {
    int a;
    int b;
    // Прошу пользователя ввести стороны треугольника
    std::cout << "Enter the side a of triangle: ";
    std::cin >> a;
    std::cout << "Enter the side b of triangle: ";
    std::cin >> b;
    // Вычисляю гипотенузу и площадь по формулам
    if ((a >= 0) && (b >= 0)) {
        std::cout << "Hypotenuse of triangle: " << sqrt(a * a + b * b) << std::endl;
        std::cout << "Square of triangle: " << (a * b) / 2 << std::endl;
    }
    else {
        std::cout << "Impossible to complete the task!" << std::endl;
    }
}
// Задача 4
void four() {
    int num;
    // Прошу пользователя ввести четырёхзначное число
    std::cout << "Enter four-digit number: ";
    std::cin >> num;
    //Чтобы найти сумму цифр, ищу отдельно цифры, присваивая их значения переменным, и затем складываю
    int a = num % 10;
    int b = num / 10 % 10;
    int c = num / 100 % 10;
    int d = num / 1000;
    std::cout << "The sum of digits: " << (a + b + c + d) << std::endl;

}
// Задача 5
void coordinates_dec_to_pol() {
    double x;
    double y;
    // Прошу пользователя ввести координаты в декартовой системе
    std::cout << "Enter the coordinate x: ";
    std::cin >> x;
    std::cout << "Enter the coordinate y: ";
    std::cin >> y;
    // По формуле вычисляю координаты в полярной системе
    double p = sqrt(x * x + y * y);
    double q = atan(y / x);
    std::cout << "Coordinates in polar system: x: " << p << " y: " << q << std::endl;

}
// Задача 6
void coordinates_pol_to_dec() {
    double r;
    double q;
    // Прошу пользователя ввести угол и радиус для полярной системы
    std::cout << "Enter the radius in polar system: ";
    std::cin >> r;
    std::cout << "Enter the corner in polar system: ";
    std::cin >> q;
    // По формуле вычисляю координаты в декартовой системе
    double x = r * cos(q);
    double y = r * sin(q);
    std::cout << "Coordinates in Cartesian system: x: " << x << " y: " << y << std::endl;
}

// Задача 7
void kvadr_urov() {
    double a;
    double b;
    double c;
    // Отдельно ввожу значения коэффициентов квадратного уравнения (double)
    std::cout << "For a quadratic equation of the format a*x^2 + b*x+c, enter a: ";
    std::cin >> a;
    std::cout << "For a quadratic equation of the format a*x^2 + b*x+c, enter b: ";
    std::cin >> b;
    std::cout << "For a quadratic equation of the format a*x^2 + b*x+c, enter c: ";
    std::cin >> c;
    double d = (b * b - 4 * a * c);
    //Если дискриминант меньше нуля - указываю на это пользователю
    if (d < 0) {
        std::cout << "Oops, the discriminant is less than zero! It is impossible to count";
    }
    // В другом случае считаю значения х1 и х2 и вывожу их
    else {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "The roots of the introduced equation: х1 = " << x1 << ", x2 = " << x2;
    }
}
// Задача 8
void mediani() {
    double a;
    double b;
    double c;
    // Прошу пользователя ввести стороны треугольника
    std::cout << "Enter the side a of the triangle: ";
    std::cin >> a;
    std::cout << "Enter the side b of the triangle: ";
    std::cin >> b;
    std::cout << "Enter the side c of the triangle: ";
    std::cin >> c;
    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (c + b > a)) { //проверяю треугольник на возможность существования
        //Вычисляю сторону нового треугольника т.е. ищу три медианы, соответствующие трём сторонам данного треугольника
        double storona_a = sqrt((2 * b * b + 2 * c * c - a * a) / 4);
        double storona_b = sqrt((2 * a * a + 2 * c * c - b * b) / 4);
        double storona_c = sqrt((2 * b * b + 2 * a * a - c * c) / 4);
        // Ищу медианы нового треугольника, используя его ранее полученные стороны
        double mediana_a = sqrt((2 * storona_b * storona_b + 2 * storona_c * storona_c - storona_a * storona_a) / 4);
        double mediana_b = sqrt((2 * storona_a * storona_a + 2 * storona_c * storona_c - storona_b * storona_b) / 4);
        double mediana_c = sqrt((2 * storona_a * storona_a + 2 * storona_b * storona_b - storona_c * storona_c) / 4);
        std::cout << "Sides of triangle " << mediana_a << " , " << mediana_b << " , " << mediana_c << std::endl;
    }
    else {
        std::cout << "Impossible to complete the task!" << std::endl;
    }
}

// Задача 9
void seconds() {
    int sec;
    std::cout << "Enter the current second: ";
    std::cin >> sec;
    if (sec >= 0) {
        // Вычисляю час делением без остатка
        int hours = sec / 3600;
        // Вычисляю минуты поиском остатка от деления (секунды минус часы в секундах) и делением без остатка на количество секунд в минуте
        int min = (sec - hours * 3600) / 60;
        std::cout << "Now " << hours << " hours " << min << " minutes" << std::endl;
    }
    else {
        std::cout << "Impossible to complete the task!" << std::endl;
    }

}

// Задача 10
void ravnobedreny() {
    int a;
    int b;
    int c;
    std::cout << "Enter the side a of the triangle: ";
    std::cin >> a;
    std::cout << "Enter the side b of the triangle: ";
    std::cin >> b;
    std::cout << "Enter the side c of the triangle: ";
    std::cin >> c;
    // проверка на то, может ли треугольник существовать
    if ((a + b <= c) || (a + c <= b) || (c + b <= a) || (a < 0) || (b < 0) || (c < 0)) { 
        std::cout << "The triangle does not excist!" << std::endl;
    }
    // Треугольника равнобедренный, если равны любые две его стороны - использую условие или:
    else if ((a == b) || (a == c) || (b == c) && ((a + b > c) && (a + c > b) && (c + b > a))) {
        std::cout << "The triangle is isosceles" << std::endl;
    }
 
    else {
        std::cout << "The triangle is not isosceles!" << std::endl;
    }

}

// Задача 11
void pokupka() {
    int sum;
    std::cout << "Enter the purchase amount: ";
    std::cin >> sum;
    // Два варианта: сумма больше 1000 или меньше. Если больше - учитываю скидку
    if (sum > 1000) {
        std::cout << "Purchase amount including discount: " << (sum * 90 / 100) << std::endl;
    }
    // Сумма меньше 1000 - вывожу прежнюю цену
    else {
        std::cout << "Purchase amount: " << sum << std::endl;
    }
}

// Задача 12
void pohudenie() {
    int heigh;
    int mas;
    // Прошу пользователя ввести рост и вес:
    std::cout << "Enter your height: " << std::endl;
    std::cin >> heigh;
    std::cout << "Enter your weight: " << std::endl;
    std::cin >> mas;
    if ((heigh >= 1) && (mas >= 1)) {
        //предполагаем три варианта - масса меньше или больше нормы, или равна ей
        if ((heigh - 100) < mas) {
            std::cout << "It seems you need to lose some weight" << std::endl;
        }
        else if ((heigh - 100) > mas) {
            std::cout << "It seems you should get a little fatter" << std::endl;
        }
        else  if ((heigh - 100) == mas) {
            std::cout << "Great! You have the perfect weight!" << std::endl;
        }
    }
}

// Задача 13
void umnojenie() {
    //два рандомных числа в диапазоне от 1 до 9
    int a = rand() % 9 + 1;
    int b = rand() % 9 + 1;
    int m;
    std::cout << "Enter the multiplication of the numbers: " << a << " and " << b << std::endl;
    std::cin >> m;
    //сравниваем число, введённое пользователем, с умноженными рандомными числами
    if (m == a * b) {
        std::cout << "Right! Composition " << a << " and " << b << " = " << m << std::endl;
    }
    //выводит правильный ответ
    else {
        std::cout << "Unfortunately, the answer is incorrect! The product of numbers " << a << " и " << b << " = " << a * b << std::endl;

    }
}

// Задача 14
void peregovory() {
    int sum = 100; //рублей в час - стоимость переговоров
    int tim;
    int week;
    // Прошу пользователя ввести продолжительность переговоров и день недели
    std::cout << "Enter the duration of the negotiations in hours: ";
    std::cin >> tim;
    std::cout << "Enter the number of the day of the week on which you plan to conduct negotiations: ";
    std::cin >> week;
    //если день недели суббота или воскресенье - стоимость умножается на 0.8
    if ((week == 6) || (week == 7) || (week == 1) || (week == 2) || (week == 3) || (week == 4) || (week == 5)) { //Проверяю, существует ли вообще такой день недели (от 1 до 7)
        if ((week == 6) || (week == 7)) {
            std::cout << "The cost of negotiations will be: " << sum * tim * (0.8) << std::endl;
        }
        //любой другой день недели - стоимость стандартная
        else {
            std::cout << "The cost of negotiations will be: " << sum * tim << std::endl;
        }
    }
    else {
        std::cout << "Impossible to complete the task!" << std::endl;
    }

}

// Задача 15
void data() {
    int month;
    std::cout << "Enter the month number: ";
    std::cin >> month;

    //сначала по месяцу сверяем время года, потом в ещё одном if ищем сам месяц

    if (month == 1 || month == 2 || month == 12) {
        std::cout << "Season: Winter" << std::endl;
        if (month == 1) {
            std::cout << "Month: January" << std::endl;
        }
        if (month == 2) {
            std::cout << "Month: February" << std::endl;
        }
        if (month == 12) {
            std::cout << "Month: December" << std::endl;
        }
    }
    if (3 <= month && month <= 5) {
        std::cout << "Season: Spring" << std::endl;
        if (month == 3) {
            std::cout << "Month: March" << std::endl;
        }
        if (month == 4) {
            std::cout << "Month: April" << std::endl;
        }
        if (month == 5) {
            std::cout << "Month: May" << std::endl;
        }
    }
    if (6 <= month && month <= 8) {
        std::cout << "Season: Summer" << std::endl;
        if (month == 6) {
            std::cout << "Month: June" << std::endl;
        }
        if (month == 7) {
            std::cout << "Month: July" << std::endl;
        }
        if (month == 8) {
            std::cout << "Month: August" << std::endl;
        }
    }
    if (9 <= month && month <= 11) {
        std::cout << "Season: Autumn" << std::endl;
        if (month == 9) {
            std::cout << "Month: September" << std::endl;
        }
        if (month == 10) {
            std::cout << "Month: October" << std::endl;
        }
        if (month == 11) {
            std::cout << "Month: November" << std::endl;
        }
    }
    else {
        std::cout << "There is no such month!" << std::endl;
    }
}

// Задача 16
void happiness() {
    int num;
    std::cout << "Enter a six-digit number: ";
    std::cin >> num;
    //постепенно ищем остаток, увеличивая степень десятки на 1 с каждым шагом, и делим на 10 в степени, меньше на 1  
    int a = num % 10;
    int b = num % 100 / 10;
    int c = num % 1000 / 100;
    int d = num % 10000 / 1000;
    int e = num % 100000 / 10000;
    int f = num % 1000000 / 100000;
    if ((a + b + c) == (d + e + f)) { //сравниваем сумму первых трёх и сумму других трёх чисел
        std::cout << "Lucky number!!!" << std::endl;
    }
    else {
        std::cout << "The number is unlucky..." << std::endl;
    }
}

// Задача 17
void kopeika() {
    int num;
    std::cout << "Enter a number from 1 to 99: ";
    std::cin >> num;
    int num_1 = num % 10; //если число будет больше 10, то обращаем внимание только на вторую цифру
    if (num == 1 || num == 21 || num == 31 || num == 41 || num == 51 || num == 61 || num == 71 || num == 81 || num == 91) {
        std::cout << num << " copeica " << std::endl;
    }
    if ((num >= 2 && num <= 4) || (num_1 >= 2 && num_1 <= 4)) {
        std::cout << num << " copeici " << std::endl;
    }
    if ((num >= 5 && num <= 9) || (num_1 >= 5 && num_1 <= 9) || (num_1 == 0)) {
        std::cout << num << " copeec " << std::endl;
    }
}

// Задача 18
// функция на проверку количества цифр в числе - число с каждым шагом делится на 10, и к сумме прибавляется 1
int count(int a) {
    int col_1 = 0;
    while (a != 0) {
        col_1 = col_1 + 1;
        a /= 10;
    }
    return col_1;
}

void paliandrom() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    int col = count(num);
    int sered = col / 2;
    int n = 0;
   
        for (int a = 1; a <= sered; a++) {

            //для удобства делаю для 10 в степени количества цифр в числе и количества цифр-1 отдельные переменные, так как использую их несколько раз

            int b = pow(10, col);
            int c = pow(10, col - 1);


            if (num % 10 == num % b / c) { //сравниваю первую и последнюю цифры
                int d = num % b / c;

                num = (num - (d * c)) / 10; //меняю число, удаляя первую и последнюю цифры

                col = col - 2; //количество уменьшаю на 2, так как удаляю по одной цифре с каждого конца числа
                n++; //если условия выполнено - увеличиваю на 1 переменную n
            }
        }
        //сравниваю n с половиной длины числа
        if (n == sered) {
            std::cout << "The number is a palindrome!" << std::endl;
        }
        else {
            std::cout << "The number is not a palindrome!" << std::endl;
        }

}

// Задача 19

void nineteen() {
    int num;
    int d = rand() % 729 + 1; //рандомное число от 1 до 729
    std::cout << "Number b = " << d << ". Enter a three-digit number: ";
    std::cin >> num;
    //ищем цифры введённого числа
    int a = num % 10;
    int b = num % 100 / 10;
    int c = num % 1000 / 100;

    int k = a * b * c;
    //Предполагаю три варианта: произведение больше или меньше числа, или равно ему
    if (k > d) {
        std::cout << "The multiplication of digits is greater than a number " << d << std::endl;
    }
    else if (k < d) {
        std::cout << "The multiplication of digits is less than a number " << d << std::endl;
    }
    else if (k == d) {
        std::cout << "The product of digits is equal to a number " << d << std::endl;
    }

    int m = (a + b + c) % 7; //Ищу остаток от деления суммы цифр на 7
    if (m == 0) {
        std::cout << "The sum of the digits is a multiple of 7 and is equal to " << a + b + c << std::endl;
    }
    else if (m != 0) {
        std::cout << "The sum of the digits is not a multiple of 7 and is equal to " << a + b + c << std::endl;
    }
}

// Задание 20
void pramougolnik() {
    double a = (double)rand()/10 + 1; //любое число от 1 до 10
    double b = (double)rand()/10 + 1;
    double c = (double)rand()/10 + 1;
    double d = (double)rand()/10 + 1;
    //Прямоугольник можно поместить в другой, если стороны ab попарно меньше сторон cd 
    if ((a > c && b > d) || (a > d && b > c)) {
        std::cout << "Rectangle with sides " << a << " and " << b << " can be placed in a rectangle with sides  " << c << " and " << d << std::endl;
    }
    else {
        std::cout << "Rectangle with sides " << a << " and " << b << " cannot be placed in a rectangle with sides  " << c << " and " << d << std::endl;
    }
}

// Задание 21
void dannye() {
    // Вывожу размеры основных типов данных с++ - количество байт, которые они занимают
    std::cout << "Size of int is  " << sizeof(int) << std::endl;
    std::cout << "Size of float is  " << sizeof(float) << std::endl;
    std::cout << "Size of double is  " << sizeof(double) << std::endl;
    std::cout << "Size of char is  " << sizeof(char) << std::endl;
    std::cout << "Size of short is  " << sizeof(short) << std::endl;
    std::cout << "Size of bool is  " << sizeof(bool) << std::endl;
}