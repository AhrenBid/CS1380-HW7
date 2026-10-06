#include "measure.h"
#include "stdbool.h"
#include "stdio.h"

int
square (int x)
{
  return x * x;
}

int
min2 (int a, int b)
{
  return (a < b) ? a : b;
}

int
max2 (int a, int b)
{
  return (a > b) ? a : b;
}

int
clamp (int value, int lo, int hi)
{
  return min2 (max2 (value, lo), hi);
}

bool
is_even (int x)
{
  return (x % 2) == 0;
}

double
celsius_to_fahrenheit (double celsius)
{
  return (celsius * 9.0 / 5.0) + 32.0;
}

int
rectangle_area (int length, int width)
{
  if (length < 0 || width < 0)
    {
      return 0; // Return an error code for invalid dimensions
    }
  return length * width;
}

int
rectangle_perimeter (int length, int width)
{
  if (length < 0 || width < 0)
    {
      return 0; // Return an error code for invalid dimensions
    }
  return 2 * (length + width);
}

int
box_volume (int length, int width, int height)
{
  if (length < 0 || width < 0 || height < 0)
    {
      return 0; // Return an error code for invalid dimensions
    }
  return rectangle_area (length, width) * height;
}

void
print_rectangle (int length, int width)
{
  if (length < 0 || width < 0)
    {
      return; // Exit the function for invalid dimensions
    }

  printf ("Rectangle: %d x %d\n", length, width);
  printf ("Area     : %d\n", rectangle_area (length, width));
  printf ("Perimeter: %d\n", rectangle_perimeter (length, width));
}