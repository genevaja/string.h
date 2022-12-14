/*
 Функция копирует из строки src в буфер dest не более чем n символов
 (включая нулевой символ), не гарантируя завершения строки нулевым
 символом (если длина строки src больше или равна len).
 Если длина строки src меньше n, то буфер добивается до
 n нуль-символами.
 
 Аргументы:

 destination – указатель на строку в которую будут скопированы данные.
 source – указатель на строку источник копируемых данных.
 n – ограничение длинны копирования
 */

#include "./s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
    char *res = dest;
    for (s21_size_t i = 0; *src && i < n && *src != '\0'; *res = *src, res++, src++, i++) {; }
    if (n > s21_strlen(src)) {
        // заполнение нуль-символами конца массива, если
        // длина строки src меньше n
        while (n - s21_strlen(src) > 1) {
            *res = '\0';
            n--;
            res++;
        }
    }
    return (dest);
}
