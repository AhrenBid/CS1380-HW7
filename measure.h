#ifndef MEASURE_H
#define MEASURE_H

/**
 * Functions for practicing function calls and multi-file C programs.
 *
 * Implement each function declared below in measure.c.
 */

/**
 * Returns the square of x.
 *
 * Example:
 *   square(5) returns 25.
 */
int square(int x);

/**
 * Returns the smaller of a and b.
 */
int min2(int a, int b);

/**
 * Returns the larger of a and b.
 */
int max2(int a, int b);

/**
 * Restricts value to the range between lo and hi.
 *
 * If value is below the range, returns the lower bound.
 * If value is above the range, returns the upper bound.
 * Otherwise, returns value unchanged.
 *
 * The function must also work if lo and hi are given
 * in reverse order.
 *
 * Examples:
 *   clamp(150, 0, 100) returns 100.
 *   clamp(-10, 0, 100) returns 0.
 *   clamp(50, 100, 0) returns 50.
 *
 * Your implementation must call min2(), max2(), or both
 * rather than duplicating all of their comparison logic.
 */
int clamp(int value, int lo, int hi);

/**
 * Returns true if n is even and false if n is odd.
 */
bool is_even(int n);

/**
 * Converts a temperature from Celsius to Fahrenheit.
 *
 * Use the formula:
 *   F = C * 9.0 / 5.0 + 32.0
 */
double celsius_to_fahrenheit(double c);

/**
 * Returns the area of a rectangle.
 *
 * If length or width is negative, returns 0.
 */
int rectangle_area(int length, int width);

/**
 * Returns the perimeter of a rectangle.
 *
 * If length or width is negative, returns 0.
 */
int rectangle_perimeter(int length, int width);

/**
 * Returns the volume of a rectangular box.
 *
 * If any dimension is negative, returns 0.
 *
 * Your implementation must call rectangle_area()
 * to calculate the area of the base, then multiply
 * that result by height.
 */
int box_volume(int length, int width, int height);

/**
 * Prints the dimensions, area, and perimeter of a rectangle.
 *
 * Example output:
 *
 *   Rectangle 4 x 3
 *   Area: 12
 *   Perimeter: 14
 *
 * Your implementation must call rectangle_area() and
 * rectangle_perimeter() rather than repeating their calculations.
 */
void print_rectangle(int length, int width);

#endif
