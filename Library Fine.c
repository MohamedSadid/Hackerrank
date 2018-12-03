int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {

  int days = (d1 > d2)   ? ((d1 - d2) * 15) : (0);
  int months = (m1 > m2) ? ((m1 - m2) * 500) : (0);
  int years = (y1 > y2)  ? ((y1 - y2) * 10000) : (0);

  if (y1 < y2) {
      return 0;
  } else if (y2 == y1) {
      if (m1 < m2) {
        return 0;
      }
  }
  if (years) {
      return years;
  } else if (months) {
      return months;
  } else {
      return days;
  }
}