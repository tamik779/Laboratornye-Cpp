//Перевести число из секунд в формат «дни : часы:минуты:секунды».
#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	long long seconds,days, hours, minutes, sec;
	std::cout << "Введите количество секунд:";
	std::cin >> seconds;
	days = seconds / 86400;
	seconds %= 86400;
	hours = seconds / 3600;
	seconds %= 3600;
	minutes = seconds / 60;
	seconds %= 60;
	sec = seconds - (seconds / 60) - (hours * 60);
	std::cout <<days<<":" << hours << ":" << minutes << ":" << sec << std::endl;
}