#include "main.h"

/*!
 * \brief Выполнить функцию из библиотек A и C
 *
 * Просто вывызает функцию из A и C
 */
void do_lib_A_stuff() {
	do_almost_nothing();
	do_absolutely_nothing();
}

/*!
 * \brief Главная функция
 */
int main() {
	do_lib_A_stuff();
	return 0;
}

