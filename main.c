#include "measure.h"
#include "stdio.h"

int
main (void)
{
  printf ("Square of 5: %d\n", square (5));
  printf ("Min of 3 and 7: %d\n", min2 (3, 7));
  printf ("Max of 3 and 7: %d\n", max2 (3, 7));
  printf ("Clamp 10 between 0 and 5: %d\n", clamp (10, 0, 5));
  printf ("Clamp 10 between 5 and 0: %d\n", clamp (10, 5, 0));
  printf ("Is 4 even? %s\n", is_even (4) ? "Yes" : "No");
  printf ("Is 5 even? %s\n", is_even (5) ? "Yes" : "No");
  printf ("Celsius 25 to Fahrenheit: %.2f\n", celsius_to_fahrenheit (25.0));
  printf ("Rectangle area (5, 10): %d\n", rectangle_area (5, 10));
  printf ("Rectangle area (-5, 10): %d\n", rectangle_area (-5, 10));
  printf ("Rectangle perimeter (5, 10): %d\n", rectangle_perimeter (5, 10));
  printf ("Rectangle perimeter (-5, 10): %d\n", rectangle_perimeter (-5, 10));
  printf ("Box volume (5, 10, 15): %d\n", box_volume (5, 10, 15));
  printf ("Box volume (-5, 10, 15): %d\n", box_volume (-5, 10, 15));
  printf ("Printing rectangle (5, 10):\n\n");
  print_rectangle (5, 10);

  return 0;
}
