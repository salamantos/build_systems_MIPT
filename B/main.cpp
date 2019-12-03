#include "main.h"

/*!
 * \brief Выполнить функцию из библиотеки A
 *
 * Просто вывызает функцию из A
 */
void do_lib_A_stuff() {
	do_almost_nothing();
}

/*!
 * \brief Главная функция
 */
int main() {
	do_lib_A_stuff();
	return 0;
}

