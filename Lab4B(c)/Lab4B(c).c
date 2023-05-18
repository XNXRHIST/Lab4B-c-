/*Обчислити суму квадратів всіх парних чисел у діапазоні [1;20].
* з використанням циклу з післяумовою

*/
#include <stdio.h>//підключаємо необхідну для роботи бібліотеку

int main() {//Оголошуємо змінні
    int sum = 0;//Змінна для зберігання суми
    int i = 2;//Змінна для ітерації по парних числах

    do {
        sum += i * i;//Додавання квадрату поточного числа до суми
        i += 2;//Збільшення i на 2 для переходу до наступного парного числа
    } while (i <= 20);//Перевірка умови після виконання циклу

    printf("Сума квадратів всіх парних чисел у діапазоні [1;20]: %d\n", sum);//Виводимо все той же результат на екран юзера "1540"

    return 0;//Кінець програми
}
