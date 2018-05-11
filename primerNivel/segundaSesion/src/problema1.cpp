int yearPasados(int year1, int year2) {
  if(year1 > year2) {
    return year1 - year2;
  } else if(year2 > year1) {
    return year2 - year1;
  }

  return 0;
}
