/*
* НОД (GCD "Greatest common divisor") - наибольший общий делитель
* НОК (LCM "Least common multiple") - наименьшее общее кратное
*/
// https://brestprog.by/topics/gcd/
// https://e-maxx.ru/algo/euclid_algorithm

// Длинный НОД (долго выполняется). Алгоритм Евклида в чистом виде
int gcd(int a, int b) {
    while(a != b) {
        if(a > b) {
            a-=b;
        }else {
            b-=a;
        }
    }
    
    return a;
}

// Короткий НОД (самый лучший вариант т.к. по времени самый быстрый)
int gcd(int a, int b) {
    while(a != 0 and b != 0){
        if(a < b)
            b %= a;
        else
            a %= b;
    }
    
    return a + b;
}

// Рекурсивный НОД (самы короткий по размеру программы, 
// но медленный по сравнению с предыдущем, идеален, когда необходимо быстро реализовать НОД)*/
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

// рекурсивный способ + тернарный оператор
int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

// Алгоритм нахождения НОК
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
